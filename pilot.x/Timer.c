/****************************************************************************************
 * Fichier     : Timer.c
 * Description : Gestion des timers et interruptions
 * Auteur      : Christopher BUREL
 * Version     : 2016.11.26
 * Compilation : MPLAB X IDE (v3.45), compiler XC16 (v1.26) Lite
 ****************************************************************************************/

/****************************************************************************************
 * Includes
 ****************************************************************************************/
#include "Timer.h"

/****************************************************************************************
 * Variables
 ****************************************************************************************/
uint32 current_time = 0;  // temps en milliseconde depuis le démarrage du timer primaire

/****************************************************************************************
 * Timer Primaire : 5 ms (200 Hz)
 ****************************************************************************************/
void __attribute__((__interrupt__, no_auto_psv)) TIMER_PRIMAIRE_INT(void)
{
	if (TIMER_PRIMAIRE_INT_ENABLE) // 2017.02.02 stopwatch simulator (odometry + asserv) = 275µs (11000 cycles)
	{
  current_time += PERIOD_MS; // main time counter

  if(START_PILOT) // sécurité si relais défaillant
  {
		Update_Odometry();  // Location
		Update_Asserv();    // Motor control

		Update_Start_Vertex();  // start vertex for graph (robot position)
  }
  else
  {
    Motor_Right(0);
    Motor_Left(0);
  }
		
  TIMER_PRIMAIRE_INT_FLAG = OFF; // Clear Timer Interrupt Flag
	}
}

/****************************************************************************************
 * Timer Secondaire : 50 ms (20 Hz)
 ****************************************************************************************/
void __attribute__((__interrupt__, no_auto_psv)) TIMER_SECONDAIRE_INT(void)
{
	if (TIMER_SECONDAIRE_INT_ENABLE)
	{

#ifdef UART1_ENABLE
	Update_UART1();
#endif

#ifdef SERIAL_PRINT
  print_navigation();
#endif

#ifdef _VISUAL_STUDIO
  Display();
#endif

  TIMER_SECONDAIRE_INT_FLAG = OFF; // Clear Timer Interrupt Flag
	}
}


