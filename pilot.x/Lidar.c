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
		/* Check for receive errors */
		if (U1STAbits.FERR == 1)
		{
			//continue;
		}

		/* Must clear the overrun error to keep UART receiving */
		if (U1STAbits.OERR == 1)
		{
			U1STAbits.OERR = 0;
			//continue;
		}

		if (U2STAbits.URXDA == 1) // RX buffer has data
		{
			U2_data = U2RXREG;
			if (U2_data == 0x21 && U2_cursor == 0)
			{
				U2_trame[U2_cursor++] = U2_data;
            }
            else if(U2_cursor > 0)
            {
                U2_trame[U2_cursor++] = U2_data;
                
				if (U2_cursor >= PACKET_SIZE)                    
				{
                    if(U2_data == 10)
                    {
                        Analyse_Data_UART2();	
                    }
					U2_cursor = 0;
				}
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
	Stop_UART2();

	Setup_UART2_RX_Pin();
	Setup_UART2_TX_Pin();

	//STSEL: Stop Selection bit
	//1 = 2 Stop bits
	//0 = 1 Stop bit
	U2MODEbits.STSEL = 0;

	//Parity and Data Selection bits
	//11 = 9-bit data, no parity
	//10 = 8-bit data, odd parity
	//01 = 8-bit data, even parity
	//00 = 8-bit data, no parity
	U2MODEbits.PDSEL = 0;	// 8-bit data, no parity
	U2MODEbits.ABAUD = 0;	// Autobaud Disabled
	U2MODEbits.BRGH = 0;	// Low Speed mode
	U2BRG = (FCY / U2_BAUD) / 16 - 1; // baud rate setting  

	U2STAbits.URXISEL = 0;	// Interrupt after one RX character is received;
	IPC7bits.U2RXIP = 4;	//UART2 RX interrupt priority, mid-range
	IPC16bits.U2EIP = 5;	//UART2 error priority set higher

	U2STAbits.URXDA = 0; //empty buffer

	for (int32 i = 0; i < U2RX_SIZE; i++)
	{
		U2_trame[i] = 0;
	}
	U2_cursor = 0;
}

void Start_UART2(void)
{
	IEC4bits.U2EIE = 1;     // enable error interrupt
	IEC1bits.U2RXIE = 1;    // enable RX interrupt
	U2MODEbits.UARTEN = 1;  // Enable UART 2
	U2STAbits.UTXEN = 1;	// enable TX UART (Enable UARTEN bit before enabling the UTXEN bit (UxSTA<10>)
}

void Stop_UART2(void)
{
	U2STAbits.UTXEN = 0;
	U2MODEbits.UARTEN = 0;  // Disable UART 2
	IEC1bits.U2RXIE = 0;
	IEC4bits.U2EIE = 0;
}

boolean State_UART2(void)
{
	return U2MODEbits.UARTEN;
}

/****************************************************************************************
 * Write data to UART2
 ****************************************************************************************/
void Write_UART2(uint16 data)
{
	while (U2STAbits.TRMT == 0);
	if (U2MODEbits.PDSEL == 3)
		U2TXREG = data;
	else
		U2TXREG = data & 0xFF;
#ifdef _VISUAL_STUDIO
	U2STAbits.TRMT = 0;
#endif
}

/****************************************************************************************
 * Analyse data received from UART1
 ****************************************************************************************/
void Analyse_Data_UART2()
{
    t_point p;
    int8_t header = U2_trame[0];
    int8_t num = U2_trame[1];
    p.x = U2_trame[3] << 8 | U2_trame[2];
    p.y = U2_trame[5] << 8 | U2_trame[4];
    int8_t footer = U2_trame[6];
    
	Add_Obstacle_Cart(num, p.x, p.y);
}

void Afficher_UART2(uint8 ligne)
{
	LCD_Line(ligne);
	//LCD_Text("O", 1);
	LCD_Value(obstacle[0].p.x, 4, 0);
	LCD_Text(",", 1);
	LCD_Value(obstacle[0].p.y, 4, 0);
	LCD_Text(";", 1);
	LCD_Value(obstacle[1].p.x, 4, 0);
	LCD_Text(",", 1);
	LCD_Value(obstacle[1].p.y, 4, 0);
}

void Update_UART2(void)
{
	t_point p = robot.mm;

	//Starting char : '!'
	Write_UART2(0x21);

	//Robot X    
	Write_UART2(p.x % 256);
	Write_UART2(p.x >> 8);

	//Robot Y
	Write_UART2(p.y % 256);
	Write_UART2(p.y >> 8);

	//Robot Angle * 100
	int32 angle = (int32)(robot.deg * 100);
	Write_UART2(angle % 256);
	Write_UART2(angle >> 8);

	//Ending char : 'LF'
	Write_UART2(10);
}
