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

    // desactivate servo
    DESACTIVER_BRAS();

    Sequence_LCD_Initiale();
    Sequence_LED_Initiale();

    Setup_Timer_Primaire();
    Setup_Timer_Secondaire();
    Set_Timer_Primaire(ON);
    Set_Timer_Secondaire(ON);

    Start_UART1();
    Start_UART2();

    uint16 timeLCD = 0;
/*
    if (!START_PILOT && RECALAGE_PILOT) // Sequence de Recalage sur bordure
    {
        while (!START_PILOT)
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

        // le robot est face contre le panier, avec une calle sur le cotï¿½ entre la bordure et lui
        // valeur entre le milieu du robot et le panier : 114mm, entre le milieu du robot et la bordure : 225mm
        // Au recalage : init position, recule, monte la pince, dï¿½sactive les servos et avance au maximum vers le panier

        if (team == TEAM_A)
            Initialize_Robot_Position(1775, 2850, 90);
        else
            Initialize_Robot_Position(225, 2850, 90);

        Translate(-150, SPEED_LIN);
        while (Wait_Trajectory())
        {
            Display();
        };
        Delay_Ms(500);

        DEPOSER_BRAS();
        Delay_Ms(2000);

        // desactivate servo
        DESACTIVER_BRAS();

        Translate(150, 400);
        Delay_Ms(3000);
        Translate(0, 400);

        while (START_PILOT)
        {
        }
    }
*/
    while (!START_PILOT) // Attente de dï¿½marrage du copilot
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

    DEPOSER_BRAS();
    Delay_Ms(1000);

    // desactivate servo
    //DESACTIVER_BRAS();

    // Initialisations
    if (team == TEAM_A)
        Initialize_Robot_Position(1775, 2775, 90);
    else
        Initialize_Robot_Position(225, 2775, 90);

    Initialize_Map(team);
    Initialize_Obstacle();
    Initialize_Passability_Graph();

    Initialize_Action();

    if (mode == MODE_MATCH)
    {

        // Dï¿½pose des cerises prï¿½-embarquï¿½es
        SetAntiSlip(PWM_MIN_SLIP + 150);
        Translate(120, SPEED_LIN / 4);
        Delay_Ms(1500);

        // Marche arriï¿½re
        Translate(-120, SPEED_LIN / 2);
        While_Trajectory(Display);

        // Rotation pour descendre le bras
        {
            Rotate_To_Angle(270, SPEED_ANG);
            While_Trajectory(Display);
            Delay_Ms(500);
        }

        // Descente du bras en position d'attente
        PREPARER_BRAS();
        Delay_Ms(1000);

        // Orientation vers cerises
        {
            t_point p = {0, 0};
            if (team == TEAM_A)
                p.x = 1775;
            else
                p.x = 225;

            p.y = 2800;

            float distance = Get_Distance_Point(&robot.mm, &p);
            Translate(-distance, SPEED_LIN / 2);
            While_Trajectory(Display);
            
            t_point p2 = {1000, 2850};
            Rotate_To_Point(p2, SPEED_ANG);
            While_Trajectory(Display);
            Delay_Ms(500);
        }

        // Deplacement vers cerises
        {
            t_point p = {1000, 2850};
            if (team == TEAM_A)
                p.x += 90;
            else
                p.x -= 90;
            Rotate_To_Point(p, SPEED_ANG / 2);
            While_Trajectory(Display);
            float32 distance = Get_Distance_Point(&robot.mm, &p);
            Translate(distance, SPEED_LIN / 4);
            Delay_Ms(4000);

            // Prise des cerises
            PRISE_BRAS();
            Delay_Ms(2000);

            // Position d'attente
            PREPARER_BRAS();
            Delay_Ms(500);

            // recule
            Translate(-distance / 4, SPEED_LIN / 2);
            Delay_Ms(1000);
        }

        // Retour au panier et depose cerises
        {

            Rotate_To_Angle(-90, SPEED_ANG);
            Delay_Ms(1000);

            // retour en décallé du centre du panier
            // pour éviter le poussage des gateau contre la bordure cerise
            t_point p = {0, 2700};
            if (team == TEAM_A)
                p.x = 1750;
            else
                p.x = 250;

            Rotate_To_Point(p, SPEED_ANG / 2);
            While_Trajectory(Display);
            Delay_Ms(1000);

            DEPOSER_BRAS();

            float32 distance = Get_Distance_Point(&robot.mm, &p);
            Translate(distance, SPEED_LIN / 4);
            While_Trajectory(Display);
            Delay_Ms(1000);

            // dÃ©pose panier
            Rotate_To_Angle(90, SPEED_ANG / 2);
            Delay_Ms(1500);

            Translate(230, SPEED_LIN / 4);
            Delay_Ms(2000);

            // recule
            Translate(-120, SPEED_LIN / 2);
            While_Trajectory(Display);
            Delay_Ms(1000);
        }
        //PREPARER_BRAS();

        // allons chercher des gateaux pour les mettre dans notre zone
        // avancer
        {
            t_point zone_depose_gateaux = {0, 1200};
            // Orientation vers gateaux
            if (team == TEAM_A)
                zone_depose_gateaux.x = 1750;
            else
                zone_depose_gateaux.x = 250;
            Rotate_To_Point(zone_depose_gateaux, SPEED_ANG);
            While_Trajectory(Display);
            Delay_Ms(1000);
            
            // on avance
            //float distance = Get_Distance_Point(&robot.mm, &zone_depose_gateaux);
            float distance = robot.mm.y-zone_depose_gateaux.y;
            Translate(distance, SPEED_LIN / 4);
            While_Trajectory(Display);

            // // et on recul pour pas abimer les gateaux dans l'assiette
            // distance = -150;
            // Translate(distance, SPEED_LIN / 2);
            // While_Trajectory(Display);
            
            //Alignement pour reculer droit après
            Rotate_To_Angle(-90, SPEED_ANG / 2);
            While_Trajectory(Display);
            Delay_Ms(1000);
        }

        // prends les cerises a cote
        t_point zone_cerises_cote = {0, 1500};

        // on recul depuis les gateaux
        if (team == TEAM_A)
            zone_cerises_cote.x = 1750;
        else
            zone_cerises_cote.x = 250;

        //on recule une premiere fois de la moitié de la distance
        float distance = Get_Distance_Point(&robot.mm, &zone_cerises_cote);
        Translate(-distance/2, SPEED_LIN / 2);
        While_Trajectory(Display);
        Delay_Ms(500);

        // Position d'attente
        PREPARER_BRAS();
        Delay_Ms(2000);

        Translate(-distance/2, SPEED_LIN / 2);
        While_Trajectory(Display);
        Delay_Ms(500);
        
        // on se tourne vers les cerises
        int rotation_cerises = 0;
        if (team == TEAM_A)
            rotation_cerises = 0;
        else
            rotation_cerises = 180;

        Rotate_To_Angle(rotation_cerises, SPEED_ANG / 3);
        While_Trajectory(Display);
        Delay_Ms(1000);
        
        // on va les prendre
        Translate(180, SPEED_LIN / 2);
        Delay_Ms(2000);

        // Prise des cerises
        PRISE_BRAS();
        Delay_Ms(3000);

        // Position d'attente
        PREPARER_BRAS();
        Delay_Ms(500);

        // recule
        Translate(-180, SPEED_LIN / 2);
        Delay_Ms(1000);

        // Retour au panier et depose cerises
        {
            t_point p = {0, 2700};
            if (team == TEAM_A)
                p.x = 1775;
            else
                p.x = 225;

            Rotate_To_Point(p, SPEED_ANG / 2);
            While_Trajectory(Display);
            Delay_Ms(1000);

            DEPOSER_BRAS();
            SetAntiSlip(PWM_MIN_SLIP + 150);
            float32 distance = Get_Distance_Point(&robot.mm, &p);
            Translate(distance, SPEED_LIN);
            While_Trajectory_Reduce_Speed(Display);

            // dÃ©pose panier
            Rotate_To_Angle(90, SPEED_ANG);
            While_Trajectory(Display);
            Delay_Ms(1000);
            
            Translate(230, SPEED_LIN / 4);
            Delay_Ms(2000);

            // recule
            Translate(-120, SPEED_LIN / 2);
            While_Trajectory(Display);
            
            //re-dépose au panier
            Translate(150, SPEED_LIN / 4);
            Delay_Ms(2000);

            // recule
            Translate(-120, SPEED_LIN / 2);
            While_Trajectory(Display);
        }

        // danse de la victoire
        /*
        SetAntiSlip(PWM_MIN_SLIP + 1000);
        Rotate_To_Angle(0, SPEED_ANG);
        While_Trajectory(Display);
        Delay_Ms(300);
        Rotate_To_Angle(180, SPEED_ANG);
        While_Trajectory(Display);
        Delay_Ms(300);
        Rotate_To_Angle(0, SPEED_ANG);
        While_Trajectory(Display);
        Delay_Ms(300);
        Rotate_To_Angle(180, SPEED_ANG);
        While_Trajectory(Display);
        Delay_Ms(300);
        ResetAntiSlip();
        */
        // Prise balles cotï¿½ dï¿½part
        // while (!Execute_Action(2));

        // Retour au panier
        // while (!Execute_Action(1));

        // Prise balles cotï¿½ adverse
        // while (!Execute_Action(3));

        // Retour au panier
        // while (!Execute_Action(1));

        // action[1].iteration = 3;
        // while (!Execute_Action(1));
        // while (!Execute_Action(2));
        // while (!Execute_Action(3));
        // while (!Execute_Action(4));
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
        action = GetBestStrategiePossible(); // choix de l'action ï¿½ effectuer
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

    // Display_Sharp(2);

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
 * Sï¿½quences au dï¿½marrage du systï¿½me
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
    LCD_Text("GR 2023", LCD_NB_CHARS);

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
