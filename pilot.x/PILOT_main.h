/****************************************************************************************
 * Fichier     : PILOT_main.h
 * Description : Fichier d'ent�te du programme principal, configuration firmware.
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
#define SIMULATION_ENCODER
#ifdef _VISUAL_STUDIO
#define __interrupt__
#define no_auto_psv
#define __attribute__(__interrupt__, no_auto_psv)
#endif

// Team color, A = verte, B = bleue
#define TEAM_A          0
#define TEAM_B          1

#define MAP_FILE_TEAM_A      "Map2023Verte.c"
#define MAP_FILE_TEAM_B      "Map2023Bleue.c"

#define LCD_TEAM_A       "VERT"
#define LCD_TEAM_B       "BLEU"

/****************************************************************************************
 * Includes
 ****************************************************************************************/
#include "../MecapitronicLibrary/Includes/LIBRARY_module.h"

#include "PILOT_hardware.h"
#include "Motor.h"
#include "Odometry.h"
#include "Asserv.h"
#include "Trajectory.h"
#include "Uart.h"
#include "Lidar.h"

#include "Mapping.h"
#include "Node.h"
#include "List.h"
#include "Path_Finding.h"

#include "Obstacle.h"
#include "Strategy.h"
#include "Timer.h"
#include "Action.h"


/****************************************************************************************
 * Variables globales et param�tres
 ****************************************************************************************/
extern uint8 team;

/****************************************************************************************
 * Prototypes fonctions
 ****************************************************************************************/

#ifdef _VISUAL_STUDIO
	#define _PILOT_ uint16 PILOT(void)
	uint16 PILOT(void);
#else
	#define _PILOT_ int main(void)
#endif
void Display();

#endif	/* PILOT_MAIN_H */

