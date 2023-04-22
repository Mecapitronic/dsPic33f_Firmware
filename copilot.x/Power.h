/****************************************************************************************
 * Fichier     : Power.h
 * Description : Gestion de l'alimentation (tension, arrêt d'urgence)
 * Auteur      : Christopher BUREL
 * Version     : 07/09/2014
 * Compilation : MPLAB X IDE (v2.05), compiler XC16 (v1.11) Lite
 ****************************************************************************************/

#ifndef POWER_H
#define	POWER_H

/****************************************************************************************
 * Includes
 ****************************************************************************************/
#include "COPILOT_main.h"

/****************************************************************************************
 * Parameters
 ****************************************************************************************/
// Seuils de tension en volts
#define SEUIL_TENSION_BAU           5.0
#define SEUIL_TENSION_CRITIQUE      12.0
#define SEUIL_TENSION_20_POURCENT   12.3
#define SEUIL_TENSION_40_POURCENT   12.5
#define SEUIL_TENSION_60_POURCENT   12.7
#define SEUIL_TENSION_80_POURCENT   13.0

// Durée en millisecondes de détection de batterie faible
#define TIMEOUT_LOW_BAT     2000


/****************************************************************************************
 * Fonctions prototypes
 ****************************************************************************************/
void Gestion_Power(void);
void Affichage_Power(void);


#endif	/* POWER_H */

