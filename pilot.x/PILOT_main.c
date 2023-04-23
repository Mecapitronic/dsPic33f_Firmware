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
uint8 mode = MODE_MATCH;

/****************************************************************************************
 * Routine Principale
 ****************************************************************************************/
_PILOT_
{
	current_time = 0;
	Setup_Hardware();

	Sequence_LED_Initiale();

	LCD_Line(1);
	LCD_Clear_Line();
	LCD_Line(2);
	LCD_Clear_Line();
	LCD_Line(3);
	LCD_Clear_Line();
	LCD_Line(4);
	LCD_Clear_Line();

	uint16 timeLCD = 0;
	while (!START_PILOT)  // attente de démarrage du copilot
	{
		team = SELECT;
            mode = MODE_PILOT;
		if (timeLCD > 250) {
			LED_Toggle();
			Sequence_LCD_Initiale();
			timeLCD = 0;
		}
		timeLCD++;
		Delay_Ms(1);
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
	Start_UART1();
	Start_UART2();

	if (mode == MODE_TEST)
	{
		while (FOREVER)
		{
			if (uartCMD.cmd != '0')
			{
				switch (uartCMD.cmd)
				{
                    case 'A':
					    Send_UART1_ACK(CMD_BUSY);
                        if (Execute_Action(uartCMD.actionID))
                        {
                            Send_UART1_ACK(CMD_DONE);
                        }
                        else
                        {
                            Send_UART1_ACK(CMD_FAIL);
                        }				
                        break;
                    case 'V':				
                        Send_UART1_ACK(CMD_BUSY);
                        if (Navigate_To_Vertex(uartCMD.vertexID, 10))
                        {
                            Send_UART1_ACK(CMD_DONE);
                        }
                        else
                        {
                            Send_UART1_ACK(CMD_FAIL);
                        }
                        break;
                    case 'P':				
                        Send_UART1_ACK(CMD_BUSY);
                        Initialize_Robot_Position(uartCMD.point.x, uartCMD.point.y, uartCMD.angle);
                        Initialize_Asserv();
                        Send_UART1_ACK(CMD_DONE);
                        break;
                    case 'M':				
                        Send_UART1_ACK(CMD_BUSY);
                        t_point p;
                        p.x = uartCMD.point.x;
                        p.y = uartCMD.point.y;
                        Rotate_To_Point(p, SPEED_ANG);
						while (Wait_Trajectory()) { Display(); };
                        uint32 distance = Get_Distance_Point(&robot.mm, &p);
                        Translate(distance, SPEED_LIN);
                        while (Wait_Trajectory()) { Display(); };
                        Send_UART1_ACK(CMD_DONE);                   
                        break;
                    case 'T':				
                        Send_UART1_ACK(CMD_BUSY);
                        Translate(uartCMD.distance, SPEED_LIN);
                        while (Wait_Trajectory()) { Display(); };
                        Send_UART1_ACK(CMD_DONE);
                        break;
                    case 'R':				
                        Send_UART1_ACK(CMD_BUSY);
                        Rotate_To_Angle(uartCMD.angle, SPEED_ANG);
                        while (Wait_Trajectory()) { Display(); };
                        Send_UART1_ACK(CMD_DONE);
                        break;
                    default:
                        break;
				}
				uartCMD.cmd = '0';
			}
            Display();
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
int32 running=0;
int32 coef=32;
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
	//LCD_Text(" ", 1);
    if(running<coef)
        LCD_Text("|", 1);
    else if(running<coef*2)
        LCD_Text("/", 1);
    else if(running<coef*3)
        LCD_Text("-", 1);
    else if(running<coef*4)
        LCD_Text("\\", 1);
        //LCD_Char(0x5C); // '\' char
    
    running++;
    if(running>coef*4)
        running=0;
	
    // command position
	LCD_Line(2);
	LCD_Text("cL", 2);
	LCD_Value(STEP_TO_MM(move_lin.command.position - robot.lin.position), 7, 0);
	LCD_Text("  cA", 4);
	LCD_Value(STEP_TO_DEG(move_ang.command.position - robot.ang.position), 7, 0);

	// command velocity
	//LCD_Line(3);
	//LCD_Text("cVL", 3);
	//LCD_Value(move_lin.command.velocity, 6, 0);
	//LCD_Text("  cVA", 5);
	//LCD_Value(move_ang.command.velocity, 6, 0);

    Afficher_UART(3);
    
	// UART Receive
	Afficher_UART2(4);
    
}


