/****************************************************************************************
* Fichier     : Motor.c
* Description : Configurations et routines pour les moteurs.
* Auteur      : Christopher BUREL
* Version     : 2016.11.28
* Compilation : MPLAB X IDE (v3.45), compiler XC16 (v1.26) Lite
 ****************************************************************************************/

/****************************************************************************************
 * Includes
 ****************************************************************************************/
#include "Motor.h"

/****************************************************************************************
 * Variables
 ****************************************************************************************/


/****************************************************************************************
 * Fonction d'initialisation des paramètres moteurs
 ****************************************************************************************/
void Motor_Setup(void)
{
  Setup_PWM_Mode();
  Setup_PWM_Period();
  Setup_PWM_M1();
  Setup_PWM_M2();
  Setup_Brake();
  Setup_Motor_Speed();
  Setup_Dead_Time();
  Enable_PWM();
}

/****************************************************************************************
 * Fonction de commande de la vitesse du moteur 1 => droite
 ****************************************************************************************/
void Setpoint_M1(int32 pwm)
{
  // Ecrêtage de la consigne
  if (pwm > PWM_MAX) pwm = PWM_MAX;
  else if (pwm < -PWM_MAX) pwm = -PWM_MAX;
  
  // Freinage lorsque la consigne est faible
  if ((pwm < PWM_MIN) && (pwm > (-PWM_MIN)))
  {
    Brake_M1();
    //LED = ON;
  }
  else
  {
    //LED = OFF;
    PWM_M1 = PWM_PERIOD + pwm;
    Enable_M1();
  }
}

/****************************************************************************************
 * Fonction de commande de la vitesse du moteur 2 => gauche
 ****************************************************************************************/
void Setpoint_M2(int32 pwm)
{
  // Ecrêtage de la consigne
  if (pwm > PWM_MAX) pwm = PWM_MAX;
  else if (pwm < -PWM_MAX) pwm = -PWM_MAX;
  
  // Freinage lorsque la consigne est faible
  if ((pwm < PWM_MIN) && (pwm > (-PWM_MIN)))
  {
    Brake_M2();
    //LED = ON;
  }
  else
  {
    //LED = OFF;
    PWM_M2 = PWM_PERIOD + pwm;
    Enable_M2();
  }
}

/****************************************************************************************
 * Fonction de test des moteurs
 ****************************************************************************************/
/*void Test_Moteur(void)
{
  int16 i;
  int16 counter = _PTPER;
  if (SELECT) // SELECT = 1
  {
    for (i = 0; i < counter; i++)
    {
      Motor_Left(i);
      Motor_Right(i);
      Delay_Ms(3);
    }
    Motor_Left(0);
    Motor_Right(0);
    Delay_S(1);
    for (i = 0; i > (-counter); i--)
    {
      Motor_Left(i);
      Motor_Right(i);
      Delay_Ms(6);
    }
    Motor_Left(0);
    Motor_Right(0);
    Delay_S(1);

  }
  else // SELECT = 0
  {
    for (i = 0; i < counter; i++)
    {
      Motor_Left(i);
      Motor_Right(i);
      Delay_Ms(3);
    }
    Delay_S(1);
    for (i = 0; i > (-counter); i--)
    {
      Motor_Left(i);
      Motor_Right(i);
      Delay_Ms(6);
    }
    Delay_S(1);
  }
}
*/

