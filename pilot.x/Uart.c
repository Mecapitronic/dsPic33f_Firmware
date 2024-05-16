/****************************************************************************************
 * Fichier     : Uart.c
 * Description : Gestion de l'UART 1
 * Auteur      : Geoffroy ARENOU et Christopher BUREL
 * Version     : 2016.01.11
 * Compilation : MPLAB X IDE (v3.45), compiler XC16 (v1.26) Lite
 ****************************************************************************************/

 /****************************************************************************************
 * Includes
 ****************************************************************************************/
#include "Uart.h"

 /****************************************************************************************
 * Variables
 ****************************************************************************************/
 // UART1
volatile char U1_trame[U1RX_SIZE];
volatile int32 U1_cursor;
volatile char U1_data;
t_uartCMD uartCMD;
boolean send_ack = FALSE;
uint8 send_ack_cmd = 0;

/****************************************************************************************
 * Interrupt UART1
 ****************************************************************************************/
void __attribute__((__interrupt__, no_auto_psv)) _U1RXInterrupt(void)
{
	if (IEC0bits.U1RXIE)
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

		if (U1STAbits.URXDA == 1) // RX buffer has data
		{
			U1_data = U1RXREG;
			if (U1_data == 10)
			{
				if (U1_cursor > 0 && U1_trame[U1_cursor - 1] != ';')
					U1_trame[U1_cursor++] = ';';
				Analyse_Data_UART1();
				for (uint8 i = 0; i < U1_cursor; i++)
				{
					U1_trame[i] = 0;
				}
				U1_cursor = 0;
			}
			else
				U1_trame[U1_cursor++] = U1_data;
		}
	}
	IFS0bits.U1RXIF = 0;  // clear interrupt flag
}

/****************************************************************************************
 * Interrupt UART1 Error
 ****************************************************************************************/
void __attribute__((__interrupt__, no_auto_psv)) _U1ErrInterrupt(void)
{
	U1STAbits.PERR = 0;
	U1STAbits.FERR = 0;
	U1STAbits.OERR = 0;
	IFS4bits.U1EIF = 0; // clear interrupt flag
}

/****************************************************************************************
 * Initialize UART1
 ****************************************************************************************/
void Initialize_UART1(void)
{
	Stop_UART1();

	Setup_UART1_RX_Pin();
	Setup_UART1_TX_Pin();

	//STSEL: Stop Selection bit
	//1 = 2 Stop bits
	//0 = 1 Stop bit
	U1MODEbits.STSEL = 0;

	//Parity and Data Selection bits
	//11 = 9-bit data, no parity
	//10 = 8-bit data, odd parity
	//01 = 8-bit data, even parity
	//00 = 8-bit data, no parity
	U1MODEbits.PDSEL = 0;	// 8-bit data, no parity
	U1MODEbits.ABAUD = 0;	// Autobaud Disabled
	U1MODEbits.BRGH = 0;	// Low Speed mode
	U1BRG = (FCY / U1_BAUD) / 16 - 1; // baud rate setting

	U1STAbits.URXISEL = 0;	//Interrupt after one RX character is received;
	IPC2bits.U1RXIP = 4;	//UART1 RX interrupt priority, mid-range
	IPC16bits.U1EIP = 5;	//UART1 error priority set higher

	U1STAbits.URXDA = 0; //empty buffer

	for (int32 i = 0; i < U1RX_SIZE; i++)
	{
		U1_trame[i] = 0;
	}
	U1_cursor = 0;

	uartCMD.cmd = '0';
	uartCMD.actionID = 0;
	uartCMD.vertexID = 0;
	uartCMD.point.x = 0;
	uartCMD.point.y = 0;
}

void Start_UART1(void)
{
	IEC4bits.U1EIE = 1;     // enable error interrupt
	IEC0bits.U1RXIE = 1;    // enable RX interrupt
	U1MODEbits.UARTEN = 1;  // Enable UART 1
	U1STAbits.UTXEN = 1;	// enable TX UART (Enable UARTEN bit before enabling the UTXEN bit (UxSTA<10>)
}

void Stop_UART1(void)
{
	U1STAbits.UTXEN = 0;
	U1MODEbits.UARTEN = 0;  // Disable UART 1
	IEC0bits.U1RXIE = 0;
	IEC4bits.U1EIE = 0;
}

boolean State_UART1(void)
{
	return U1MODEbits.UARTEN;
}


/****************************************************************************************
 * Write data to UART1
 ****************************************************************************************/
void Write_UART1(uint16 data)
{
	while (U1STAbits.TRMT == 0);
	if (U1MODEbits.PDSEL == 3)
		U1TXREG = data;
	else
		U1TXREG = data & 0xFF;
#ifdef _VISUAL_STUDIO
	U1STAbits.TRMT = 0;
#endif
}

/****************************************************************************************
 * Write string data to UART1
 ****************************************************************************************/
void Write_String_UART1(const char* s)
{
	while (*s)
		Write_UART1(*s++);
}

/****************************************************************************************
 * Write float data to UART1
 ****************************************************************************************/
void Write_Float_UART1(float number, int32 afterpoint)
{
	char res[32];
	for (int32 i = 0; i < 32; i++)
	{
		res[i] = 0;
	}

	ftoa(number, res, afterpoint);
	if (res[0] == '\0')
		res[0] = '0';
	Write_String_UART1(res);
}

/****************************************************************************************
 * Write integer data to UART1
 ****************************************************************************************/
void Write_Int_UART1(int32 number)
{
	Write_Float_UART1((float)(number), 0);
}

/****************************************************************************************
 * Update UART1
 ****************************************************************************************/
void Update_UART1(void)
{
	// Robot Position
	Write_Int_UART1(robot.mm.x);
	Write_UART1(';');
	Write_Int_UART1(robot.mm.y);
	Write_UART1(';');
	Write_Float_UART1(RAD_TO_DEG(robot.rad), 0);
	Write_UART1(';');
	/*
	Write_Int_UART1(move_lin.command.position);
	Write_UART1(';');
	Write_Int_UART1(move_lin.command.velocity);
	Write_UART1(';');
	Write_Int_UART1(move_lin.command.acceleration);
	Write_UART1(';');
	Write_Int_UART1(robot.lin.position);
	Write_UART1(';');
	Write_Int_UART1(robot.lin.velocity);
	Write_UART1(';');
	Write_Int_UART1(robot.lin.acceleration);
	*/
	
	Write_Int_UART1(Get_Obstacle(0).p.x);
	Write_UART1(',');
	Write_Int_UART1(Get_Obstacle(0).p.y);
	Write_UART1(',');
	Write_Int_UART1(Get_Obstacle(0).r);
	Write_UART1(',');
	Write_Int_UART1(Get_Obstacle(1).p.x);
	Write_UART1(',');
	Write_Int_UART1(Get_Obstacle(1).p.y);
	Write_UART1(',');
	Write_Int_UART1(Get_Obstacle(1).r);
	Write_UART1(',');
	Write_Int_UART1(Get_Obstacle(2).p.x);
	Write_UART1(',');
	Write_Int_UART1(Get_Obstacle(2).p.y);
	Write_UART1(',');
	Write_Int_UART1(Get_Obstacle(2).r);
	
	/*
	// Robot Start/End path
	Write_Int_UART1(vertex[0].point.x);
	Write_UART1(',');
	Write_Int_UART1(vertex[0].point.y);
	Write_UART1(';');
	Write_Int_UART1(vertex[Get_End_Vertex()].point.x);
	Write_UART1(',');
	Write_Int_UART1(vertex[Get_End_Vertex()].point.y);
	Write_UART1(';');

	// Robot Lidar
	Write_Int_UART1(Get_Distance_LIDAR(0));
	for (int32 i = 1; i < 10; i++)
	{
		Write_UART1(',');
		Write_Int_UART1(Get_Distance_LIDAR(i));
	}

	//write the vertex 0 te be sure path point show at least one point
	Write_Int_UART1(vertex[0].point.x);
	Write_UART1(',');
	Write_Int_UART1(vertex[0].point.y);
	int32 pos = 0;
	int32 x = 0;
	int32 y = 0;
	for (int32 i = 0; i < listlength; i++)
	{
		if (solution[i] == INVALID_VERTEX_ID)
			break;
		pos = solution[i];
		Write_UART1(',');
		x = vertex[pos].point.x;
		Write_Int_UART1(x);
		Write_UART1(',');
		y = vertex[pos].point.y;
		Write_Int_UART1(y);
	}
	*/
	Write_UART1(10); //10 = Line feed ; 13 = Carriage return

}

void Send_UART1_ACK(uint8 ack)
{
	send_ack = TRUE;
	send_ack_cmd = ack;
}

void Update_UART1_ACK(uint8 ack)
{
	Write_String_UART1("ACK;");
	Write_Int_UART1(ack);
	Write_UART1(10);
}

/****************************************************************************************
 * Analyse data received from UART1
 ****************************************************************************************/
void Analyse_Data_UART1()
{
	int32 convert[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }; int32 k = 0;
	char tmp[6] = { 0, 0, 0, 0, 0, 0 }; int32 j = 0;
	int32 m = 0;

	for (uint8 i = 1; i < U1_cursor; i++)
	{
		if (U1_trame[i] != ';')
		{
			tmp[j++] = U1_trame[i];
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

	switch (U1_trame[0])
	{
	case 'A':
		if (uartCMD.cmd == '0')
		{
			uartCMD.actionID = convert[0];
			uartCMD.cmd = 'A';
		}
		break;
	case 'V':
		if (uartCMD.cmd == '0')
		{
			uartCMD.vertexID = convert[0];
			uartCMD.cmd = 'V';
		}
		break;
	case 'P':
		if (uartCMD.cmd == '0')
		{
			uartCMD.point.x = convert[0];
			uartCMD.point.y = convert[1];
			uartCMD.angle = convert[2];
			uartCMD.cmd = 'P';
		}
		break;
	case 'M':
		if (uartCMD.cmd == '0')
		{
			uartCMD.point.x = convert[0];
			uartCMD.point.y = convert[1];
			uartCMD.cmd = 'M';
		}
		break;
	case 'T':
		if (uartCMD.cmd == '0')
		{
			uartCMD.distance = convert[0];
			uartCMD.cmd = 'T';
		}
		break;
	case 'R':
		if (uartCMD.cmd == '0')
		{
			uartCMD.angle = convert[0];
			uartCMD.cmd = 'R';
		}
		break;
	default:
		break;
	}
}



/****************************************************************************************
 * Reverse a string 'str' of length 'len'
 ****************************************************************************************/
void reverse(char* str, int32 len)
{
	int32 i = 0, j = len - 1, temp;
	while (i < j)
	{
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
		i++; j--;
	}
}

/****************************************************************************************
 * Converts a given integer x to string str[].  d is the number
 * of digits required in output. If d is more than the number
 * of digits in x, then 0s are added at the beginning.
 ****************************************************************************************/
int32 intToStr(int32 x, char str[], int32 d)
{
	int32 sign;
	if (x != 0)
		sign = x / ABS(x);
	else
		sign = 1;
	x = ABS(x);

	int32 i = 0;
	while (x)
	{
		str[i++] = (x % 10) + '0';
		x = x / 10;
	}

	// If number of digits required is more, then
	// add 0s at the beginning
	while (i < d)
		str[i++] = '0';

	if (sign == -1)
		str[i++] = '-';

	reverse(str, i);
	str[i] = '\0';
	return i;
}

/****************************************************************************************
 * Converts a floating point number to string.
 ****************************************************************************************/
void ftoa(float n, char* res, int32 afterpoint)
{
	// Extract integer part
	int32 ipart = (int32)n;

	// Extract floating part
	float fpart = ABS(n - (float)ipart);

	// convert integer part to string
	int32 i = intToStr(ipart, res, 0);

	// check for display option after point
	if (afterpoint != 0)
	{
		res[i] = ',';  // add dot

		// Get the value of fraction part upto given no.
		// of points after dot. The third parameter is needed
		// to handle cases like 233.007
		fpart = fpart * pow(10, afterpoint);

		intToStr((int32)fpart, res + i + 1, afterpoint);
	}
}


void Afficher_UART(uint8 ligne)
{
	LCD_Line(ligne);
	int32 i;
	for (i = 0; i < 20; i++)
	{
		if (U1_trame[i] != '\0')
			LCD_Char(U1_trame[i]);
		else
			LCD_Char(' ');
	}
}
