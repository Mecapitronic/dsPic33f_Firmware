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
uint8 obs_cursor = 0;
uint16 obstacleFading[MAX_OBSTACLE];
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
    for (uint8 i=0; i<MAX_OBSTACLE; i++)
    {
        obstacle[i].p.x = 0;
        obstacle[i].p.y = 0;
        obstacle[i].r = 0;
    }
    
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

boolean IsInMap(t_point p)
{
    // check map border limits
	if (p.x < 0) return 0;
    if (p.x > MAP_X_MAX) return 0;
	if (p.y < 0) return 0;
    if (p.y > MAP_Y_MAX) return 0;
    return 1;
}

/****************************************************************************************
* Return a circle obstacle at angle and distance from robot center
****************************************************************************************/
t_circle Circle_Obstacle_Polar(float32 angle_rad, float32 distance_mm)
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

  reduction = distance_mm/1000;
  if (reduction < 1) reduction = 1;
  //else if (reduction < 0) reduction = 0;

  circle_obstacle.p.x = robot.mm.x + distance_mm*COS(angle_rad);
  circle_obstacle.p.y = robot.mm.y + distance_mm*SIN(angle_rad);
  circle_obstacle.r = (OBSTACLE_RADIUS * reduction) + 1;

	if (Is_False_Obstacle(circle_obstacle))
		return Circle(0, 0, 0);

	return circle_obstacle;
}

/****************************************************************************************
* Return a circle obstacle at x and y in absolute
****************************************************************************************/
t_circle Circle_Obstacle_Cart(int x, int y)
{
    t_circle circle_obstacle;
    if (x == 0 && y == 0)
		return Circle(0, 0, 0);
    circle_obstacle.p.x = x; //robot.mm.x
    circle_obstacle.p.y = y; //robot.mm.y
    circle_obstacle.r = OBSTACLE_RADIUS;
    
	if (Is_False_Obstacle(circle_obstacle))
		return Circle(0, 0, 0);    
	return circle_obstacle;
}

/****************************************************************************************
 * Update circle obstacle list for graph
 ****************************************************************************************/
void Update_Obstacles(void)
{
	uint8 i;

  if (obstacle_enable)
	{
    for (i=0; i<MAX_OBSTACLE; i++)
    {
		if (Is_Valid_Obstacle(i))
		{
			if (obstacleFading[i] > 0)
				obstacleFading[i]--;
			else
			{
				obstacle[i].p.x = 0;
				obstacle[i].p.y = 0;
				obstacle[i].r = 0;
			}
		}
	}
  }
}

/****************************************************************************************
 * Add circle obstacle for graph, return obstacle presence in margin at move direction
 ****************************************************************************************/
void Add_Obstacle_Polar(uint8 id)
{
	float32 angle = 0;
	uint16 distance = 0;
	t_circle obs;
	uint8 i = 0;
	boolean newObs = TRUE;

	if (obstacle_enable)
	{
		//angle = Get_Angle_LIDAR(id);
		//distance = Get_Distance_LIDAR(id);
		obs = Circle_Obstacle_Polar(DEG_TO_RAD(angle), distance);
		
		if (obs.r > 0)
		{
			for (i = 0; i < MAX_OBSTACLE; i++)
			{
				if (Is_Valid_Obstacle(i))
				{
					if (abs(obstacle[i].p.x - obs.p.x) < 100 && abs(obstacle[i].p.y - obs.p.y) < 100)
					{
						newObs = FALSE;
						obstacle[i] = obs;
						break;
					}
				}
			}
			if (newObs)
			{
				obstacle[obs_cursor] = obs;
				obstacleFading[obs_cursor] = 600;
				obs_cursor++;
				if (obs_cursor >= MAX_OBSTACLE)
					obs_cursor = 0;
			}
		}		
	}
	// Clear old distance
    //Reset_Distance_LIDAR(id);
}

/****************************************************************************************
 * Add circle obstacle for graph, return obstacle presence in margin at move direction
 ****************************************************************************************/
void Add_Obstacle_Cart(uint8 id, int x, int y)
{
	if (obstacle_enable)
	{
        obstacle[id] = Circle_Obstacle_Cart(x, y);
        //obstacleFading[id] = 100;	
	}
}
