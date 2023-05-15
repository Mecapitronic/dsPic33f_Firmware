/****************************************************************************************
 * Fichier     : Servo.c
 * Description : Gestion des servomoteurs.
 * Auteur      : Christopher BUREL
 * Version     : 2017.05.07
 * Compilation : MPLAB X IDE (v3.45), compiler XC16 (v1.26) Lite
 ****************************************************************************************/

/****************************************************************************************
 * Includes
 ****************************************************************************************/
#include "Servo.h"

/****************************************************************************************
 * Variables
 ****************************************************************************************/
boolean servo_actif[NBR_SERVO + 1] = {NO};

t_move move_servo[NBR_SERVO + 1];

boolean sens_rotation_tourelle = 0;

/****************************************************************************************
 * Fonction de mise à jour des servomoteurs, doit être exécuter au moins toutes les 20ms
 ****************************************************************************************/
void Actualiser_Servo()
{
    #ifdef SERVO_1
  MOVE_Filter(&move_servo[1], &move_servo[1].command);
  if (servo_actif[1])
  {
            SERVO_1 = HIGH;
    Delay_Us(move_servo[1].command.position);
            SERVO_1 = LOW;
        }
    #endif

    #ifdef SERVO_2
  MOVE_Filter(&move_servo[2], &move_servo[2].command);
  if (servo_actif[2])
  {
            SERVO_2 = HIGH;
    Delay_Us(move_servo[2].command.position);
            SERVO_2 = LOW;
        }
    #endif

    #ifdef SERVO_3
  MOVE_Filter(&move_servo[3], &move_servo[3].command);
  if (servo_actif[3])
  {
            SERVO_3 = HIGH;
    Delay_Us(move_servo[3].command.position);
            SERVO_3 = LOW;
        }
    #endif

    #ifdef SERVO_4
  MOVE_Filter(&move_servo[4], &move_servo[4].command);
  if (servo_actif[4])
  {
            SERVO_4 = HIGH;
    Delay_Us(move_servo[4].command.position);
            SERVO_4 = LOW;
        }
    #endif

    #ifdef SERVO_5
        MOVE_Filtre_Consigne(&move_servo[5]);
  if (servo_actif[5])
  {
            SERVO_5 = HIGH;
            Delay_Us(MOVE_Get_Position(&move_servo[5]));
            SERVO_5 = LOW;
        }
    #endif

    #ifdef SERVO_6
        MOVE_Filtre_Consigne(&move_servo[6]);
  if (servo_actif[6])
  {
            SERVO_6 = HIGH;
            Delay_Us(MOVE_Get_Position(&move_servo[6]));
            SERVO_6 = LOW;
        }
    #endif
}

/****************************************************************************************
 * Fonction de calcul de la durée d'impulsion (µs) d'un servo à partir de l'angle souhaité
 ****************************************************************************************/
void Set_Servo(uint8 servoID, int16 angle)
{
    uint16 impulsion = 0;
  if (angle == SERVO_OFF)
  {
        // Désactiver le servo, sans changer la consigne
        servo_actif[servoID] = NO;
  }
  else
  {
        // Durée d'impulsion
        impulsion = (angle * COEF_SERVO) + OFFSET_SERVO;
        // Limitation
        if (impulsion > MAX_SERVO) impulsion = MAX_SERVO;
        else if (impulsion < MIN_SERVO) impulsion = MIN_SERVO;
        // Stocker la consigne
    MOVE_Setpoint_Position(&move_servo[servoID], impulsion);
        // Activer le servo
        servo_actif[servoID] = YES;
    }
}

/****************************************************************************************
 * Fonction retournant l'angle d'un servo à partir de la durée d'impulsion enregistrée
 ****************************************************************************************/
int16 Get_Servo(uint8 servoID)
{
  // if (servo_actif[servoID] == NO)
  // {
    // return SERVO_OFF;
  // }
  // else
  // {
    return (((move_servo[servoID].command.position) - OFFSET_SERVO) / COEF_SERVO);
  //}
}

/****************************************************************************************
 * Fonction retournant OK si la consigne du servo est atteinte, NOK sinon
 ****************************************************************************************/
boolean Check_Servo(uint8 servoID)
{
    return (MOVE_Check_Position(&move_servo[servoID]));
}

/****************************************************************************************
 * Fonction d'initialisation d'un servomoteur
 ****************************************************************************************/
void Init_Servo(uint8 servoID, int16 vit, int16 acc, int8 jerk)
{
  MOVE_Initialize(&move_servo[servoID]);
  MOVE_Setpoint(&move_servo[servoID], OFFSET_SERVO, vit, 0, acc, jerk);
}

/****************************************************************************************
 * Fonction d'initialisation de tous les servomoteurs
 ****************************************************************************************/
void Init_All_Servo(void)
{
#ifdef SERVO_1
    Init_Servo(1, S1_VIT, S1_ACC, S1_JERK);
#endif
#ifdef SERVO_2
    Init_Servo(2, S2_VIT, S2_ACC, S2_JERK);
#endif
#ifdef SERVO_3
    Init_Servo(3, S3_VIT, S3_ACC, S3_JERK);
#endif
#ifdef SERVO_4
    Init_Servo(4, S4_VIT, S4_ACC, S4_JERK);
#endif
#ifdef SERVO_5
    Init_Servo(5, S5_VIT, S5_ACC, S5_JERK);
#endif
#ifdef SERVO_6
    Init_Servo(6, S6_VIT, S6_ACC, S6_JERK);
#endif

}

/****************************************************************************************
 * Fonction de rotation de la tourelle
 ****************************************************************************************/
void Rotation_Tourelle(void)
{
    if (sens_rotation_tourelle)
        Set_Servo(6, -30);
    else
        Set_Servo(6, 30);

    if (Check_Servo(6))
        sens_rotation_tourelle = !sens_rotation_tourelle;
}

/****************************************************************************************
 * Fonction de test des servos
 ****************************************************************************************/
void Mode_Test_Servo(void)
{
    int16 angle = 0;
    uint8 servo = 1;

    LCD_Line(1);
    LCD_Text("ANGLE S1 =    0", 16);
    LCD_Line(2);
    LCD_Text("SW1:S? SW2+ SW3-", 16);
    while (SW1);

    Relay_On(); // Alim servo

  while(FOREVER)
  {
    if(SW1)
    {
            BUZZER = ON;
            servo++;
            if (servo > 9) servo = 1;
            LCD_Goto(1, 7);
            LCD_Value(servo, 1, 0);
            angle = Get_Servo(servo);
            BUZZER = OFF;
            Delay_Ms(200);
            if (SW1) Delay_Ms(300);
        }
    if(SW2||SW3)
    {
            if (SW2) angle++;
            if (SW3) angle--;
            Delay_Ms(50);
      if(SW2&&SW3)
      {
                angle = 0;
                Set_Servo(servo, angle);
                LCD_Goto(1, 11);
                LCD_Value(angle, 4, 0);
                Delay_S(1);
                Set_Servo(servo, SERVO_OFF);
      }
      else
      {
                Set_Servo(servo, angle);
                LCD_Goto(1, 11);
                LCD_Value(angle, 4, 0);
            }
        }
    }// while
}

