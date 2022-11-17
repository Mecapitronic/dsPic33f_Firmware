/****************************************************************************************
 * Fichier     : COPILOT main.h
 * Description : Fichier d'entête du code principal.
 * Auteur      : Christopher BUREL
 * Version     : 2015.03.08
 * Compilation : MPLAB X IDE (v2.35), compiler XC16 (v1.24) Lite
 ****************************************************************************************/

#ifndef COPILOT_MAIN_H
#define	COPILOT_MAIN_H

/****************************************************************************************
* Includes
****************************************************************************************/
#include "../MECAPITRONIC Library/Includes/LIBRARY module.h"
#include "COPILOT hardware.h"
#include "Timer.h"
#include "Mode.h"
#include "Power.h"
#include "Servo.h"
#include "Action.h"

/****************************************************************************************
* Extern Variables
****************************************************************************************/
extern uint8 main_mode;  // Mode de fonctionnement

/****************************************************************************************
* Prototypes Fonctions
****************************************************************************************/
uint8 Selection_Main_Mode(uint8 initial_mode);


#endif	/* COPILOT_MAIN_H */

