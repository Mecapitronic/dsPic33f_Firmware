/****************************************************************************************
 * Fichier     : PILOT_main.c
 * Description : Programme principal du PILOT.
 * Auteur      : Christopher BUREL
 * Version     : 2024.01.21
 * Compilation : MPLAB X IDE (v6.05), compiler XC16 (v2.00) Lite
 ****************************************************************************************/

/****************************************************************************************
 * Includes
 ****************************************************************************************/
#include "PILOT_main.h"

#ifdef SERIAL_PRINT
#pragma message(" Serial Print is enabled ! ")
#endif

#ifdef __MPLAB_SIMULATION__
#pragma message(" Timer at 0 for Simulation with MPLAB ! ")
#endif

/****************************************************************************************
 * Variables
 ****************************************************************************************/
uint8 team = TEAM_A;
uint8 mode = MODE_MATCH;
uint8 start = FALSE;
uint8 recalage = FALSE;

/****************************************************************************************
 * Routine Principale
 ****************************************************************************************/
_PILOT_
{
    current_time = 0;
    Setup_Hardware();

    Sequence_LCD_Initiale();
    Sequence_LED_Initiale();

    Setup_Timer_Primaire();
    Setup_Timer_Secondaire();
    Set_Timer_Primaire(ON);
    Set_Timer_Secondaire(ON);

    Start_UART1();
    Start_UART2();

    uint16 timeLCD = 0;

    Initialize_Robot_Position(1000, 1000, 0);

    while (!START_PILOT) // Attente de d�marrage du copilot
    {
        team = SELECT;
        mode = MODE_PILOT;
        start = START_PILOT;
        recalage = RECALAGE_PILOT;
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
    Display();

    // Initialisations
    if (team == TEAM_A)
        Initialize_Robot_Position(315, 240, 90); // JAUNE
    else
        Initialize_Robot_Position(2685, 240, 90); // BLEU

    Initialize_Map(team);
    Initialize_Obstacle();
    Initialize_Passability_Graph();

    Initialize_Action();

    if (mode == MODE_MATCH)
    {
    /************************************* START MATCH ***********************************/
        
    while (!Execute_Action(1));
    while (!Execute_Action(3));
    
    while (!Execute_Action(4));
    while (!Execute_Action(5));
    while (!Execute_Action(6));
    
    while (!Execute_Action(2));
    
        Translate(60, 50);
        While_Trajectory(Display);
    
    Display();
        
    /************************************* END MATCH *************************************/
    }
    else
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
                    while (Wait_Trajectory())
                    {
                        Display();
                    };
                    uint32 distance = Get_Distance_Point(&robot.mm, &p);
                    Translate(distance, SPEED_LIN);
                    while (Wait_Trajectory())
                    {
                        Display();
                    };
                    Send_UART1_ACK(CMD_DONE);
                    break;
                case 'T':
                    Send_UART1_ACK(CMD_BUSY);
                    Translate(uartCMD.distance, SPEED_LIN);
                    while (Wait_Trajectory())
                    {
                        Display();
                    };
                    Send_UART1_ACK(CMD_DONE);
                    break;
                case 'R':
                    Send_UART1_ACK(CMD_BUSY);
                    Rotate_To_Angle(uartCMD.angle, SPEED_ANG);
                    while (Wait_Trajectory())
                    {
                        Display();
                    };
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

    // #define RECHERCHE_ACTION
#ifdef RECHERCHE_ACTION
    int8 action = 0;
    while (action != -1)
    {
        action = GetBestStrategiePossible(); // choix de l'action � effectuer
        if (action != -1)
        {
            while (Executer_Strategie(action) != OK)
                ; // execution de l'action
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
    while (FOREVER)
        ;

    return 1;
}

/****************************************************************************************
 * LCD display
 ****************************************************************************************/
int32 running = 0;
int32 coef = 32;

void Display()
{
    // robot position
    LCD_Line(1);
    LCD_Text("X", 1);
    LCD_Value(robot.mm.x, 4, 0);
    LCD_Text(" Y", 2);
    LCD_Value(robot.mm.y, 4, 0);
    LCD_Text(" ", 1);
    LCD_Value(robot.deg, 3, 0);
    LCD_Char(0xDF); // "degre" character
    // LCD_Text(" ", 1);
    if (running < coef)
        LCD_Text("|", 1);
    else if (running < coef * 2)
        LCD_Text("/", 1);
    else if (running < coef * 3)
        LCD_Text("-", 1);
    else if (running < coef * 4)
        LCD_Text("\\", 1);
    // LCD_Char(0x5C); // '\' char

    running++;
    if (running > coef * 4)
        running = 0;

     //Display_Sharp(2);

    // odometry
    // LCD_Line(2);
    // LCD_Text("R", 1);
    // LCD_Value(wheel_right.velocity, 7, 0);
    // LCD_Text("L", 1);
    // LCD_Value(wheel_left.velocity, 7, 0);

    // command velocity
    // LCD_Line(3);
    // LCD_Text("cVL", 3);
    // LCD_Value(move_lin.command.velocity, 6, 0);
    // LCD_Text("  cVA", 5);
    // LCD_Value(move_ang.command.velocity, 6, 0);

    // Afficher_UART(3);

    // UART Receive
    // Afficher_UART2(2);

    Sequence_LCD_Score();
}

/****************************************************************************************
 * S�quences au d�marrage du syst�me
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
    LCD_Text("GR 2024", LCD_NB_CHARS);

    LCD_Line(2);
    LCD_Text("V", 1);
    LCD_Text(__DATE__, 6);
    LCD_Text(" ", 1);
    LCD_Text(__TIME__, 8);
}

void Sequence_LCD_Waiting_Mode(void)
{
    LCD_Line(1);
    LCD_Text("PILOT ", 6);
    if (MODE_PILOT == MODE_MATCH)
        LCD_Text("Match ", 6);
    else
        LCD_Text("Test  ", 6);
    if (SELECT == TEAM_A)
        LCD_Text(LCD_TEAM_A, 4);
    else
        LCD_Text(LCD_TEAM_B, 4);
}

uint8 startLCD = 0;
void Sequence_LCD_Waiting_Start(void)
{
    LCD_Line(2);
    // for (uint8 i = 0; i < 1; i++) {
    if (startLCD == 0)
        LCD_Char('>');
    else
        LCD_Char(' ');
    //}
    if (recalage == TRUE)
        LCD_Text("Calage Bordure", 14);
    else
        LCD_Text("Attente  Start", 14);

    // for (uint8 i = 0; i < 1; i++) {
    // LCD_Goto(4, 15);
    if (startLCD == 0)
        LCD_Char('<');
    else
        LCD_Char(' ');
    //}
    startLCD++;
    if (startLCD > 1)
        startLCD = 0;
}

void Sequence_LCD_Score()
{
    LCD_Line(2);
    LCD_Text(" Score : 62 Pts ", 16);
}


      // test asserv chris
//        Translate(1000, SPEED_LIN);
//        While_Trajectory(Display);
//        Delay_Ms(1000);
//        Rotate(PI, SPEED_LIN);
//        While_Trajectory(Display);
//        Delay_Ms(1000);
//        Translate(1000, SPEED_LIN);
//        While_Trajectory(Display);
//        Delay_Ms(1000);
//        Rotate(-PI, SPEED_LIN);
//        While_Trajectory(Display);
