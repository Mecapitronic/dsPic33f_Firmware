/****************************************************************************************
 * Fichier     : Mode.c
 * Description : Gestion des modes de fonctionnement du copilot (état du robot)
 * Auteur      : Christopher BUREL
 * Version     : 07/09/2014
 * Compilation : MPLAB X IDE (v2.05), compiler XC16 (v1.11) Lite
 ****************************************************************************************/

/****************************************************************************************
 * Includes
 ****************************************************************************************/
#include "Mode.h"

/****************************************************************************************
 * Variables
 ****************************************************************************************/
uint8 power_mode = OFF;
//uint8 team_color = TEAM_A;

boolean start_precedent = OFF;
boolean mode_flashing_flag = OFF;
uint8 run_mode = MODE_MATCH;
uint32 run_time = 0;

/****************************************************************************************
 * Grafcet de démarrage
 ****************************************************************************************/
//    ___ 
//    |0|  Mode_OFF
//     | 
//    --- Front Montant
//     | 
//    |1|  STARTING
//     | 
//    ---  Front descendant
//     | 
//    |2|  RUNNING
//     | 
//    --- Front Montant
//     | 
//    |3|  STOPPING
//     | 
// ^  ---  Timeout 2s
// |___|

/****************************************************************************************
 * Fonction de gestion du cordon de démarrage
 ****************************************************************************************/
void Gestion_Start(void) {
    // Détection du front du signal start
    if (START && !start_precedent) // Front montant
    {
        if (power_mode == OFF) {
            power_mode = STARTING; // Démarrage si pas en marche
        }
        if(power_mode == RUNNING) {
            run_time = current_time;
            power_mode = STOPPING; // Arrêt si en marche
        }
    } else if (!START && start_precedent) // Front descendant
    {
        if (power_mode == STARTING) {
            power_mode = RUNNING; // Go après attente démarrage
        }
    }
    start_precedent = START;
}

/****************************************************************************************
 * Fonction de gestion des modes de fonctionnement
 ****************************************************************************************/
void Gestion_Mode(void) {
    // Détection d'un changement de mode
    Gestion_Start();
    LED = START;
    // Traitement des modes
    switch (power_mode) {
        case STARTING: // En démarrage
            RELAY = ON;
            START_PILOT = OFF;
            RECALAGE_PILOT = SW1;
            run_time = current_time;
            break;

        case RUNNING: // En marche
            if (((current_time - run_time) < TIMEOUT_MATCH) || (run_mode == MODE_TEST)) {
                START_PILOT = ON;
                RELAY = ON;
                RECALAGE_PILOT = OFF;
            } else {
                START_PILOT = OFF;
                RELAY = OFF;
                RECALAGE_PILOT = OFF;
                power_mode = STOPPING;
                run_time = current_time;
            }
            break;

        case STOPPING: // En stop
            RELAY = OFF;
            RECALAGE_PILOT = OFF;
            if ((current_time - run_time) > TIMEOUT_STOP) {
                power_mode = OFF;
            }
            break;

        default: // Au repos
            RELAY = OFF;
            START_PILOT = OFF;
            RECALAGE_PILOT = OFF;
            run_mode = MODE; // sélection du mode de marche
            //team_color = COLOR_TEAM; // sélection de la couleur d'équipe
            break;
    }
    MODE_PILOT = MODE;

}

/****************************************************************************************
 * Fonction d'affichage des modes
 ****************************************************************************************/
void Affichage_Mode(void) {
    // Ligne 1, curseur 0
    LCD_Goto(1, 0);

    mode_flashing_flag++;
    if (mode_flashing_flag > 5) mode_flashing_flag = 0;

    switch (power_mode) {
        case STARTING: // En démarrage
            switch (mode_flashing_flag) {
                case 0:
                case 1:
                case 2:
                    LCD_Text("GO ", 3);
                    if (run_mode == MODE_TEST) LCD_Text("TEST ?", 8);
                    else if (run_mode == MODE_MATCH) LCD_Text("MATCH ?", 8);
                    else LCD_Text("?", 6);
                    break;

                case 3:
                case 4:
                case 5:
                    //LCD_Text("Team ", 5);
                    //if (team_color == TEAM_A) LCD_Text(LCD_TEAM_A, 6);
                    //else if (team_color == TEAM_B) LCD_Text(LCD_TEAM_B, 6);
                    //else LCD_Text("?", 6);
                    break;
            }
            break;

        case RUNNING: // En marche
            if (run_mode == MODE_MATCH) {
                LCD_Text("MATCH    s", 11);
                LCD_Goto(1, 6);
                LCD_Value(((TIMEOUT_MATCH - (current_time - run_time)) / 1000) + 1, 3, 0);
            } else if (run_mode == MODE_TEST) {
                LCD_Text("TEST     s", 11);
                LCD_Goto(1, 5);
                LCD_Value((current_time - run_time) / 1000, 4, 0);
            }
            break;

        case STOPPING: // En stop
            switch (mode_flashing_flag) {
                case 0:
                case 2:
                case 4:
                    LCD_Text("Stop!!!   ", 11);
                    break;

                case 1:
                case 3:
                case 5:
                    LCD_Text("          ", 11);
                    break;
            }
            break;

        default: // Au repos
            switch (mode_flashing_flag) {
                case 0:
                case 1:
                case 2:
                    LCD_Text("Mode ", 5);
                    if (run_mode == MODE_TEST) LCD_Text("TEST  ", 6);
                    else if (run_mode == MODE_MATCH) LCD_Text("MATCH", 6);
                    else LCD_Text("?", 6);
                    break;

                case 3:
                case 4:
                case 5:
                    //LCD_Text("Team ", 5);
                    //if (team_color == TEAM_A) LCD_Text(LCD_TEAM_A, 6);
                    //else if (team_color == TEAM_B) LCD_Text(LCD_TEAM_B, 6);
                    //else LCD_Text("?", 6);
                    break;
            }
            break;
    }
}


