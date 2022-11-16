/****************************************************************************************
* Fichier     : DELAY module.c
* Description : Routines de délais avec ou sans timer (µs, ms et s)
* Auteur      : Christopher BUREL
* Version     : 2015.03.08
* Compilation : MPLAB X IDE (v2.35), compiler XC16 (v1.24) Lite
****************************************************************************************/

/****************************************************************************************
* Includes
****************************************************************************************/
#include "../Includes/DELAY module.h"

/****************************************************************************************
* Functions
****************************************************************************************/
#ifdef DELAY_USE_TIMER

// Delay in microsecond
void Delay_Us(uint32 count)
{
  DELAY_Timer(OFF);                           // Disable timer
  DELAY_Timer_CLOCK    = 0;                   // Internal clock is FCY
  DELAY_Timer_PRESCALE = 0;                   // Prescale 1:1
  DELAY_Timer_PERIOD   = DELAY_US_PERIOD;     // 1µs period (FCY 40MHz - 1)
  DELAY_Timer_VALUE = 0;                      // Reset timer value
  DELAY_Timer_FLAG = OFF;                     // Reset timer flag
  DELAY_Timer(ON);                            // Start timer
  while(--count)
  {
    while(!DELAY_Timer_FLAG);                 // Wait 1µs
    DELAY_Timer_FLAG = OFF;                   // Reset flag
  }
  DELAY_Timer(OFF);                           // Stop timer
  Nop();                                      // Delay adjustement
  Nop();
  Nop();
}

// Delay in millisecond 
void Delay_Ms(uint32 count)
{
  Delay_Us(count*1000);
}

// Delay in second 
void Delay_S(uint32 count)
{
  Delay_Ms(count*1000);
}

#endif

/*
// Test function for time calibration
void Delay_Test(void)
{
  while(FOREVER)
  {
    Nop();
    Delay_Us(1);
    Nop();
    Delay_Us(10);
    Nop();
    Delay_Us(100);
    Nop();
    Delay_Us(1000);
    Nop();
    Delay_Ms(1);
    Nop();
    Delay_Ms(10);
    Nop();
    Delay_Ms(100);
    Nop();
    Delay_Ms(1000);
    Nop();
    Delay_S(1);
    Nop();
  }
}
*/

