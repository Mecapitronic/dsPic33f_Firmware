/****************************************************************************************
 * Fichier     : Lidar.c
 * Description : Gestion du LIDAR (UART 2)
 * Auteur      : Christopher BUREL
 * Version     : 2017.02.02
 * Compilation : MPLAB X IDE (v3.45), compiler XC16 (v1.26) Lite
 ****************************************************************************************/

#ifndef LIDAR_H
#define	LIDAR_H

/****************************************************************************************
 * Includes
 ****************************************************************************************/
#include "PILOT_main.h"

/****************************************************************************************
* Parameters
****************************************************************************************/
// UART 2
#define U2_FCY     (unsigned long)40000000   // operating frequency (MIPS)
#define U2_BAUD    250000 // /!\ check if UxBRG value is integer
#define Setup_UART2_RX_Pin()  do{ RPINR19bits.U2RXR = 2; }while(0);  // pin 23 / RP2
#define Setup_UART2_TX_Pin()  do{  }while(0);  // pin 24 / RP3 => No need TX for LIDAR

#define LIDAR_CM_MIN     2   // cm
#define LIDAR_CM_MAX     150  // cm
#define LIDAR_MAX_SENSOR 10  // number of sensor 

/****************************************************************************************
* Prototypes
****************************************************************************************/
void Initialize_LIDAR(void);
uint16 Get_Distance_LIDAR(uint8 sensorID);
float32 Get_Angle_LIDAR(uint8 sensorID);
void Reset_Distance_LIDAR(void);

void Set_LIDAR(uint8 sensorID, uint16 distance);

#ifdef _VISUAL_STUDIO
void _U2RXInterrupt(void);
void _U2ErrInterrupt(void);
#endif

#endif
