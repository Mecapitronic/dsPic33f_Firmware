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

  ID = 1; // prendre lot plantes 1
  action[ID].vertexID = 5;
  action[ID].mission = 0;
  action[ID].possible = YES;
  action[ID].done = NO;
  action[ID].iteration = 1;
  if (team == TEAM_A) action[ID].point = Point(1000, 700); // JAUNE
  else action[ID].point = Point(2000, 700); // BLEU
  action[ID].function = Action_Plante;
  
  ID = 2; // aller en zone retour final
  action[ID].vertexID = 4;
  action[ID].mission = 0;
  action[ID].possible = YES;
  action[ID].done = NO;
  action[ID].iteration = 1;
  action[ID].point = vertex[ID].point;
  action[ID].function = Action_NULL;
  
  ID = 3; // prendre pot et deposer plantes
  action[ID].vertexID = 2;
  action[ID].mission = 0;
  action[ID].possible = YES;
  action[ID].done = NO;
  if (team == TEAM_A) action[ID].point = Point(0, 613);
  else action[ID].point = Point(3000, 613);
  action[ID].function = Action_Pot;
  
  ID = 4; // prendre lot plantes 2
  action[ID].vertexID = 6;
  action[ID].mission = 0;
  action[ID].possible = YES;
  action[ID].done = NO;
  action[ID].iteration = 1;
  if (team == TEAM_A) action[ID].point = Point(1000, 1300); // JAUNE
  else action[ID].point = Point(2000, 1300); // BLEU
  action[ID].function = Action_Plante;
  
  ID = 5; // prendre pot côté panneau
  action[ID].vertexID = 8;
  action[ID].mission = 0;
  action[ID].possible = YES;
  action[ID].done = NO;
  action[ID].iteration = 1;
  if (team == TEAM_A) action[ID].point = Point(1000, 2000); // JAUNE
  else action[ID].point = Point(2000, 2000); // BLEU
  action[ID].function = Action_Pot_Prendre;

  ID = 6; // déposer pot et plantes
  action[ID].vertexID = 9;
  action[ID].mission = 0;
  action[ID].possible = YES;
  action[ID].done = NO;
  action[ID].iteration = 1;
  if (team == TEAM_A) action[ID].point = Point(763, 0); // JAUNE
  else action[ID].point = Point(2237, 0); // BLEU
  action[ID].function = Action_Pot_Deposer;
  
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
  
  ID = 9; // dï¿½poser module dans zone 14 milieu
  action[ID].vertexID = 14;
  action[ID].mission = MISSION_DEPOSER;
  action[ID].possible = YES;
  action[ID].done = NO;
  action[ID].point = Point(1500,1300);
  action[ID].function = Action_Deposer;

  ID = 10; // dï¿½poser module dans zone 14 oblique
  action[ID].vertexID = 14;
  action[ID].mission = MISSION_DEPOSER;
  action[ID].possible = YES;
  action[ID].done = NO;
  if (team == TEAM_A) action[ID].point = Point(1000,1500);
  else action[ID].point = Point(2000,1500);
  action[ID].function = Action_Lacher;
 
  ID = 11; // dï¿½poser module dans zone 22 milieu
  action[ID].vertexID = 22;
  action[ID].mission = MISSION_DEPOSER;
  action[ID].possible = YES;
  action[ID].done = NO;
  action[ID].point = Point(1500,1420);
  action[ID].function = Action_Deposer;
  
  ID = 12; // dï¿½poser module dans zone 22 oblique
  action[ID].vertexID = 22;
  action[ID].mission = MISSION_DEPOSER;
  action[ID].possible = YES;
  action[ID].done = NO;
  if (team == TEAM_A) action[ID].point = Point(1090,1590);
  else action[ID].point = Point(1910,1590);
  action[ID].function = Action_Deposer;
  
  ID = 13; // dï¿½poser module dans zone 21
  action[ID].vertexID = 21;
  action[ID].mission = MISSION_DEPOSER;
  action[ID].possible = YES;
  action[ID].done = NO;
  if (team == TEAM_A) action[ID].point = Point(1000,1500);
  else action[ID].point = Point(2000,1500);
  action[ID].function = Action_Deposer;
  
  ID = 14; // dï¿½poser module dans zone 8
  action[ID].vertexID = 8;
  action[ID].mission = MISSION_DEPOSER;
  action[ID].possible = YES;
  action[ID].done = NO;
  if (team == TEAM_A) action[ID].point = Point(40,1030);
  else action[ID].point = Point(2960,1030);
  action[ID].function = Action_Deposer;

  ID = 15; // dï¿½poser module dans zone 23
  action[ID].vertexID = 23;
  action[ID].mission = MISSION_DEPOSER;
  action[ID].possible = YES;
  action[ID].done = NO;
  if (team == TEAM_A) action[ID].point = Point(40,910);
  else action[ID].point = Point(2960,910);
  action[ID].function = Action_Deposer;
  
  ID = 16; // dï¿½poser module dans zone 26
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
}

/****************************************************************************************
* Fonctions actions
****************************************************************************************/
boolean Action_NULL(void)
{
  return OK;
}

/****************************************************************************************/
boolean Action_Plante(void)
{
    int32 distance = 450;

    Rotate_To_Point(action[current_action].point, SPEED_ANG);
    while (Wait_Trajectory());

    //position d'attente
    PLANTE = 0;
    POT = 0;

    //Delai attente
    //Delay_Ms(500);

    //distance = Get_Distance_Vertex(0, action[current_action].vertexID)+50;
    Translate(distance, 100);
    while (Wait_Trajectory());

    // position de Prise
    PLANTE = 1;
    POT = 0;

    //Delais prise
    Delay_Ms(800);

    //Bras en position d'attente
    //PREPARER_BRAS();

//    distance = Get_Distance_Vertex(0, action[current_action].vertexID);
//    Translate(-distance, SPEED_LIN);
//    while (Wait_Trajectory());

    return OK;
}
/****************************************************************************************/
boolean Action_Plante_Sans_Prise(void)
{
    int32 distance = 450;

    Rotate_To_Point(action[current_action].point, SPEED_ANG);
    while (Wait_Trajectory());

    //position d'attente
    PLANTE = 0;
    POT = 0;

    //Delai attente
    //Delay_Ms(500);

    //distance = Get_Distance_Vertex(0, action[current_action].vertexID)+50;
    Translate(distance, 100);
    while (Wait_Trajectory());

    // position de Prise
    PLANTE = 0;
    POT = 0;

    //Delais prise
    Delay_Ms(800);

    //Bras en position d'attente
    //PREPARER_BRAS();

//    distance = Get_Distance_Vertex(0, action[current_action].vertexID);
//    Translate(-distance, SPEED_LIN);
//    while (Wait_Trajectory());

    return OK;
}
/****************************************************************************************/
boolean Action_Pot(void)
{
    Rotate_To_Point(action[current_action].point, SPEED_ANG);
    while (Wait_Trajectory());

    //position d'attente
    PLANTE = 1;
    POT = 0;

    // tourner légérement
    Rotate(DEG_TO_RAD(6), SPEED_ANG/2);
    while (Wait_Trajectory());

    // avance pour prendre les 2 permiers pots
    Translate(100, 70);
    while (Wait_Trajectory());
    
    // retourner légérement dans l'autre sens
    Rotate(DEG_TO_RAD(-6), SPEED_ANG/2);
    while (Wait_Trajectory());
    
    // avance pour prendre le reste des pots
    Translate(80, 70);
    while (Wait_Trajectory());

    // prendre les pots
    PLANTE = 1;
    POT = 1;

    //Delais prise pot
    Delay_Ms(1000);

    // avance pour déposer tout dans jardiniere
    Translate(160, 300);
    while (Wait_Trajectory());
//    // recul pour déposer tout dans jardiniere
//    Translate(-20, 300);
//    while (Wait_Trajectory());
//    // avance pour déposer tout dans jardiniere
//    Translate(20, 300);
//    while (Wait_Trajectory());

    // descend pot
    PLANTE = 1;
    POT = 0;
    
    //Delais dépose => ne pas déposer plante dans un premier temps !!
//    Delay_Ms(500);
//    
//    // dépose tout
//    PLANTE = 0;
//    POT = 0;
    
    //Delais dépose
    Delay_Ms(1000);
    
    // reculer pour déposer tout dans jardiniere
    Translate(-150, 20);
    while (Wait_Trajectory());
    
       // remonter pot
    PLANTE = 1;
    POT = 1; 
    
    //Delais dépose
    Delay_Ms(500);
    
    // avancer jardiniere
    Translate(150, 100);
    while (Wait_Trajectory());
    
       // dépose pot
    PLANTE = 1;
    POT = 0; 
    
    //Delais dépose
    Delay_Ms(1000);
    
       // dépose plante
    PLANTE = 0;
    POT = 0; 
    
    //Delais dépose
    Delay_Ms(1000);
    
    // reculer complet
    Translate(-240, 70);
    while (Wait_Trajectory());

    return OK;
}
/****************************************************************************************/
boolean Action_Pot_Prendre(void)
{
    Rotate_To_Point(action[current_action].point, SPEED_ANG);
    while (Wait_Trajectory());

    //position d'attente
    PLANTE = 1;
    POT = 0;

    // tourner légérement
    Rotate(DEG_TO_RAD(6), SPEED_ANG/2);
    while (Wait_Trajectory());

    // avance pour prendre les 2 permiers pots
    Translate(100, 70);
    while (Wait_Trajectory());
    
    // retourner légérement dans l'autre sens
    Rotate(DEG_TO_RAD(-6), SPEED_ANG/2);
    while (Wait_Trajectory());
    
    // avance pour prendre le reste des pots
    Translate(80, 70);
    while (Wait_Trajectory());

    // prendre les pots
    PLANTE = 1;
    POT = 1;

    //Delais prise pot
    Delay_Ms(1000);

    // reculer
    Translate(-100, 300);
    while (Wait_Trajectory());

    return OK;
}
/****************************************************************************************/
boolean Action_Pot_Deposer(void)
{
        //position d'attente
    PLANTE = 1;
    POT = 1;
    
    Rotate_To_Point(action[current_action].point, SPEED_ANG);
    while (Wait_Trajectory());

    // avance pour déposer tout dans jardiniere
    Translate(340, 300);
    while (Wait_Trajectory());

    // descend pot
    PLANTE = 1;
    POT = 0;
    
    //Delais dépose
    Delay_Ms(1000);
    
    // reculer pour déposer tout dans jardiniere
    Translate(-150, 20);
    while (Wait_Trajectory());
    
       // remonter pot
    PLANTE = 1;
    POT = 1; 
    
    //Delais dépose
    Delay_Ms(500);
    
    // avancer jardiniere
    Translate(150, 100);
    while (Wait_Trajectory());
    
       // dépose pot
    PLANTE = 1;
    POT = 0; 
    
    //Delais dépose
    Delay_Ms(1000);
    
       // dépose plante
    PLANTE = 0;
    POT = 0; 
    
    //Delais dépose
    Delay_Ms(1000);
    
    // reculer complet
    Translate(-240, 70);
    while (Wait_Trajectory());

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

