/****************************************************************************************
 * Fichier     : Action.c
 * Description : Actions du robot (PILOT).
 * Auteur      : Christopher Burel
 * Version     : 2017.05.23
 * Compilation : MPLAB X IDE (v3.45), compiler XC16 (v1.26) Lite
 ***************************************************************************************/

/****************************************************************************************
* Includes
****************************************************************************************/
#include "Action.h"

/****************************************************************************************
* Variables
****************************************************************************************/
t_action action[MAX_ACTION];
//t_circle element[MAX_ELEMENT];
uint8 action_copilot = NO;
uint8 current_action = 0;
int8 module_stock = 0;

/****************************************************************************************
 * Return 1 if the element is an obstacle (for passability graph)
 ****************************************************************************************/
//boolean Is_Obstacle_Element(uint8 elementID)
//{
//  return (element[elementID].r != 0 ? 1 : 0);
//}

/****************************************************************************************
 * Set the element not an obstacle (for passability graph)
 ****************************************************************************************/
//void Set_Not_Obstacle_Element(uint8 elementID)
//{
//  element[elementID].r = 0;
//}

/****************************************************************************************
 * Initialize playing circle element 
 ****************************************************************************************/
//void Initialize_Element(void)
//{
//  element[0] = Circle(1000, 600, 30);
//  element[1] = Circle(500, 1100, 30);
//  element[2] = Circle(200, 600, 30);
//  element[3] = Circle(900, 1400, 30);
//  element[4] = Circle(2000, 600, 30);
//  element[5] = Circle(2500, 1100, 30);
//  element[6] = Circle(2800, 600, 30);
//  element[7] = Circle(2100, 1400, 30);
//  element[8] = Circle(800, 1850, 30);
//  element[9] = Circle(2200, 1850, 30);
//}

/****************************************************************************************
* Initialisation des actions
****************************************************************************************/
void Initialize_Action(void)
{
  //Initialize_Element();
  
  uint8 ID;
  //Initialisation de toutes les actions
  for (ID = 0; ID < MAX_ACTION; ID++)
  {
    action[ID].vertexID = 255;          // vertex ID of robot center (start point)
    action[ID].mission = NO;             // category
    action[ID].possible = NO;           // accessibility
    action[ID].done = YES;              // openability
    action[ID].iteration = 1;           // repeatability
    action[ID].point = Point(0,0);      // element reference point (look point)
    action[ID].function = Action_NULL;  // function to execute
  }

  ID = 1; // Déposer Cerises dans le panier
  action[ID].vertexID = 8;
  action[ID].mission = 0;
  action[ID].possible = YES;
  action[ID].done = NO;
  action[ID].iteration = 1;
  if (team == TEAM_A) action[ID].point = Point(1775, 2900);
  else action[ID].point = Point(225, 2900);
  action[ID].function = Action_Deposer;

  
  ID = 2; // prendre Cerises coté départ
  action[ID].vertexID = 10;
  action[ID].mission = 0;
  action[ID].possible = YES;
  action[ID].done = NO;
  if (team == TEAM_A) action[ID].point = Point(2000, 1500);
  else action[ID].point = Point(0, 1500);
  action[ID].function = Action_Prendre;
  
  ID = 3; // prendre Cerises coté adverse
  action[ID].vertexID = 3;
  action[ID].mission = 0;
  action[ID].possible = YES;
  action[ID].done = NO;
  if (team == TEAM_A) action[ID].point = Point(0, 1500);
  else action[ID].point = Point(2000, 1500);
  action[ID].function = Action_Prendre;

  /*
  ID = 4; // Retour Base
  action[ID].vertexID = 1;
  action[ID].mission = MISSION_PRENDRE;
  action[ID].possible = YES;
  action[ID].done = NO;
  action[ID].point = vertex[1].point;
  action[ID].function = Action_NULL;
  
//  ID = 5; // prendre module 7 depuis vertex 6
//  action[ID].vertexID = 6;
//  action[ID].mission = MISSION_PRENDRE;
//  action[ID].possible = YES;
//  action[ID].done = NO;
//  action[ID].point = vertex[7].point;
//  action[ID].function = Action_Prendre;

  ID = 6; // aller prendre module 6
  action[ID].vertexID = 6;
  action[ID].mission = MISSION_ALLER_PRENDRE;
  action[ID].possible = YES;
  action[ID].done = NO;
  if (team == TEAM_A) action[ID].point = Point(200,600);
  else action[ID].point = Point(2800,600);
  action[ID].function = Action_Aller_Prendre;
  
  ID = 7; // aller prendre module 10
  action[ID].vertexID = 10;
  action[ID].mission = MISSION_ALLER_PRENDRE;
  action[ID].possible = YES;
  action[ID].done = NO;
  if (team == TEAM_A) action[ID].point = Point(800,1850);
  else action[ID].point = Point(2200,1850);
  action[ID].function = Action_Aller_Prendre;
  
  ID = 8; // aller prendre module 12
  action[ID].vertexID = 12;
  action[ID].mission = MISSION_ALLER_PRENDRE;
  action[ID].possible = YES;
  action[ID].done = NO;
  if (team == TEAM_A) action[ID].point = Point(900,1400);
  else action[ID].point = Point(2100,1400);
  action[ID].function = Action_Aller_Prendre;
  
  ID = 9; // déposer module dans zone 14 milieu
  action[ID].vertexID = 14;
  action[ID].mission = MISSION_DEPOSER;
  action[ID].possible = YES;
  action[ID].done = NO;
  action[ID].point = Point(1500,1300);
  action[ID].function = Action_Deposer;

  ID = 10; // déposer module dans zone 14 oblique
  action[ID].vertexID = 14;
  action[ID].mission = MISSION_DEPOSER;
  action[ID].possible = YES;
  action[ID].done = NO;
  if (team == TEAM_A) action[ID].point = Point(1000,1500);
  else action[ID].point = Point(2000,1500);
  action[ID].function = Action_Lacher;
 
  ID = 11; // déposer module dans zone 22 milieu
  action[ID].vertexID = 22;
  action[ID].mission = MISSION_DEPOSER;
  action[ID].possible = YES;
  action[ID].done = NO;
  action[ID].point = Point(1500,1420);
  action[ID].function = Action_Deposer;
  
  ID = 12; // déposer module dans zone 22 oblique
  action[ID].vertexID = 22;
  action[ID].mission = MISSION_DEPOSER;
  action[ID].possible = YES;
  action[ID].done = NO;
  if (team == TEAM_A) action[ID].point = Point(1090,1590);
  else action[ID].point = Point(1910,1590);
  action[ID].function = Action_Deposer;
  
  ID = 13; // déposer module dans zone 21
  action[ID].vertexID = 21;
  action[ID].mission = MISSION_DEPOSER;
  action[ID].possible = YES;
  action[ID].done = NO;
  if (team == TEAM_A) action[ID].point = Point(1000,1500);
  else action[ID].point = Point(2000,1500);
  action[ID].function = Action_Deposer;
  
  ID = 14; // déposer module dans zone 8
  action[ID].vertexID = 8;
  action[ID].mission = MISSION_DEPOSER;
  action[ID].possible = YES;
  action[ID].done = NO;
  if (team == TEAM_A) action[ID].point = Point(40,1030);
  else action[ID].point = Point(2960,1030);
  action[ID].function = Action_Deposer;

  ID = 15; // déposer module dans zone 23
  action[ID].vertexID = 23;
  action[ID].mission = MISSION_DEPOSER;
  action[ID].possible = YES;
  action[ID].done = NO;
  if (team == TEAM_A) action[ID].point = Point(40,910);
  else action[ID].point = Point(2960,910);
  action[ID].function = Action_Deposer;
  
  ID = 16; // déposer module dans zone 26
  action[ID].vertexID = 26;
  action[ID].mission = MISSION_DEPOSER;
  action[ID].possible = YES;
  action[ID].done = NO;
  if (team == TEAM_A) action[ID].point = Point(40,820);
  else action[ID].point = Point(2960,790);
  action[ID].function = Action_Deposer;
  
  ID = 17; // pousser module 12
  action[ID].vertexID = 12;
  action[ID].mission = MISSION_DEPOSER;
  action[ID].possible = YES;
  action[ID].done = NO;
  action[ID].point = Point(1500,2000);
  action[ID].function = Action_Pousser;
  
  ID = 18; // lacher module dans zone 26
  action[ID].vertexID = 26;
  action[ID].mission = MISSION_DEPOSER;
  action[ID].possible = YES;
  action[ID].done = NO;
  if (team == TEAM_A) action[ID].point = Point(40,820);
  else action[ID].point = Point(2960,790);
  action[ID].function = Action_Lacher;
  
  ID = 19; // lacher module dans zone 22 milieu
  action[ID].vertexID = 22;
  action[ID].mission = MISSION_DEPOSER;
  action[ID].possible = YES;
  action[ID].done = NO;
  action[ID].point = Point(1500,1420);
  action[ID].function = Action_Lacher;
  
  ID = 20; // prendre module 24 en l'air
  action[ID].vertexID = 24;
  action[ID].mission = MISSION_DEPOSER;
  action[ID].possible = YES;
  action[ID].done = NO;
  if (team == TEAM_A) action[ID].point = Point(900,1400);
  else action[ID].point = Point(2100,1400);
  action[ID].function = Action_Lever_Reculer;
  
  ID = 21; // deposer module devant
  if (team == TEAM_A) action[ID].vertexID = 12;
  else action[ID].vertexID = 20;
  action[ID].mission = MISSION_DEPOSER;
  action[ID].possible = YES;
  action[ID].done = NO;
  action[ID].iteration = 4;
  action[ID].point = Point(1500,2000);
  action[ID].function = Action_Pousser;
  */
//  // 10 // prendre module dans fusée 9
//  ID = 10;
//  action[ID].vertexID = 9;
//  action[ID].mission = MISSION_GET;
//  action[ID].possible = YES;
//  action[ID].done = NO;
//  if (team == TEAM_A) action[ID].point = Point(40,1350);
//  else action[ID].point = Point(2960,1350);
//  action[ID].function = Action_Prendre_Fusee;
}

/****************************************************************************************
* Fonctions actions
****************************************************************************************/
boolean Action_NULL(void)
{
  return OK;
}
/****************************************************************************************/
boolean Action_Preparer_Prise(void)
{
  SET_ARM(COMMAND_GO_IN); 
  SET_ARM(COMMAND_PUMP);
  
  return OK;
}
/****************************************************************************************/
boolean Action_Prendre(void)
{
    int32 distance;

    Rotate_To_Point(action[current_action].point, SPEED_ANG);
    while (Wait_Trajectory());

    //Bras en position d'attente
    PREPARER_BRAS();

    //Delai attente
    Delay_Ms(500);

    SetAntiSlip(PWM_MIN_SLIP + 150);
    distance = Get_Distance_Vertex(0, action[current_action].vertexID)+50;
    Translate(distance, 200);
    while (Wait_Trajectory());
    ResetAntiSlip();

    //Bras en position de Prise
    PRISE_BRAS();

    //Délai de prise des balles
    Delay_Ms(500);

    //Bras en position d'attente
    PREPARER_BRAS();

    distance = Get_Distance_Vertex(0, action[current_action].vertexID);
    Translate(-distance, SPEED_LIN);
    while (Wait_Trajectory());

    return OK;
}
/****************************************************************************************/
boolean Action_Aller_Prendre(void)
{
  int32 distance;
  Rotate_To_Point(action[current_action].point, SPEED_ANG);
  while(Wait_Trajectory());
  distance = Get_Distance_Point(&robot.mm, &action[current_action].point) - 100;
  SET_ARM(COMMAND_GO_IN); 
  SET_ARM(COMMAND_PUMP);
  Translate(distance, SPEED_LIN);
  while(Wait_Trajectory());
 
  Translate(-40, SPEED_LIN);
  while(Wait_Trajectory());
  if (team == TEAM_A) Rotate(DEG_TO_RAD(-15), SPEED_ANG);
  else Rotate(DEG_TO_RAD(15), SPEED_ANG);
  while(Wait_Trajectory());
  Translate(70, SPEED_LIN);
  while(Wait_Trajectory());
  
  //SET_ARM(COMMAND_PUT_IN);
  
  distance = Get_Distance_Point(&robot.mm, &action[current_action].point);
  Translate(-distance, SPEED_LIN);
  while(Wait_Trajectory());
  
  if (team == TEAM_A) Rotate(DEG_TO_RAD(-180), SPEED_ANG);
  else Rotate(DEG_TO_RAD(180), SPEED_ANG);
  while(Wait_Trajectory());
  
  SET_ARM(COMMAND_GO_OUT); 
  
  return OK;
}
/****************************************************************************************/
boolean Action_Prendre_Fusee(void)
{
  int32 distance;
  uint8 iteration = action[current_action].iteration;

  SET_ARM(COMMAND_GO_IN); 
  
  do
  {
    Rotate_To_Point(action[current_action].point, SPEED_ANG);
    while(Wait_Trajectory());
    SET_ARM(COMMAND_PUMP);
    distance = Get_Distance_Point(&robot.mm, &action[current_action].point) - 130;
    Translate(distance, SPEED_LIN);
    while(Wait_Trajectory());
    distance = Get_Distance_Point(&robot.mm, &action[current_action].point);
    Translate(-distance-30, SPEED_LIN);
    while(Wait_Trajectory());
    SET_ARM(COMMAND_PUT_IN);
  }
  while (--iteration);
  
  return OK;
}
/****************************************************************************************/
boolean Action_Deposer(void)
{
  int32 distance;
  
  Rotate_To_Point(action[current_action].point, SPEED_ANG);
  while(Wait_Trajectory());

  //Bras en position de dépose
  DEPOSER_BRAS();

  //Delai montée
  Delay_Ms(1000);

  SetAntiSlip(PWM_MIN_SLIP + 150);  
  distance = 120;
  Translate(distance, 200);
  //while(Wait_Trajectory());
  Delay_Ms(2000);

  ResetAntiSlip();

  //Délai de dépose des balles
  Delay_Ms(1000);

  distance = Get_Distance_Vertex(0, action[current_action].vertexID);
  Translate(-distance, SPEED_LIN);
  while(Wait_Trajectory());
  
  return OK;
}
/****************************************************************************************/
boolean Action_Pousser(void)
{
  uint8 iteration = action[current_action].iteration;
  
  if (team == TEAM_A) Rotate_To_Angle(45, SPEED_ANG);
  else Rotate_To_Angle(135, SPEED_ANG);
  while(Wait_Trajectory());
  
  do
  {
    SET_ARM(COMMAND_TURN); 
    Delay_Ms(3000);

    Translate(150, SPEED_LIN);
  while(Wait_Trajectory());
    Delay_Ms(300);
    Translate(-150, SPEED_LIN);
  while(Wait_Trajectory());
  }
  while(--iteration);
  
  return OK;
}
/****************************************************************************************/
boolean Action_Lacher(void)
{
  int32 distance;

  Rotate_To_Point(action[current_action].point, SPEED_ANG);
  while(Wait_Trajectory());
  //distance = Get_Distance_Point(&robot.mm, &action[current_action].point) - 160; // 150
  distance = 100;
  Translate(distance, 200);
  while(Wait_Trajectory());
  Translate(-5, SPEED_LIN);
 
  SET_ARM(COMMAND_PUT_RIGHT);
  WAIT_ARM();

  distance = Get_Distance_Vertex(0, action[current_action].vertexID);
  Translate(-distance, SPEED_LIN);
  while(Wait_Trajectory());
  SET_ARM(COMMAND_GO_IN);
  
  return OK;
}
/****************************************************************************************/
boolean Action_Lever(void)
{
  SET_ARM(COMMAND_PUMP);
  SET_ARM(COMMAND_GO_OUT);
  
  return OK;
}
/****************************************************************************************/
boolean Action_Lever_Reculer(void)
{
  Translate(30, SPEED_LIN);
  while(Wait_Trajectory());
  Translate(-30, SPEED_LIN);
  while(Wait_Trajectory());
  
  Rotate_To_Point(action[current_action].point, SPEED_ANG);
  while(Wait_Trajectory());
  
  SET_ARM(COMMAND_PUMP);
  
  Translate(120, SPEED_LIN);
  while(Wait_Trajectory());
  Translate(-140, SPEED_LIN);
  while(Wait_Trajectory());
  
  SET_ARM(COMMAND_GO_OUT);
  
  return OK;
}
//
///****************************************************************************************/
//boolean Action_Deposer_Gauche(void)
//{
//  int32 distance;
//  uint8 iteration;
//  Rotate_To_Point(action[current_action].point, SPEED_ANG);
//  while(Wait_Trajectory());
//  distance = Get_Distance_Point(&robot.mm, &action[current_action].point) - 150;
//  SET_ARM(COMMAND_GO_OUT); 
//  Translate(distance, 150);
//  while(Wait_Trajectory());
//  
//  iteration = 4 - module_stock;
//  if (iteration == 0) 
//    return NOK;
//  if (iteration > action[current_action].iteration) 
//    iteration = action[current_action].iteration;
//  
//  do
//  {
//    //SET_ARM(COMMAND_TURN);
//    //WAIT_ARM();
//    SET_ARM(COMMAND_PUT_LEFT);
//    WAIT_ARM();
//    module_stock--;
//    if (module_stock < 0) module_stock = 0;
//  }
//  while (iteration--);
//  //SET_ARM(COMMAND_TURN); 
//  //WAIT_ARM();
//  Translate(-distance, SPEED_LIN);
//  SET_ARM(COMMAND_GO_IN);
//  while(Wait_Trajectory());
//  
//  return OK;
//}
///****************************************************************************************/
//boolean Action_Deposer_Droite(void)
//{
//  int32 distance;
//  uint8 iteration;
//  Rotate_To_Point(action[current_action].point, SPEED_ANG);
//  while(Wait_Trajectory());
//  distance = Get_Distance_Point(&robot.mm, &action[current_action].point) - 150;
//  SET_ARM(COMMAND_GO_OUT); 
//  Translate(distance, 150);
//  while(Wait_Trajectory());
//  Translate(-1, SPEED_LIN);
//  
//  iteration = 4 - module_stock;
//  if (iteration == 0) 
//    return NOK;
//  if (iteration > action[current_action].iteration) 
//    iteration = action[current_action].iteration;
//  
//  do
//  {
//    //SET_ARM(COMMAND_TURN);
//    //WAIT_ARM();
//    SET_ARM(COMMAND_PUT_RIGHT);
//    WAIT_ARM();
//    module_stock--;
//    if (module_stock < 0) module_stock = 0;
//  }
//  while (iteration--);
//  //SET_ARM(COMMAND_TURN); 
//  //WAIT_ARM();
//  distance = Get_Distance_Vertex(0, action[current_action].vertexID);
//  Translate(-distance, SPEED_LIN);
//  SET_ARM(COMMAND_GO_IN);
//  while(Wait_Trajectory());
//  
//  return OK;
//}


/****************************************************************************************/
// Todo :
// Set_Not_Obstacle_Element(played element ID);
// Update_Passability_Element();  // Update the graph without played elements

