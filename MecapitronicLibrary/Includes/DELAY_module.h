/****************************************************************************************
* Fichier     : DELAY_module.h
* Description : Routines de délais avec ou sans timer (µs, ms et s)
* Auteur      : Christopher BUREL
* Version     : 2015.03.08
* Compilation : MPLAB X IDE (v2.35), compiler XC16 (v1.24) Lite
****************************************************************************************/

#ifndef DELAY_MODULE_H
#define DELAY_MODULE_H

/****************************************************************************************
* Includes
****************************************************************************************/
#include "LIBRARY_module.h"

/****************************************************************************************
* Macros Delays Fonctions (without timer)
****************************************************************************************/
//#define DELAY_USE_TIMER

#ifndef DELAY_USE_TIMER
// Calibration made with stopwatch for FCY = 40 MIPS (MPLABXv2.35, XC16v1.24 lite)
	#if defined __MPLAB_SIMULATION__
		#define Delay_Us(t) do{}while(0)
		#define Delay_Ms(t) do{}while(0)
		#define Delay_S(t) do{}while(0)
	#elif defined _VISUAL_STUDIO
		#define Delay_Us(t) do{uint32 i = (uint32)t*500; while(--i);}while(0)
		#define Delay_Ms(t) do{uint32 i = (uint32)t*500000; while(--i);}while(0)
		#define Delay_S(t) do{uint32 i = (uint32)t*500000000; while(--i);}while(0)	
	#else
		#define Delay_Us(t) do{uint32 i = (uint32)t*3.333; while(--i);}while(0)
		#define Delay_Ms(t) do{uint32 i = (uint32)t*3333.333; while(--i);}while(0)
		#define Delay_S(t) do{uint32 i = (uint32)t*3333333.333; while(--i);}while(0)
	#endif
#endif

/****************************************************************************************
* Configuration
****************************************************************************************/
#ifdef DELAY_USE_TIMER
// Configuration Timer
#define DELAY_US_PERIOD         39  // = 40-1 (FCY[MHz]-1)

#define DELAY_Timer_VALUE       TMR1
#define DELAY_Timer_PERIOD      PR1
#define DELAY_Timer_CLOCK       T1CONbits.TCS
#define DELAY_Timer_PRESCALE    T1CONbits.TCKPS
#define DELAY_Timer_FLAG        IFS0bits.T1IF
#define DELAY_Timer(x)          {T1CONbits.TON = x;}

#endif
/****************************************************************************************
* Prototypes Fonctions
****************************************************************************************/
#ifdef DELAY_USE_TIMER
// Delay in microsecond
void Delay_Us(uint32 count);
// Delay in millisecond
void Delay_Ms(uint32 count);
// Delay in second
void Delay_S(uint32 count);
#endif

// Test function for time calibration
//void Delay_Test(void);

#endif /* DELAY_MODULE_H */

