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
#include "PILOT_main.h"

/****************************************************************************************
* Parameters
****************************************************************************************/
#define MAX_ACTION    30  // nombre total d'action 
//#define MAX_ELEMENT   10   // nombre d'élément de jeu obstacle dans le graph

#define ACTION_TO_RETRY  (3)

/****************************************************************************************
* Macros
****************************************************************************************/



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
boolean Action_Plante();
boolean Action_Plante_Sans_Prise();
boolean Action_Pot(void);
boolean Action_Pot_Prendre(void);
boolean Action_Pot_Deposer(void);


#endif	/* ACTION_H */

