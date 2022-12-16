/****************************************************************************************
* Fichier     : PID_module.h
* Description : PID controller.
* Auteur      : Christopher BUREL
* Version     : 2016.12.10
* Compilation : MPLAB X IDE (v3.45), compiler XC16 (v1.26) Lite
****************************************************************************************/

#ifndef PID_MODULE_H
#define PID_MODULE_H

/****************************************************************************************
* Includes
****************************************************************************************/
#include "LIBRARY_module.h"

/****************************************************************************************
* Prototypes
****************************************************************************************/
void PID_Setup(t_PID *PID, float32 kP, float32 kI, float32 kD);
int32 PID_Correction(t_PID *PID, int32 error_value);

#endif /* PID_MODULE_H */

