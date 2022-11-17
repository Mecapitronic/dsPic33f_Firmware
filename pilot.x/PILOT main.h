/****************************************************************************************
 * Fichier     : PILOT main.h
 * Description : Fichier d'entête du programme principal, configuration firmware.
 * Auteur      : Christopher Burel
 * Version     : 2016.11.28
 * Compilation : MPLAB X IDE (v3.45), compiler XC16 (v1.26) Lite
 ****************************************************************************************/

#ifndef PILOT_MAIN_H
#define	PILOT_MAIN_H

/****************************************************************************************
 * Configuration
 ****************************************************************************************/
// Firmware mode
//#define SERIAL_PRINT
//#define SIMULATION
#define SIMULATION_ENCODER
#define UART1_ENABLE

// Team color
#define TEAM_A          0
#define TEAM_B          1

#define TEAM_JAUNE      TEAM_A
#define TEAM_BLEUE      TEAM_B

#define MAP_FILE_TEAM_A      "Map2017Jaune.c"
#define MAP_FILE_TEAM_B      "Map2017Bleue.c"

#define LCD_TEAM_A       "JAUNE"
#define LCD_TEAM_B       "BLEUE"

/****************************************************************************************
 * Includes
 ****************************************************************************************/
#include "../MECAPITRONIC Library/Includes/LIBRARY module.h"

#include "PILOT hardware.h"
#include "Motor.h"
#include "Odometry.h"
#include "Asserv.h"
#include "Trajectory.h"
#include "Uart.h"
#include "Lidar.h"

#include "Mapping.h"
#include "Node.h"
#include "List.h"
#include "Path Finding.h"

#include "Obstacle.h"
#include "Strategy.h"
#include "Timer.h"
#include "Action.h"


/****************************************************************************************
 * Variables globales et paramètres
 ****************************************************************************************/
extern uint8 team;

/****************************************************************************************
 * Prototypes fonctions
 ****************************************************************************************/

#ifdef _USRDLL
	int PILOT(void);
#endif
void Display();

#endif	/* PILOT_MAIN_H */

