/****************************************************************************************
* Fichier     : Asserv.c
* Description : Asservissement des déplacements du robot.
* Auteur      : Christopher BUREL
* Version     : 2016.11.27
* Compilation : MPLAB X IDE (v3.45), compiler XC16 (v1.26) Lite
****************************************************************************************/

/****************************************************************************************
 * Includes
 ****************************************************************************************/
#include "Asserv.h"

/****************************************************************************************
 * Variables
 ****************************************************************************************/
t_move move_lin;  // linear move
t_move move_ang;  // angular move
t_PID PID_lin;  // linear PID
t_PID PID_ang;  // angular PID
int32 command_lin = 0;
int32 command_ang = 0;
int32 motor_right = 0;
int32 motor_left = 0;

// Asserv activation
boolean asserv_distance    = OFF;   
boolean asserv_orientation = OFF;

/****************************************************************************************
 * Initialize polar asserv
 ****************************************************************************************/
void Initialize_Asserv(void)
{
  // Linear
  PID_Setup(&PID_lin, P_LIN, I_LIN, D_LIN);
  MOVE_Initialize(&move_lin);
  MOVE_Setpoint(&move_lin, 0, 0, 0, ACCEL_LIN_TO_STEP(ACCEL_LIN), JERK_LIN);
  command_lin = 0;

  // Angular
  PID_Setup(&PID_ang, P_ANG, I_ANG, D_ANG);
  MOVE_Initialize(&move_ang);
  move_ang.command.position = robot.ang.position;
  MOVE_Setpoint(&move_ang, robot.ang.position, 0, 0, ACCEL_ANG_TO_STEP(ACCEL_ANG), JERK_ANG);
  command_ang = 0;
}

/****************************************************************************************
 * Activate or desactivate asserv
 ****************************************************************************************/
void Set_Asserv(boolean state)
{
  asserv_distance    = state;
  asserv_orientation = state;
}

/****************************************************************************************
 * Update polar asserv
 ****************************************************************************************/
void Update_Asserv(void)
{
  if (asserv_distance == ON)
  {
    MOVE_Filter(&move_lin, &robot.lin);
    command_lin = PID_Correction(&PID_lin, move_lin.command.position - robot.lin.position);
  }
  else command_lin = 0;
  
  if (asserv_orientation == ON)
  {
    MOVE_Filter(&move_ang, &robot.ang);
    command_ang = PID_Correction(&PID_ang, move_ang.command.position - robot.ang.position);
  }
  else command_ang = 0;

  // Motor control
  motor_right = command_lin + command_ang;
  motor_left = command_lin - command_ang;

  Motor_Right(motor_right);
  Motor_Left(motor_left);
}


