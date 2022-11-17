/****************************************************************************************
 * Fichier     : Timer.h
 * Description : Gestion des timers
 * Auteur      : Christopher BUREL
 * Version     : 2015.03.24
 * Compilation : MPLAB X IDE (v2.35), compiler XC16 (v1.24) Lite
 ****************************************************************************************/

#ifndef TIMER_H
#define	TIMER_H

/****************************************************************************************
 * Includes
 ****************************************************************************************/
#include "COPILOT main.h"

/****************************************************************************************
 * Variables Globales
 ****************************************************************************************/
extern uint32 current_time; // temps en milliseconde depuis le démarrage du timer primaire

/****************************************************************************************
 * Timer Primaire : 20 ms (50 Hz)
 ****************************************************************************************/
#define TIMER_PRIMAIRE_INT          _T2Interrupt
#define TIMER_PRIMAIRE_INT_FLAG     IFS0bits.T2IF
// Enable/Disable interrupt and turn on the timer
#define Set_Timer_Primaire(x)       {IEC0bits.T2IE = x; T2CONbits.TON = x;}
// Timer2: internal clock (Fosc/2), 16-bit mode, 1:64 prescaler, period, priority 4
// period 12500 => 20ms => 50Hz (at FCY = 40MHz)
#define Setup_Timer_Primaire()      {T2CONbits.TCS = 0; \
                                    T2CONbits.T32 = 0; \
                                    T2CONbits.TCKPS = 2; \
                                    PR2 = 12500; \
                                    IPC1bits.T2IP = 4;} // Priority

#define TE  20

/****************************************************************************************
 * Timer Secondaire : 500 ms (2 Hz)
 ****************************************************************************************/
#define TIMER_SECONDAIRE_INT        _T4Interrupt
#define TIMER_SECONDAIRE_INT_FLAG   IFS1bits.T4IF
// Enable/Disable interrupt and turn on the timer
#define Set_Timer_Secondaire(x)     {IEC1bits.T4IE = (x); T4CONbits.TON = (x);}
// Timer4: internal clock (Fosc/2), 16-bit mode, 1:8 prescaler, period, priority 3
// period 62500 => 400ms => 2.5Hz (at FCY = 40MHz)
#define Setup_Timer_Secondaire()    {T4CONbits.TCS = 0; \
                                    T4CONbits.T32 = 0; \
                                    T4CONbits.TCKPS = 3; \
                                    PR4 = 62500; \
                                    IPC6bits.T4IP = 3;} // Priority

#endif	/* TIMER_H */

