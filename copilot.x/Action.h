/****************************************************************************************
 * Fichier     : Action.h
 * Description : Gestion des actions (COPILOT).
 * Auteur      : Christopher BUREL
 * Version     : 2015.05.09
 * Compilation : MPLAB X IDE (v2.35), compiler XC16 (v1.24) Lite
 ****************************************************************************************/

#ifndef ACTION_H
#define	ACTION_H

/****************************************************************************************
 * Includes
 ****************************************************************************************/
#include "COPILOT main.h"

/****************************************************************************************
 * D�finitions actionneurs
 ****************************************************************************************/
#define ASCENSEUR            (1) // servo 1
#define PINCE_PIED           (2) // servo 2
#define GARDE_SPOT           (3) // servo 3
#define PINCE_GOBELET        (4) // servo 4
#define PINCE_POPCORN        (5) // servo 5

// D�tecteur gobelet sur le bouton 2
#define PRESENCE_GOBELET    SW2

/****************************************************************************************
 * Commandes actionneurs 
 ****************************************************************************************/
// Ascenseur
#define Ascenseur_Baisser()         do{Set_Servo(ASCENSEUR, 89);}while(0)         // au sol
#define Ascenseur_Monter_5mm()      do{Set_Servo(ASCENSEUR, 78);}while(0)         // � 5mm du sol
#define Ascenseur_Monter_Max()      do{Set_Servo(ASCENSEUR, -61);}while(0)        // hauteur max (85mm)
#define Ascenseur_Desactiver()      do{Set_Servo(ASCENSEUR, SERVO_OFF);}while(0)  // d�sactiver servo
// Pince pied
#define Pince_Pied_Ouvrir()         do{Set_Servo(PINCE_PIED, -74);}while(0)        // grand ouvert
#define Pince_Pied_Fermer()         do{Set_Servo(PINCE_PIED, 62);}while(0)         // pied serr�
#define Pince_Pied_Desactiver()     do{Set_Servo(PINCE_PIED, SERVO_OFF);}while(0)  // d�sactiver servo
// Garde spot
#define Garde_Spot_Ouvrir()         do{Set_Servo(GARDE_SPOT, 53);}while(0)         // max ouvert
#define Garde_Spot_Lacher()         do{Set_Servo(GARDE_SPOT, -30);}while(0)        // min ouvert
#define Garde_Spot_Fermer()         do{Set_Servo(GARDE_SPOT, -53);}while(0)        // spot serr�
#define Garde_Spot_Desactiver()     do{Set_Servo(GARDE_SPOT, SERVO_OFF);}while(0)  // d�sactiver servo
// Pince gobelet
#define Pince_Gobelet_Ouvrir()      do{Set_Servo(PINCE_GOBELET, 0);}while(0)         // max ouvert
#define Pince_Gobelet_Fermer()      do{Set_Servo(PINCE_GOBELET, 54);}while(0)        // min ouvert
#define Pince_Gobelet_Balle()       do{Set_Servo(PINCE_GOBELET, 40);}while(0)        // balle serr�
#define Pince_Gobelet_Desactiver()  do{Set_Servo(PINCE_GOBELET, SERVO_OFF);}while(0)  // d�sactiver servo
// Pince popcorn
#define Pince_Popcorn_Ouvrir()      do{Set_Servo(PINCE_POPCORN, 67);}while(0)         // max ouvert
#define Pince_Popcorn_Fermer()      do{Set_Servo(PINCE_POPCORN, -39);}while(0)        // min ouvert
#define Pince_Popcorn_Desactiver()  do{Set_Servo(PINCE_POPCORN, SERVO_OFF);}while(0)  // d�sactiver servo

/****************************************************************************************
 * Macros
 ****************************************************************************************/
// Timeout in millisecond
#define Set_Timeout_Action(time)    do{timeout_action = current_time + time;}while(0)
#define TIMEOUT_ACTION              (current_time > timeout_action)
#define TIMEOUT_ACTION_VALUE        2000 // 2 seconds
/*
// Wait until condition or timeout (=> function)
#define Wait_Action(condition)      do{Set_Timeout_Action(2000); \
                                    while(!condition && !TIMEOUT_ACTION); \
                                    Delay_Ms(20);}while(0)
*/

/****************************************************************************************
 * Fonctions prototypes
 ****************************************************************************************/
void Init_All_Action(void);

uint8 Empiler_Spot(void);
void Deposer_Spot(void);
boolean Prendre_Gobelet(void);
void Deposer_Gobelet(void);
void Ouvrir_Pince_Popcorn(void);
void Fermer_Pince_Popcorn(void);

void Gestion_Action(void);
void Mode_Test_Action(void);

void Afficher_Action(void);


#endif	/* ACTION_H */


