/****************************************************************************************
* Fichier     : PID module.c
* Description : PID controller.
* Auteur      : Christopher BUREL
* Version     : 2016.12.10
* Compilation : MPLAB X IDE (v3.45), compiler XC16 (v1.26) Lite
****************************************************************************************/

/****************************************************************************************
* Includes
****************************************************************************************/
#include "../Includes/PID module.h"

/****************************************************************************************
* Setup PID parameters
****************************************************************************************/
void PID_Setup(t_PID *PID, float32 kP, float32 kI, float32 kD)
{
  PID->kP = kP;
  PID->kI = kI;
  PID->kD = kD;
  PID->command = 0;
  PID->error = 0;
  PID->last_error = 0;
  PID->sum_error = 0;
} 

/****************************************************************************************
* Correct input error with PID parameters and return command
****************************************************************************************/
int32 PID_Correction(t_PID *PID, int32 error_value)
{
  PID->error = error_value;
  PID->sum_error += error_value;
  
  PID->command = PID->kP * PID->error;
  PID->command += PID->kI * PID->sum_error;
  PID->command += PID->kD * (PID->error - PID->last_error);
  
  PID->last_error = PID->error;

  return PID->command;
}


