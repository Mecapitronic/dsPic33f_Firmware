/****************************************************************************************
 * Fichier     : Timer.h
 * Description : Gestion des timers et interruptions
 * Auteur      : Christopher BUREL
 * Version     : 2016.11.26
 * Compilation : MPLAB X IDE (v3.45), compiler XC16 (v1.26) Lite
 ****************************************************************************************/

#ifndef TIMER_H
#define	TIMER_H

/****************************************************************************************
 * Includes
 ****************************************************************************************/
#include "PILOT_main.h"

/****************************************************************************************
 * Variables Globales
 ****************************************************************************************/
extern uint32 current_time;

/****************************************************************************************
 * Timer Primaire
 ****************************************************************************************/
#define TIMER_PRIMAIRE_INT          _T2Interrupt
#define TIMER_PRIMAIRE_INT_FLAG     IFS0bits.T2IF
#define TIMER_PRIMAIRE_INT_ENABLE   IEC0bits.T2IE
// Enable/Disable interrupt and turn on the timer
#define Set_Timer_Primaire(x)       {IEC0bits.T2IE = (x); T2CONbits.TON = (x);}
// Timer2: internal clock (Fosc/2), 16-bit mode, 1:64 prescaler, period, priority 4
// period 625 => 1ms => 1kHz (at FCY = 40MHz)
// period 3125 => 5ms => 200Hz (at FCY = 40MHz)
#define Setup_Timer_Primaire()      {T2CONbits.TCS = 0; \
                                    T2CONbits.T32 = 0; \
                                    T2CONbits.TCKPS = 2; \
                                    PR2 = 3125; \
                                    IPC1bits.T2IP = 4;} // Priority

#define PERIOD_MS   5         // Sampling period (in millisecond)
#define PERIOD      0.005     // Sampling period (in second)
#define PERIOD_2    0.000025  // Square of sampling period (in second^2)


/****************************************************************************************
 * Timer Secondaire
 ****************************************************************************************/
#define TIMER_SECONDAIRE_INT        _T4Interrupt
#define TIMER_SECONDAIRE_INT_FLAG   IFS1bits.T4IF
#define TIMER_SECONDAIRE_INT_ENABLE IEC1bits.T4IE
// Enable/Disable interrupt and turn on the timer
#define Set_Timer_Secondaire(x)     {IEC1bits.T4IE = (x); T4CONbits.TON = (x);}
// Timer4: internal clock (Fosc/2), 16-bit mode, 1:64 prescaler, period, priority 3
// period 625 => 1ms => 1kHz (at FCY = 40MHz)
// period 3125 => 5ms => 200Hz (at FCY = 40MHz)
// period 31250 => 50ms => 20Hz (at FCY = 40MHz)
// period 62500 => 100ms => 10Hz (at FCY = 40MHz)
#define Setup_Timer_Secondaire()    {T4CONbits.TCS = 0; \
                                    T4CONbits.T32 = 0; \
                                    T4CONbits.TCKPS = 2; \
                                    PR4 = 31250; \
                                    IPC6bits.T4IP = 3;} // Priority

#ifdef _USRDLL
void Interruption_PRIMAIRE(void);
void Interruption_SECONDAIRE(void);
#endif
void print_uart(void);

#endif	/* TIMER_H */

