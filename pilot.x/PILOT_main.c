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

#ifdef __MPLAB_SIMULATION__
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
	LCD_Clear_Line();
	LCD_Line(2);
	LCD_Clear_Line();
	LCD_Line(3);
	LCD_Clear_Line();
	LCD_Line(4);
	LCD_Clear_Line();

	LCD_Line(1);
	LCD_Text("ROBOT MECAPITRONIC", 20);
	LCD_Line(3);
	LCD_Text("Waiting start...", 20);

	while(!START_PILOT)  // attente de démarrage du copilot
	{
		team = SELECT;
		COLOR_TEAM = team;
		LCD_Line(2);
		LCD_Text("Couleur ", 8);
		if (team == TEAM_A) LCD_Text(LCD_TEAM_A,12);
		else LCD_Text(LCD_TEAM_B,12);

		LCD_Line(4);
		if(MODE_TEST) LCD_Text("Mode Test", 10);
		else LCD_Text("Mode Match!", 10);
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

	if (MODE_TEST)
	{
		while (FOREVER)
		{
			if (uartCMD.cmd != '0')
			{
				switch (uartCMD.cmd)
				{
				case 'L':
					break;
				case 'A':
				{

					Send_UART1_ACK(CMD_BUSY);
					if (Execute_Action(uartCMD.actionID))
					{
						Send_UART1_ACK(CMD_DONE);
					}
					else 
					{
						Send_UART1_ACK(CMD_FAIL);
					}
				}
				case 'V':
				{
					Send_UART1_ACK(CMD_BUSY);
					if (Navigate_To_Vertex(uartCMD.vertexID, 10))
					{
						Send_UART1_ACK(CMD_DONE);
					}
					else
					{
						Send_UART1_ACK(CMD_FAIL);
					}
				}
				break;
				case 'T':
				{
					Send_UART1_ACK(CMD_BUSY);
					Translate(uartCMD.distance, SPEED_LIN);
					while (Wait_Trajectory());
					Send_UART1_ACK(CMD_DONE);
				}
				break;
				case 'R':
				{
					Send_UART1_ACK(CMD_BUSY);
					Rotate_To_Angle(uartCMD.angle, SPEED_ANG);
					while (Wait_Trajectory());
					Send_UART1_ACK(CMD_DONE);
				}
				break;
				case 'M':
				{
					Send_UART1_ACK(CMD_BUSY);
					t_point p;
					p.x = uartCMD.point.x;
					p.y = uartCMD.point.y;
					
					Rotate_To_Point(p, SPEED_ANG);
					while (Wait_Trajectory());
					uint32 distance = Get_Distance_Point(&robot.mm, &p);
					Translate(distance, SPEED_LIN);
					while (Wait_Trajectory());
					Send_UART1_ACK(CMD_DONE);
				}
				break;
				case 'N':
				{
					/*
					Set_Timeout_Traj(15000);  // 15s

					do
					{
						Go_To_Point(p, SPEED_LIN, SPEED_LIN);
					} while ((Get_Distance_Vertex(0, Get_End_Vertex()) > 10) && !TIMEOUT_TRAJ);
					*/
				}
				break;
				default:

					break;
				}
				uartCMD.cmd = '0';
			}
			else
			{
				Update_Obstacle(BRAKE_DISTANCE);
				Update_Passability_Graph();
			}
		}
	}
	else
	{
		action[1].iteration = 3;
		while (!Execute_Action(1));
		while (!Execute_Action(2));
		while (!Execute_Action(3));
		while (!Execute_Action(4));
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
		while (FOREVER);

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


