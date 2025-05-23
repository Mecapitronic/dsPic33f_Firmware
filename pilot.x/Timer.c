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
uint32 current_time = 0;  // temps en milliseconde depuis le d�marrage du timer primaire

/****************************************************************************************
 * Timer Primaire : 5 ms (200 Hz)
 ****************************************************************************************/
void __attribute__((__interrupt__, no_auto_psv)) TIMER_PRIMAIRE_INT(void)
{
	if (TIMER_PRIMAIRE_INT_ENABLE) // 2017.02.02 stopwatch simulator (odometry + asserv) = 275�s (11000 cycles)
	{
		current_time += PERIOD_MS; // main time counter

		//if (START_PILOT) // s�curit� si relais d�faillant
		//{
			Update_Odometry();  // Location
			Update_Asserv();    // Motor control

			Update_Start_Vertex();  // start vertex for graph (robot position)
		//}
		//else
		//{
		//	Motor_Right(0);
		//	Motor_Left(0);
		//}

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
		Update_Sharp();
		//Update_Obstacles();
		if (State_UART1())
		{
			if (send_ack)
			{
				Update_UART1_ACK(send_ack_cmd);
				send_ack_cmd = CMD_FREE;
				send_ack = FALSE;
			}
			Update_UART1();
		}
		if (State_UART2())
		{
			Update_UART2();
		}

		TIMER_SECONDAIRE_INT_FLAG = OFF; // Clear Timer Interrupt Flag
	}
}


