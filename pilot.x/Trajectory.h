/****************************************************************************************
* Fichier     : Trajectory.h
* Description : Déplacement du robot.
* Auteur      : Christopher BUREL
* Version     : 2017.05.22
* Compilation : MPLAB X IDE (v3.45), compiler XC16 (v1.26) Lite
 ****************************************************************************************/

#ifndef TRAJECTORY_H
#define	TRAJECTORY_H

/****************************************************************************************
 * Includes
 ****************************************************************************************/
#include "PILOT_main.h"

/****************************************************************************************
 * Parameters
 ****************************************************************************************/
// Speed max => position reached in 1 second
#define SPEED_LIN    800   // [mm/s]
#define SPEED_ANG    3//2     // [rad/s]

// Acceleration => speed reached in 1 second
#define ACCEL_LIN    600//700//900   // [mm/s^2]  
#define ACCEL_ANG    4//5     // [rad/s^2]

// Jerk => acceleration reached in 1 period
#define JERK_LIN     2//2//1     // [step/period]
#define JERK_ANG     30//30//20    // [step/period]

#define SPEED_LIN_TO_STEP(mm_s)     (MM_TO_STEP(mm_s) * PERIOD)       // convert [mm/s] to [step/period]
#define SPEED_ANG_TO_STEP(rad_s)    (RAD_TO_STEP(rad_s) * PERIOD)     // convert [rad/s] to [step/period]
#define ACCEL_LIN_TO_STEP(mm_s2)    (MM_TO_STEP(mm_s2) * PERIOD_2)    // convert [mm/s^2] to [step/period]
#define ACCEL_ANG_TO_STEP(rad_s2)   (RAD_TO_STEP(rad_s2) * PERIOD_2)  // convert [rad/s^2] to [step/period]

#define BRAKE_DISTANCE  150 // mm

#define LOOK_DISTANCE   20 // mm

#define MAX_PATH_FAILING  5

/****************************************************************************************
 * Macros
 ****************************************************************************************/
// Timeout in millisecond
#define Set_Timeout_Traj(time)    do{timeout_traj = current_time + (time);}while(0)
#define TIMEOUT_TRAJ              (current_time > timeout_traj)

/****************************************************************************************
 * Variables
 ****************************************************************************************/
extern uint32 timeout_traj;

/****************************************************************************************
 * Prototypes fonctions
 ****************************************************************************************/
void Translate(float32 distance_mm, float32 speed_mm_s);
void Rotate(float32 angle_rad, float32 speed_rad_s);
void Rotate_To_Point(t_point point_mm, float32 speed_rad_s);
void Rotate_To_Angle(float32 angle_deg, float32 speed_rad_s);
float32 Go_To_Point(t_point point_mm, float32 max_speed_mm_s, float32 end_speed_mm_s);
boolean Wait_Trajectory(void);
void While_Trajectory(void (*function)(void));
void Emergency_Brake(void);
boolean Path_Planning(void);
boolean Navigate_To_Vertex(t_vertexID vertex_ID, uint16 end_distance_mm);
float32 Adapt_End_Speed(float32 end_speed);
float32 Adapt_Max_Speed(float32 max_speed, float32 angle_rad);
void print_navigation(void);

#endif	/* TRAJECTORY_H */

