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
#define TIMEOUT_MATCH   90000   // 90s
// Durée d'affichage de stop
#define TIMEOUT_STOP    2000    // 2s

// Power modes
#define STARTING        1   // En attente de démarrage
#define RUNNING         2   // En marche
#define STOPPING        3   // A l'arrêt (avant repos)

// Team color, A = verte, B = bleue
//#define TEAM_A          0
//#define TEAM_B          1

//#define LCD_TEAM_A       "VERT"
//#define LCD_TEAM_B       "BLEU"

#define MODE_MATCH		0
#define MODE_TEST		1

/****************************************************************************************
 * Variables
 ****************************************************************************************/
extern uint8 power_mode;
//extern uint8 team_color;

/****************************************************************************************
 * Fonctions prototypes
 ****************************************************************************************/
void Gestion_Start(void);
void Gestion_Mode(void);
void Affichage_Mode(void);


#endif	/* MODE_H */

