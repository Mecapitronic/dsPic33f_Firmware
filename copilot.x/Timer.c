/****************************************************************************************
 * Fichier     : Timer.c
 * Description : Gestion des timers
 * Auteur      : Christopher BUREL
 * Version     : 2015.05.10
 * Compilation : MPLAB X IDE (v2.35), compiler XC16 (v1.24) Lite
 ****************************************************************************************/

/****************************************************************************************
 * Includes
 ****************************************************************************************/
#include "Timer.h"

/****************************************************************************************
 * Variables
 ****************************************************************************************/
uint32 current_time = 0;

/****************************************************************************************
 * Timer Primaire : 20 ms (50 Hz)
 ****************************************************************************************/
void __attribute__((__interrupt__, no_auto_psv)) TIMER_PRIMAIRE_INT(void) {
    TIMER_PRIMAIRE_INT_FLAG = OFF; // Clear Timer Interrupt Flag

    current_time += TE;

    switch (main_mode) {
        case 0:
            Gestion_Power();
            Gestion_Mode();
            break;

        case 1:
        case 2:
            break;

        default:
            Gestion_Power();
            Gestion_Mode();
            break;
    }
    
    if ((current_time - run_time) > TIMEOUT_MATCH - 2*100)
        Deguisement_Ouvrir();

    //Rotation_Tourelle();

    Actualiser_Servo();

}

/****************************************************************************************
 * Timer Secondaire : 400 ms (2.5 Hz)
 ****************************************************************************************/
void __attribute__((__interrupt__, no_auto_psv)) TIMER_SECONDAIRE_INT(void) {
    TIMER_SECONDAIRE_INT_FLAG = OFF; // Clear Timer Interrupt Flag

    switch (main_mode) {
        case 0:
            Affichage_Power();
            Affichage_Mode();
            break;

        case 1:
        case 2:
            break;

        default:
            Affichage_Power();
            Affichage_Mode();
            break;
    }


}

