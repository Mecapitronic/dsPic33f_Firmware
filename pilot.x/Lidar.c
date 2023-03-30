/****************************************************************************************
 * Fichier     : Lidar.c
 * Description : Gestion du LIDAR (UART 2)
 * Auteur      : Christopher BUREL
 * Version     : 2017.02.02
 * Compilation : MPLAB X IDE (v3.45), compiler XC16 (v1.26) Lite
 ****************************************************************************************/

 /****************************************************************************************
  * Includes
  ****************************************************************************************/
#include "Lidar.h"

  /****************************************************************************************
   * Variables
   ****************************************************************************************/
   // UART2
volatile char U2_trame[U2RX_SIZE + 1];
volatile uint16 U2_cursor;
volatile char U2_data = 0;

/****************************************************************************************
 * Interrupt UART2 RX
 ****************************************************************************************/
void __attribute__((__interrupt__, no_auto_psv)) _U2RXInterrupt(void)
{
	if (IEC1bits.U2RXIE)
	{
		if (U2STAbits.URXDA == 1) // RX buffer has data
		{
			// 01;3000;3000\n
			U2_data = U2RXREG;

			if (U2_cursor < U2RX_SIZE)
			{
				U2_trame[U2_cursor++] = U2_data;

				if (U2_data == 10 && U2_cursor == U2RX_SIZE)
				{
					Analyse_Data_UART2();
					for (uint16 i = 0; i < U2_cursor; i++)
					{
						U2_trame[i] = 0;
					}
					U2_cursor = 0;
				}
			}
			else
			{
				U2_cursor = 0;
			}
		}
		IFS1bits.U2RXIF = 0; // clear interrupt flag
	}
}

/****************************************************************************************
 * Interrupt UART2 Error
 ****************************************************************************************/
void __attribute__((__interrupt__, no_auto_psv)) _U2ErrInterrupt(void)
{
	U2_cursor = 0;
	U2STAbits.PERR = 0;
	U2STAbits.FERR = 0;
	U2STAbits.OERR = 0;
	IFS4bits.U2EIF = 0; // clear interrupt flag
}

/****************************************************************************************
 * Initialize UART2 for LIDAR
 ****************************************************************************************/
void Initialize_UART2(void)
{
	Setup_UART2_RX_Pin();
	Setup_UART2_TX_Pin();

	U2MODEbits.STSEL = 0; // 1-stop bit
	U2MODEbits.PDSEL = 0; // 8-bit data, no parity
	U2MODEbits.ABAUD = 0; // Autobaud Disabled
	U2MODEbits.BRGH = 0; // Low Speed mode
	U2BRG = (U2_FCY / U2_BAUD) / 16 - 1; // baud rate setting  

	U2STAbits.URXISEL = 0; // Interrupt after one RX character is received;
	IPC7bits.U2RXIP = 4; //UART2 RX interrupt priority, mid-range
	IPC16bits.U2EIP = 5; //UART2 error priority set higher
	IEC4bits.U2EIE = 1; // enable error interrupt
	IEC1bits.U2RXIE = 1; // enable RX interrupt

	U2MODEbits.UARTEN = 1; // Enable UART
	//U2STAbits.UTXEN = 1; 
}

/****************************************************************************************
 * Analyse data received from UART1
 ****************************************************************************************/
void Analyse_Data_UART2()
{
	int32 convert[3] = { 0, 0, 0 }; int32 k = 0;
	char tmp[6] = { 0, 0, 0, 0, 0, 0 }; int32 j = 0;
	int32 m = 0;

	for (uint8 i = 1; i < U2_cursor; i++)
	{
		if (U2_trame[i] != ';')
		{
			tmp[j++] = U2_trame[i];
			m++;
		}
		else
		{
			convert[k++] = atoi(tmp);
			int32 l;
			for (l = 0; l < m; l++)
			{
				tmp[l] = 0;
			}
			m = 0;
			j = 0;
		}
	}

	int num = convert[0];
	int x = convert[1];
	int y = convert[2];


}

