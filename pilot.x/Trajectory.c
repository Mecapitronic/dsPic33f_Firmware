/****************************************************************************************
* Fichier     : Trajectory.c
* Description : Déplacement du robot.
* Auteur      : Christopher BUREL
* Version     : 2017.05.22
* Compilation : MPLAB X IDE (v3.45), compiler XC16 (v1.26) Lite
****************************************************************************************/

/****************************************************************************************
 * Includes
 ****************************************************************************************/
#include "Trajectory.h"

/****************************************************************************************
 * Variables
 ****************************************************************************************/
uint32 timeout_traj = 0;


/****************************************************************************************
 * Translate the robot of distance with max speed and braking
 ****************************************************************************************/
void Translate(float32 distance_mm, float32 speed_mm_s)
{
	MOVE_Setpoint_Position(&move_lin, robot.lin.position + MM_TO_STEP(distance_mm));
	MOVE_Setpoint_Position(&move_ang, robot.ang.position);

	MOVE_Setpoint_Speed(&move_lin, SPEED_LIN_TO_STEP(speed_mm_s), 0);
	MOVE_Setpoint_Speed(&move_ang, SPEED_ANG_TO_STEP(SPEED_ANG), 0);
  
  Set_Asserv(ON);
}


/****************************************************************************************
 * Rotate the robot of angle with max speed and braking
 ****************************************************************************************/
void Rotate(float32 angle_rad, float32 speed_rad_s)
{
  // Angle simplification
  while(angle_rad > PI ) angle_rad -= TWO_PI;
  while(angle_rad < -PI ) angle_rad += TWO_PI;
//  angle_rad = MOD(angle_rad, TWO_PI);

	MOVE_Setpoint_Position(&move_lin, robot.lin.position);
	MOVE_Setpoint_Position(&move_ang, robot.ang.position + RAD_TO_STEP(angle_rad));

	MOVE_Setpoint_Speed(&move_lin, SPEED_LIN_TO_STEP(SPEED_LIN), 0);
	MOVE_Setpoint_Speed(&move_ang, SPEED_ANG_TO_STEP(speed_rad_s), 0);
  
  Set_Asserv(ON);
}

/****************************************************************************************
 * Rotate the robot in direction of point with max speed and braking
 ****************************************************************************************/
void Rotate_To_Point(t_point point_mm, float32 speed_rad_s)
{
  int32 dx = point_mm.x - robot.mm.x;
  int32 dy = point_mm.y - robot.mm.y;

  float32 angle_rad = ATAN2(dy, dx) - robot.rad;

	// Angle simplification
  while(angle_rad > PI ) angle_rad -= TWO_PI;
  while(angle_rad < -PI ) angle_rad += TWO_PI;
//  angle_rad = MOD(angle_rad, TWO_PI);

	Rotate(angle_rad, speed_rad_s);
}

/****************************************************************************************
 * Rotate the robot at an angle position (deg) with max speed (rad/s) and braking
 ****************************************************************************************/
void Rotate_To_Angle(float32 angle_deg, float32 speed_rad_s)
{
  Rotate(DEG_TO_RAD(angle_deg-robot.deg), SPEED_ANG);
}

/****************************************************************************************
 * Go to point with max speed and end speed (translate and rotate simultaneously)
 ****************************************************************************************/
float32 Go_To_Point(t_point point_mm, float32 max_speed_mm_s, float32 end_speed_mm_s)
{
  int32 dx = point_mm.x - robot.mm.x;
  int32 dy = point_mm.y - robot.mm.y;

  float32 angle_rad = ATAN2(dy, dx) - robot.rad;

  float32 distance_mm = Approx_Distance(ABS(dx), ABS(dy));

	// Angle simplification
  while(angle_rad > PI ) angle_rad -= TWO_PI;
  while(angle_rad < -PI ) angle_rad += TWO_PI;
//  angle_rad = MOD(angle_rad, TWO_PI);

	// Linear speed adaptation from angle
  max_speed_mm_s = Adapt_Max_Speed(max_speed_mm_s, angle_rad);
  end_speed_mm_s = Adapt_End_Speed(end_speed_mm_s);
  // limit end speed with max speed
  if (end_speed_mm_s > max_speed_mm_s) 
    end_speed_mm_s = max_speed_mm_s;

	// Update position setpoint
	MOVE_Setpoint_Position(&move_lin, robot.lin.position + MM_TO_STEP(distance_mm));
	MOVE_Setpoint_Position(&move_ang, robot.ang.position + RAD_TO_STEP(angle_rad));

	MOVE_Setpoint_Speed(&move_lin, SPEED_LIN_TO_STEP(max_speed_mm_s), SPEED_LIN_TO_STEP(end_speed_mm_s));
	MOVE_Setpoint_Speed(&move_ang, SPEED_ANG_TO_STEP(SPEED_ANG), 0);
  
  Set_Asserv(ON);
  
  return angle_rad;
}

/****************************************************************************************
 * Return YES if trajectory is in progress
 ****************************************************************************************/
boolean Wait_Trajectory(void)
{
	return !(MOVE_Check_Position(&move_lin) && MOVE_Check_Position(&move_ang));
}

void While_Trajectory(void (*function)(void))
{
	while (Wait_Trajectory()) {
		function();
	};
}

/****************************************************************************************
 * Brake the robot
 ****************************************************************************************/
void Emergency_Brake(void)
{
  MOVE_Setpoint_Speed(&move_lin, 0, 0);
  MOVE_Setpoint_Speed(&move_ang, 0, 0);
}

/****************************************************************************************
 * Path planning
 ****************************************************************************************/
boolean Path_Planning(void)
{
  boolean result;
  LED = !LED;
  //Update_Obstacles(BRAKE_DISTANCE);
  Update_Passability_Graph();
  result = Path_Finding();
  //LED = OFF;
  return result;
}

//#define LINE_TRAJECTORY => A revoir
#ifdef LINE_TRAJECTORY
/****************************************************************************************
* Navigate to vertex of passability graph, return OK if end distance is reached
****************************************************************************************/
boolean Navigate_To_Vertex(t_vertexID vertex_ID, uint16 end_distance_mm)
{
  uint8 path_failing = 0;
  uint8 navigation_step = 0;
  float32 angle_rad = 0;

	Set_End_Vertex(vertex_ID);

  Set_Timeout_Traj(20000);  // 20s
	
  do
	{
    switch (navigation_step)
    {
      case 0: // stop
        Emergency_Brake();
        if (robot.lin.velocity < SPEED_LIN_TO_STEP(2)) 
        {
          navigation_step = 1;
        }
        if (TIMEOUT_TRAJ) navigation_step = 3;
        break;
        
      case 1: // rotation
        if (Path_Planning())
        {
          Rotate_To_Point(vertex[solution[0]].point, SPEED_ANG);
          path_failing = 0;
        }
        else
        {
          if (path_failing++ > MAX_PATH_FAILING) navigation_step = 3;
        }
        if (!Wait_Trajectory()) 
        {
          navigation_step = 2;
        }
        if (TIMEOUT_TRAJ) navigation_step = 3;
        break;
        
      case 2: // translation
        if (Path_Planning())
		{
          angle_rad = Go_To_Point(vertex[solution[0]].point, SPEED_LIN, 0);

          if (ABS(angle_rad) > 0.2) navigation_step = 0;
		}
		else
		{
          navigation_step = 0;
        }
        if (!Wait_Trajectory()) 
        {
          navigation_step = 1;
        }
        if (TIMEOUT_TRAJ) navigation_step = 3;
        break;
        
      case 3: // exit NOK
			return NOK;
		}
  }
  while ((Get_Distance_Vertex(0,Get_End_Vertex()) > end_distance_mm));
  
  return OK;
}
#else
/****************************************************************************************
* Navigate to vertex of passability graph, return OK if end distance is reached
****************************************************************************************/
boolean Navigate_To_Vertex(t_vertexID vertex_ID, uint16 end_distance_mm)
{
  uint8 path_failing = 0;
  
  Set_End_Vertex(vertex_ID);

  Set_Timeout_Traj(15000);  // 15s

  do
	{
		if (Path_Planning())
		{
			if (solution[1] != INVALID_VERTEX_ID) // if second next point exist
			{
				if (Get_Distance_Point(&vertex[solution[0]].point, &robot.mm) < LOOK_DISTANCE)  // just before arrived to next point
				{
					Go_To_Point(vertex[solution[1]].point, SPEED_LIN, SPEED_LIN); // go to second next point
				}
				else
				{
					Go_To_Point(vertex[solution[0]].point, SPEED_LIN, SPEED_LIN); // otherwhise, go to first next point
				}
			}
			else
			{
				Go_To_Point(vertex[solution[0]].point, 300, 0);  // it is the last point // 500 mm/s
			}
            path_failing = 0;
		}
		else
		{
            Emergency_Brake();
            if (path_failing++ > MAX_PATH_FAILING)
			    return NOK;
		}
	}
	while ((Get_Distance_Vertex(0, Get_End_Vertex()) > end_distance_mm) && !TIMEOUT_TRAJ);

  if (TIMEOUT_TRAJ) 
    return NOK;
  
	return OK;
}
#endif

/****************************************************************************************
* Return the end speed adapted for trajectory
****************************************************************************************/
float32 Adapt_End_Speed(float32 end_speed)
{
  int32 dx = 0;
  int32 dy = 0;
  float32 angle_rad = 0;
  float32 reduction = 0;

  if (solution[1] != INVALID_VERTEX_ID) // if second next point exist
		{
    dx = vertex[solution[1]].point.x - vertex[solution[0]].point.x;
    dy = vertex[solution[1]].point.y - vertex[solution[0]].point.y;

    angle_rad = ABS(ATAN2(dy, dx) - robot.rad);

    reduction = 1 - (ABS(angle_rad) * 4);
    if (reduction < 0) reduction = 0;
}
  return end_speed * reduction;
}

/****************************************************************************************
* Return the max speed adapted for trajectory
****************************************************************************************/
float32 Adapt_Max_Speed(float32 max_speed, float32 angle_rad)
{
  float32 reduction = 1 - (ABS(angle_rad) * 4);
  if (reduction < 0) reduction = 0;
  
  return max_speed * reduction;
}

#ifdef SERIAL_PRINT
void print_navigation(void)
{
	printf("%ld", robot.mm.x);
	printf(";");
	printf("%ld", robot.mm.y);
	printf(";");
	printf("%.0f", RAD_TO_DEG(robot.rad));
	printf(";");
	printf("%ld", vertex[0].point.x); printf(","); printf("%ld", vertex[0].point.y);
	printf(";");
	printf("%ld", vertex[Get_End_Vertex()].point.x); printf(","); printf("%ld", vertex[Get_End_Vertex()].point.y);

	if (path_point_local != NULL)
	{
		printf(";");
		while (path_point_local != NULL)
		{
			printf("%d", path_point_local->data);
			path_point_local = path_point_local->next;
			if (path_point_local != NULL)
				printf(",");
		}
	}
	printf("\n");
}
#endif



