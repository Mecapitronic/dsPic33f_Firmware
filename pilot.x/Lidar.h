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
#define U2_BAUD    125000 // /!\ check if UxBRG value is integer
#define U2RX_SIZE  16
#define Setup_UART2_RX_Pin()  do{ RPINR19bits.U2RXR = 2; }while(0);  // pin 23 / RP2
#define Setup_UART2_TX_Pin()  do{ RPOR1bits.RP3R = 5; }while(0);  // pin 24 / RP3

#define LIDAR_CM_MIN     2   // cm
#define LIDAR_CM_MAX     150  // cm
#define LIDAR_MAX_SENSOR 10  // number of sensor 

/****************************************************************************************
* Prototypes
****************************************************************************************/
void Initialize_UART2(void);
void Start_UART2(void);
void Stop_UART2(void);
boolean State_UART2(void);

void Analyse_Data_UART2();

void Afficher_UART2(uint8 ligne);
void Update_UART2(void);

#ifdef _VISUAL_STUDIO
void _U2RXInterrupt(void);
void _U2ErrInterrupt(void);
#endif

#endif
