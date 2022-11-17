/****************************************************************************************
 * Fichier     : Action.h
 * Description : Actions du robot (PILOT).
 * Auteur      : Christopher Burel
 * Version     : 2017.05.23
 * Compilation : MPLAB X IDE (v3.45), compiler XC16 (v1.26) Lite
 ***************************************************************************************/

#ifndef ACTION_H
#define	ACTION_H

/****************************************************************************************
 * Includes
 ****************************************************************************************/
#include "PILOT main.h"

/****************************************************************************************
* Parameters
****************************************************************************************/
#define MAX_ACTION    30  // nombre total d'action 
//#define MAX_ELEMENT   10   // nombre d'élément de jeu obstacle dans le graph

#define ACTION_TO_RETRY  (3)

#define MISSION_ALLER_PRENDRE 1
#define MISSION_PRENDRE       2
#define MISSION_FUSEE         3
#define MISSION_DEPOSER       4


/****************************************************************************************
* Macros
****************************************************************************************/
// attendre que le bras fini son action
#define WAIT_ARM()      do{ while(INFO_ARM_BUSY); }while(0)
// désactiver toutes les commandes du bras
#define RESET_ARM()     do{ COMMAND_GO_IN = 0; COMMAND_GO_OUT = 0; COMMAND_PUMP = 0; \
                            COMMAND_PUT_IN = 0; COMMAND_PUT_LEFT = 0; COMMAND_PUT_RIGHT = 0; \
                            COMMAND_TURN = 0; }while(0)
// attendre si occupé, activer la commande (cmd), 
// puis attendre que la commande soit considérée et désactiver les commandes
#define SET_ARM(cmd)    do{ while(INFO_ARM_BUSY); cmd = 1; \
                            while(!INFO_ARM_BUSY); RESET_ARM(); }while(0)

/****************************************************************************************
* Variables globales
****************************************************************************************/
extern t_action action[MAX_ACTION];
extern uint8 action_copilot;
extern uint8 current_action;
//extern t_circle element[MAX_ELEMENT];

/****************************************************************************************
* Prototypes
****************************************************************************************/
//boolean Is_Obstacle_Element(uint8 elementID);
//void Set_Not_Obstacle_Element(uint8 elementID);
void Initialize_Action(void);
boolean Action_NULL(void);
boolean Action_Preparer_Prise(void);
boolean Action_Prendre(void);
boolean Action_Aller_Prendre(void);
boolean Action_Prendre_Fusee(void);
boolean Action_Deposer(void);
boolean Action_Pousser(void);
boolean Action_Lacher(void);
boolean Action_Lever(void);
boolean Action_Lever_Reculer(void);

#endif	/* ACTION_H */

