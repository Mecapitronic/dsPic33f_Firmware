/****************************************************************************************
* Fichier     : Motor.h
* Description : Configurations et routines pour les moteurs.
* Auteur      : Christopher BUREL
* Version     : 2017.05.22
* Compilation : MPLAB X IDE (v3.45), compiler XC16 (v1.26) Lite
 ****************************************************************************************/

#ifndef MOTOR_H
#define	MOTOR_H

/****************************************************************************************
 * Includes
 ****************************************************************************************/
#include "PILOT_main.h"

/****************************************************************************************
 * Configurations moteurs (PWM)
 ****************************************************************************************/
#define Enable_PWM()        {P1TCONbits.PTEN = 1;}
#define PWM_PERIOD          P1TPERbits.PTPER
#define PWM_M1              PDC1
#define PWM_M2              PDC2
// Fréquence PWM en kHz
#define PWM_FREQ_KHZ        20
#define Setup_PWM_Period()  {PWM_PERIOD = (40000/(PWM_FREQ_KHZ));}
// Edge aligned mode, PWM I/O pin pair independent
#define Setup_PWM_Mode()    {P1TCONbits.PTMOD = 0; PWM1CON1bits.PMOD1 = 1; PWM1CON1bits.PMOD2 = 1;}
// pin DIR_Mx = PWM, pin PWM_Mx = I/O (locked anti-phase PWM)
#define Setup_PWM_M1()      {PWM1CON1bits.PEN1H = 1; PWM1CON1bits.PEN1L = 0;}
#define Setup_PWM_M2()      {PWM1CON1bits.PEN2H = 1; PWM1CON1bits.PEN2L = 0;}
// Frein moteur = pin PWM_Mx (locked anti-phase PWM)
#define Setup_Brake()       {TRISBbits.TRISB15 = 0; TRISBbits.TRISB13 = 0;}
#define Brake_M1()          {LATBbits.LATB15 = 0;}
#define Brake_M2()          {LATBbits.LATB13 = 0;}
#define Enable_M1()         {LATBbits.LATB15 = 1;}
#define Enable_M2()         {LATBbits.LATB13 = 1;}

// Consigne PWM mainimale des moteurs => Seuil de freinage
#define PWM_MIN             80       // <10% de PWM_PERIOD
// Consigne PWM maximale des moteurs => adaptation à la tension d'alimentation
#define PWM_MAX             1800    // PWM_PERIOD * (supply voltage / motor voltage)

/* Anti patinage => limite la vitesse des moteurs par rapport à celle des roues codeuses */
#define ENABLE_ANTI_SLIP
// vitesse minimale pour avancer sans patiner => à ajuster expérimentalement
#define PWM_MIN_SLIP        350
// coefficient pour passer des valeurs des codeuses aux valeurs PWM => à ajuster expérimentalement
#define COEF_ENCODER_MOTOR  1.0362

#define Motor_Left(v)    Setpoint_M2(v)  // GAUCHE = M2
#define Motor_Right(v)   Setpoint_M1(v)  // DROIT = M1
// Initialize speed with immediate update of duty cycle enabled
#define Setup_Motor_Speed() {PWM1CON2bits.IUE = 1; Setpoint_M1(0); Setpoint_M2(0);}
// dead time 40 TCY = 1µs for LMD18200 (Unit A, prescaler 4 Tcy = 100ns at 40MHz : 2µs)
#define Setup_Dead_Time()   {P1DTCON2 = 0; P1DTCON1bits.DTAPS = 2; P1DTCON1bits.DTA = 20;}

/****************************************************************************************
 * Fonctions prototypes
 ****************************************************************************************/
void Motor_Setup(void);
void Setpoint_M1(int32 pwm);
void Setpoint_M2(int32 pwm);
int32 AntiSlip(int32 pwm, t_motion *wheel);
void SetAntiSlip(int pwm);
void ResetAntiSlip();
//void Test_Moteur(void);

#endif	/* MOTOR_H */

