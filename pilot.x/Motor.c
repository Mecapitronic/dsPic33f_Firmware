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
int16 antiSlipValue = PWM_MIN_SLIP;


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
  ResetAntiSlip();
}

/****************************************************************************************
 * Fonction de commande de la vitesse du moteur 1 => droite
 ****************************************************************************************/
void Setpoint_M1(int32 pwm)
{
  // anti patinage
  pwm = AntiSlip(pwm, &wheel_right);
  
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
  // anti patinage
  pwm = AntiSlip(pwm, &wheel_left);

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
 * Fonction d'anti-patinage => limite les moteurs en fonction des codeuses
 ****************************************************************************************/
int32 AntiSlip(int32 pwm, t_motion *wheel)
{
#ifdef ENABLE_ANTI_SLIP
  uint8 slipping = NO; // reset condition de glissement
  float32 pwm_slip = wheel->velocity;
  pwm_slip *= COEF_ENCODER_MOTOR;
  
  if (pwm > 0) // avance
  {
      pwm_slip += antiSlipValue; // ajout limite de patinage, sinon le robot arrête d'avancer !
      if (pwm > pwm_slip) slipping = YES;
  }
  else // recule
  {
      pwm_slip -= antiSlipValue; // négatif !
      if (pwm < pwm_slip) slipping = YES;
  }
  if (slipping)
  {
    MOVE_Reset_Ramp(&move_lin, &robot.lin); // reset des rampes de déplacement pour repartir en douceur
    MOVE_Reset_Ramp(&move_ang, &robot.ang);  
    return pwm_slip;
  }
#endif
  return pwm;
  
}

void SetAntiSlip(int pwm)
{
    if(pwm> PWM_MIN && pwm< PWM_MAX)
        antiSlipValue = pwm;
}

void ResetAntiSlip()
{
    antiSlipValue = PWM_MIN_SLIP;
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

