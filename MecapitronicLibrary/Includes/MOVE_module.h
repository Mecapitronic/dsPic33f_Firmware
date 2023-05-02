/****************************************************************************************
* Fichier     : MOVE_module.h
* Description : Motion filter.
* Auteur      : Christopher BUREL
* Version     : 2016.11.27
* Compilation : MPLAB X IDE (v3.45), compiler XC16 (v1.26) Lite
****************************************************************************************/

#ifndef MOVE_MODULE_H
#define MOVE_MODULE_H

/****************************************************************************************
* Includes
****************************************************************************************/
#include "LIBRARY_module.h"

/****************************************************************************************
* Prototypes fonctions
****************************************************************************************/
void MOVE_Filter(t_move *m, t_motion *real);
void MOVE_Initialize(t_move *m);
void MOVE_Reset_Ramp(t_move *m, t_motion *real);
void MOVE_Setpoint(t_move *m, int32 pos, int16 speed_max, int16 speed_min, int16 acc, int8 jerk);
void MOVE_Setpoint_Position(t_move *m, int32 position);
void MOVE_Setpoint_Speed(t_move *m, int16 speed_max, int16 speed_min);
boolean MOVE_Check_Position(t_move *m);

//#ifdef SERIAL_PRINT
//void MOVE_Test_Filter(void);
//#endif



#endif /* MOVE_MODULE_H */

