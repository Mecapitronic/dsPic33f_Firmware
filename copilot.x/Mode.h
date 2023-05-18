/****************************************************************************************
 * Fichier     : Mode.h
 * Description : Gestion des modes du copilot
 * Auteur      : Christopher BUREL
 * Version     : 07/09/2014
 * Compilation : MPLAB X IDE (v2.05), compiler XC16 (v1.11) Lite
 ****************************************************************************************/

#ifndef MODE_H
#define	MODE_H

/****************************************************************************************
 * Includes
 ****************************************************************************************/
#include "COPILOT_main.h"

/****************************************************************************************
 * Parameters
 ****************************************************************************************/
// Temporisation en millisecondes du mode match
#define TIMEOUT_MATCH   100000   // 100s
// Durée d'affichage de stop
#define TIMEOUT_STOP    2000    // 2s

// Power modes
#define STARTING        1   // En attente de démarrage
#define RUNNING         2   // En marche
#define STOPPING        3   // A l'arrêt (avant repos)
// Mode de marche
#define RUN             0
#define MATCH           1
// Couleur d'équipe
//#define JAUNE           0
//#define BLEUE           1

// Start mode
#define NO_EDGE         0
#define RISING_EDGE     1
#define FALLING_EDGE    2
// debouncing delay in ms
#define DEBOUNCE_DELAY  400

/****************************************************************************************
 * Variables
 ****************************************************************************************/
extern uint8 power_mode;
//extern uint8 team_color;
extern uint32 run_time;
/****************************************************************************************
 * Fonctions prototypes
 ****************************************************************************************/
void Gestion_Start(void);
void Gestion_Mode(void);
void Affichage_Mode(void);


#endif	/* MODE_H */

