/****************************************************************************************
 * Fichier     : Strategy.c
 * Description : Choix et execution des actions du robot.
 * Auteur      : Geoffroy Arenou et Christopher Burel
 * Version     : 2017.05.23
 * Compilation : MPLAB X IDE (v3.45), compiler XC16 (v1.26) Lite
 ***************************************************************************************/

/****************************************************************************************
* Includes
****************************************************************************************/
#include "Strategy.h"

/****************************************************************************************
* Variables
****************************************************************************************/
uint32 timeout_action = 0;

/****************************************************************************************
* Recherche de la meilleure action
****************************************************************************************/
uint8 Get_Best_Action(void)
{
  uint8 ID = 1;
  uint8 best_action = 0;
  uint32 min_cost = INT32_MAX;
  uint32 cost = 0;
  uint32 distance_action = 0;
  uint32 dx = 0;
  uint32 dy = 0;

  for (ID = 1; ID < MAX_ACTION; ID++)
  {
    if (action[ID].possible && !action[ID].done)
    {
      // TODO : prendre en compte les obstacles, calculer la vraie distance après PF
//      dx = ABS(robot.mm.x - action[ID].x.mm);
//      dy = ABS(robot.mm.y - action[ID].y.mm);
      distance_action = Approx_Distance(dx,dy);
      cost = distance_action;
      if (cost < min_cost)
      {
        min_cost = cost;
        best_action = ID;
      }
    }
  }
  return best_action;
}

/****************************************************************************************
* Execution des actions
****************************************************************************************/
boolean Execute_Action(uint8 ID)
{
  boolean navigation_result = NOK;

  current_action = ID;

  Set_Timeout_Action(25000);

  if (TIMEOUT_ACTION)
  {
    action[ID].possible = ACTION_TO_RETRY;
    return OK;
  }

  if (action[ID].mission == MISSION_PRENDRE) 
    Action_Preparer_Prise();

  navigation_result = Navigate_To_Vertex(action[ID].vertexID, 10);

  if (navigation_result == OK)
  {
    //Execution de la strategie choisie
    //validation de l'action effectué pour éviter de la refaire => valider quand l'action est fini...
    action[ID].done = action[ID].function();
    return OK;
  }
  else
  {
    return NOK;
  }
}


