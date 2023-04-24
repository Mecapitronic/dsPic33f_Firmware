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
uint8 start = FALSE;

/****************************************************************************************
 * Routine Principale
 ****************************************************************************************/
_PILOT_
{
	current_time = 0;
	Setup_Hardware();
	Sequence_LCD_Initiale();
	Sequence_LED_Initiale();
    
	team = SELECT;
	mode = MODE_PILOT;
	start = START_PILOT;

    Initialize_Robot_Position(500, 500, 0);

	Setup_Timer_Primaire();
	Setup_Timer_Secondaire();
	Set_Timer_Primaire(ON);
	Set_Timer_Secondaire(ON);
	Start_UART1();
	Start_UART2();

	uint16 timeLCD = 0;
	// Recalage Bordure
	if (START_PILOT)
	{
        LCD_Line(4);
        LCD_Text("   Calage Bordure   ", LCD_NB_CHARS);
        while (START_PILOT)
		{
            //Wainting for Cordon de démarrage
            team = SELECT;
            mode = MODE_PILOT;
            COLOR_TEAM = SELECT;
            if (timeLCD > 250)
            {
                LED_Toggle();
                Sequence_LCD_Waiting_Mode();
                Sequence_LCD_Waiting_Start();
                timeLCD = 0;
            }
            timeLCD++;
            Delay_Ms(1);
		}
        Recalage_Bordure();        
	}

    // Initialisation
    if (team == TEAM_A)
        Initialize_Robot_Position(225, 225, 90);
    else
        Initialize_Robot_Position(1775, 225, 90);

    Initialize_Map(team);
    Initialize_Obstacle();
    Initialize_Passability_Graph();

    Initialize_Action();

    // Attente de démarrage du copilot
    if (!START_PILOT)
    {
        Sequence_LCD_Initiale();
        LCD_Line(4);
        LCD_Text("   Attente  Start   ", LCD_NB_CHARS);


        while (!START_PILOT)  
        {
            if (timeLCD > 250) {
                LED_Toggle();
                Sequence_LCD_Waiting_Mode();
                Sequence_LCD_Waiting_Start();
                timeLCD = 0;
            }
            timeLCD++;
            Delay_Ms(1);
        }
    }

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

void Recalage_Bordure(void)
{
    if (team == TEAM_A)
        Initialize_Robot_Position(225, 225, 90);
    else
        Initialize_Robot_Position(1775, 225, 90);

    Delay_Ms(500);
    //First wall
    Translate(-200, SPEED_LIN);
    while (Wait_Trajectory()) { Display(); };
    Delay_Ms(500);
    if (team == TEAM_A)
        Initialize_Robot_Position(225, 125, 90);
    else
        Initialize_Robot_Position(1775, 125, 90);
    Delay_Ms(500);

    Translate(100, SPEED_LIN);
    while (Wait_Trajectory()) { Display(); };
    Delay_Ms(500);
    Rotate_To_Angle(0, SPEED_ANG);
    while (Wait_Trajectory()) { Display(); };
    Delay_Ms(500);

    //Second wall
    Translate(-200, SPEED_LIN);
    while (Wait_Trajectory()) { Display(); };
    Delay_Ms(500);
    Initialize_Robot_Position(125, 225, 0);

    Delay_Ms(500);
    Translate(100, SPEED_LIN);
    while (Wait_Trajectory()) { Display(); };
    Delay_Ms(500);
    Rotate_To_Angle(45, SPEED_ANG);
    while (Wait_Trajectory()) { Display(); };
    Delay_Ms(500);
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



/****************************************************************************************
* Séquences au démarrage du système
****************************************************************************************/
void Sequence_LED_Initiale(void)
{
    for (uint8 i = 0; i < 5; i++)
    {
        LED = !LED;
        Delay_Ms(100);
    }
    LED = ON;
    Delay_S(1);
    LED = OFF;
}

void Sequence_LCD_Initiale(void)
{
    LCD_Line(1);
    LCD_Text("MECAPITRONIC GR 2023", LCD_NB_CHARS);

    LCD_Line(2);
    LCD_Text("V: ", 3);
    LCD_Text(__DATE__, 6);
    LCD_Text(" ", 1);
    LCD_Text(__TIME__, 8);
}

void Sequence_LCD_Waiting_Mode(void)
{
    LCD_Line(3);
    LCD_Text("PILOT : ", 8);
    if (MODE_PILOT == MODE_MATCH) LCD_Text("Match  ", 7);
    else LCD_Text("Test   ", 7);
    if (SELECT == TEAM_A) LCD_Text(LCD_TEAM_A, 4);
    else LCD_Text(LCD_TEAM_B, 4);
    LCD_Text(" ", 1);
}

uint8 startLCD = 0;
void Sequence_LCD_Waiting_Start(void)
{
    LCD_Goto(4, 0);
    for (uint8 i = 0; i < 3; i++)
    {
        if (startLCD == i)
            LCD_Char('>');
        else
            LCD_Char(' ');
    }
    for (uint8 i = 0; i < 3; i++)
    {
        LCD_Goto(4, 19 - i);
        if (startLCD == i)
            LCD_Char('<');
        else
            LCD_Char(' ');
    }

    startLCD++;
    if (startLCD >= 3)
        startLCD = 0;
}

