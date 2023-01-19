/****************************************************************************************
* Fichier     : PILOT_main.c
* Description : Programme principal du PILOT.
* Auteur      : Christopher BUREL
* Version     : 2017.05.22
* Compilation : MPLAB X IDE (v3.45), compiler XC16 (v1.26) Lite
 ****************************************************************************************/

 /****************************************************************************************
  * Includes
  ****************************************************************************************/
#include "PILOT_main.h"

#ifdef SERIAL_PRINT
#pragma message (" Serial Print is enabled ! ")
#endif

#ifdef SIMULATION_MPLAB
#pragma message (" Timer at 0 for Simulation with MPLAB ! ")
#endif

  /****************************************************************************************
   * Variables
   ****************************************************************************************/
uint8 team = TEAM_A;

/****************************************************************************************
 * Routine Principale
 ****************************************************************************************/
_PILOT_
{
	current_time = 0;
	Setup_Hardware();

	Sequence_Initiale();

	LCD_Line(1);
	LCD_Text("ROBOT MECAPITRONIC", 20);
	LCD_Line(3);
	LCD_Text("Waiting start...", 20);

	while(!START_PILOT || MODE_TEST)  // attente démarrage du copilot ou du passage en mode TEST
	{
		team = SELECT;
		COLOR_TEAM = team;
		LCD_Line(2);
		LCD_Text("Couleur ", 8);
		if (team == TEAM_A) LCD_Text(LCD_TEAM_A,12);
		else LCD_Text(LCD_TEAM_B,12);
	}

	if (team == TEAM_A)
		Initialize_Robot_Position(225, 225, 90);
	else
		Initialize_Robot_Position(1775, 225, 90);

	Initialize_Map(team);
	Initialize_Obstacle();
	Initialize_Passability_Graph();

	Initialize_Action();

	Initialize_Asserv();
	Set_Asserv(ON);

	Setup_Timer_Primaire();
	Setup_Timer_Secondaire();
	Set_Timer_Primaire(ON);
	Set_Timer_Secondaire(ON);

	t_uartCMD uartCMDtmp;
	if (MODE_TEST)
	{
		while (FOREVER)
		{
			uartCMDtmp = uartCMD;
			if (uartCMD.cmd != '0')
			{
				uartCMD.cmd == '0';
				//do stuff with uartCMDtmp
			}
		}
	}
	else
	{
		action[1].iteration = 3;
		while (!Execute_Action(1));
		while (!Execute_Action(3));
	}

	//#define RECHERCHE_ACTION
	#ifdef RECHERCHE_ACTION
		int8 action = 0;
		while (action != -1)
		{
		  action = GetBestStrategiePossible();         // choix de l'action à effectuer
		  if (action != -1)
		  {
			while (Executer_Strategie(action) != OK); // execution de l'action
		  }
		}
	#endif

		//  while (FOREVER)
		//  {
		//    for (current_action = 0; current_action < MAX_ACTION; current_action++)
		//    {
		//      if (action[current_action].possible == ACTION_TO_RETRY)
		//      {
		//        Execute_Action(current_action);
		//      }
		//    }
		//  }

		// Do not restart the main
		while (FOREVER) Display();

		return 1;
			}


	/****************************************************************************************
	 * LCD display
	 ****************************************************************************************/
				void Display()
			{
				// robot position
				LCD_Line(1);
				LCD_Text("X ", 2);
				LCD_Value(robot.mm.x, 4, 0);
				LCD_Text("  Y ", 4);
				LCD_Value(robot.mm.y, 4, 0);
				LCD_Text(" ", 1);
				LCD_Value(robot.deg, 3, 0);
				LCD_Char(0xDF); // "degre" character
				LCD_Text(" ", 1);

				// command position
				LCD_Line(2);
				LCD_Text("cL", 2);
				LCD_Value(STEP_TO_MM(move_lin.command.position - robot.lin.position), 7, 0);
				LCD_Text("  cA", 4);
				LCD_Value(STEP_TO_DEG(move_ang.command.position - robot.ang.position), 7, 0);

				// command velocity
				LCD_Line(3);
				LCD_Text("cVL", 3);
				LCD_Value(move_lin.command.velocity, 6, 0);
				LCD_Text("  cVA", 5);
				LCD_Value(move_ang.command.velocity, 6, 0);

				// UART Receive
				Afficher_UART(4);
			}


