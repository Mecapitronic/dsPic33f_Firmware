/****************************************************************************************
 * Fichier     : Obstacle.c
 * Description : Gestion des obstacles
 * Auteur      : Christopher BUREL
 * Version     : 2017.05.23
 * Compilation : MPLAB X IDE (v3.45), compiler XC16 (v1.26) Lite
 ****************************************************************************************/

/****************************************************************************************
 * Includes
 ****************************************************************************************/
#include "Obstacle.h"

/****************************************************************************************
 * Variables
 ****************************************************************************************/
t_circle obstacle[MAX_OBSTACLE];
t_circle false_obstacle[MAX_FALSE_OBSTACLE];
boolean obstacle_enable = NO;

/****************************************************************************************
 * Return the pointer address of obstacle (circle) from obstacle ID
 ****************************************************************************************/
t_circle Get_Obstacle(uint8 obstacleID)
{
	return obstacle[obstacleID];
}

/****************************************************************************************
 * Return 1 if the obstacle is valid (radius NOT zero)
 ****************************************************************************************/
boolean Is_Valid_Obstacle(uint8 obstacleID)
{
	return (obstacle[obstacleID].r != 0 ? 1 : 0);
}

/****************************************************************************************
* Initialize obstacle 
****************************************************************************************/
void Initialize_Obstacle(void)
{
  // Define false obstacle
	/*
	false_obstacle[0] = Circle(40, 1350, 40 + OBSTACLE_MARGIN);   // fusee 
	false_obstacle[1] = Circle(0, 1000, OBSTACLE_MARGIN);       // mat balise
	false_obstacle[2] = Circle(2960, 1350, 40 + OBSTACLE_MARGIN); // fusee
	false_obstacle[3] = Circle(3000, 1000, OBSTACLE_MARGIN);    // mat balise
	false_obstacle[4] = Circle(1150, 40, 40 + OBSTACLE_MARGIN);   // fusee
	false_obstacle[5] = Circle(1850, 40, 40 + OBSTACLE_MARGIN);   // fusee 
   */
  
  // enable obstacle detection
  obstacle_enable = YES;
}

/****************************************************************************************
* Return 1 if the circle obstacle is considered false
****************************************************************************************/
boolean Is_False_Obstacle(t_circle circle_obstacle)
{
	uint8 i;
	// check map border limits
	if (circle_obstacle.p.x < OBSTACLE_MARGIN) return 1;
  if (circle_obstacle.p.x > (MAP_X_MAX - OBSTACLE_MARGIN)) return 1;
	if (circle_obstacle.p.y < OBSTACLE_MARGIN) return 1;
  if (circle_obstacle.p.y > (MAP_Y_MAX - OBSTACLE_MARGIN)) return 1;
	// check some special point
	for (i = 0; i < MAX_FALSE_OBSTACLE; i++)
	{
		if (Get_Distance_Point(&circle_obstacle.p, &false_obstacle[i].p) <= false_obstacle[i].r)
			return 1;
	}
	return 0;
}

/****************************************************************************************
* Return a circle obstacle at angle and distance from robot center
****************************************************************************************/
t_circle Circle_Obstacle(float32 angle_rad, float32 distance_mm)
{
	t_circle circle_obstacle;
	uint16 distance_min;
  float32 reduction = 1;

  distance_mm += OBSTACLE_MARGIN; 
  
  if (distance_mm >= (LIDAR_CM_MAX*10))
		return Circle(0, 0, 0);

  distance_min = ROBOT_RADIUS + ROBOT_MARGIN + OBSTACLE_RADIUS + OBSTACLE_MARGIN; 
	if (distance_mm < distance_min)
		distance_mm = distance_min;  // insure minimum distance

  reduction = (1000 / distance_mm) - 1;
  if (reduction > 1) reduction = 1;
  else if (reduction < 0) reduction = 0;

  circle_obstacle.p.x = robot.mm.x + distance_mm*COS(angle_rad);
  circle_obstacle.p.y = robot.mm.y + distance_mm*SIN(angle_rad);
  circle_obstacle.r = (OBSTACLE_RADIUS * reduction) + 1;

	if (Is_False_Obstacle(circle_obstacle))
		return Circle(0, 0, 0);

	return circle_obstacle;
}

/****************************************************************************************
 * Update circle obstacle for graph, return obstacle presence in margin at move direction
 ****************************************************************************************/
boolean Update_Obstacle(uint16 margin)
{
	uint8 i;
	float32 angle=0;
	uint16 distance=0;
	boolean imminent_obstacle = NO;

  if (obstacle_enable)
	{
    for (i=0; i<MAX_OBSTACLE; i++)
    {
      angle = Get_Angle_LIDAR(i);
      distance = Get_Distance_LIDAR(i);
      obstacle[i] = Circle_Obstacle(DEG_TO_RAD(angle), distance);

		if (distance <= margin)
		{
			imminent_obstacle = YES;
		}
	}
  }
	// Clear old distance
  Reset_Distance_LIDAR();

  return imminent_obstacle;
}



