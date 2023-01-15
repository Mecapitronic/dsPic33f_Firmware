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
volatile boolean U1_start_trame;
volatile int32 U1_byte_to_read;
volatile char U1_data;

/****************************************************************************************
 * Interrupt UART1
 ****************************************************************************************/
#ifdef _USRDLL
#define Interrupt_UART1  _U1RXInterrupt
#else
#define Interrupt_UART1  __attribute__((__interrupt__, no_auto_psv)) _U1RXInterrupt
#endif
void Interrupt_UART1(void)
{
	if (IEC0bits.U1RXIE)
	{
		U1_data = '0';
		while (U1_data != '\n')
		{
			while (U1STAbits.URXDA == 0);
			U1_data = U1RXREG;
			Get_Data_UART1(U1_data);

#ifdef _USRDLL
			U1STAbits.URXDA = 0;
#endif
		}
		IFS0bits.U1RXIF = 0;
	}
}

/****************************************************************************************
 * Initialize UART1
 ****************************************************************************************/
void Initialize_UART1(void)
{
	Setup_UART1_RX_Pin();
	Setup_UART1_TX_Pin();

	U1MODEbits.STSEL = 0; // 1-stop bit
	U1MODEbits.PDSEL = 2; //U1MODEbits.PDSEL = 10; // Odd Parity, 8-data bits
	U1MODEbits.ABAUD = 0; // Autobaud Disabled
	U1MODEbits.BRGH = 0; // Low Speed mode

	U1BRG = (FCY / U1_BAUD) / 16 - 1; // baud rate setting

	U1STAbits.URXISEL = 0; //Interrupt after one RX character is received;

	IEC0bits.U1RXIE = 1;
	U1STA &= 0xfffc;
	U1MODEbits.UARTEN = 1; // Enable UART
	U1STAbits.UTXEN = 1;

	for (int32 i = 0; i < U1RX_SIZE; i++)
	{
		U1_trame[i] = 0;
	}
	U1_cursor = 0;
	U1_start_trame = FALSE;
	U1_byte_to_read = 0;

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
#ifdef _USRDLL
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

	Write_UART1(10); //10 = Line feed ; 13 = Carriage return

}

/****************************************************************************************
 * Get data received from UART1
 ****************************************************************************************/
void Get_Data_UART1(char str)
{
	//First Char :
	// L = Lidar	-90°{ d:]20, 1500[, ... } +90°
	// A = Action		{ ID }
	// M = Move			{ X, Y }
	// N = Navigation	{ X, Y }

	//Second and third Char :
	// xx = number of bytes to read after the fourth char

	// Fourth Char : ';'

	// Every number is represented with 6 bytes and separated by a semi-colon ';'
	//Exemple : A01;8    M11;123456;123456     L06;1234

	if (!U1_start_trame && (str == 'L' || str == 'A' || str == 'M' || str == 'N'))
	{
		U1_start_trame = TRUE;
		U1_cursor = 0;
		for (int32 i = 0; i < U1RX_SIZE; i++)
		{
			U1_trame[i] = 0;
		}
		U1_trame[U1_cursor] = str;
		U1_cursor++;
	}
	else if (str == 10)
	{

	}
	else
	{
		if (U1_start_trame == TRUE)
		{
			U1_trame[U1_cursor] = str;
			U1_cursor++;
			if (U1_cursor == 3)
			{
				char nbr_byte[3] = { 0, 0, 0 };
				nbr_byte[0] = U1_trame[1];
				nbr_byte[1] = U1_trame[2];
				U1_byte_to_read = atoi(nbr_byte);
			}
			if (U1_cursor == U1_byte_to_read + 4)
			{
				if (U1_trame[U1_cursor - 1] != ';')
					U1_trame[U1_cursor] = ';';
				Analyse_Data_UART1();
				U1_start_trame = FALSE;
				U1_cursor = 0;
				U1_byte_to_read = 0;
			}
		}
	}
}

/****************************************************************************************
 * Analyse data received from UART1
 ****************************************************************************************/
void Analyse_Data_UART1()
{
	int32 convert[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }; int32 k = 0;
	char tmp[6] = { 0, 0, 0, 0, 0, 0 }; int32 j = 0;
	int32 i;
	int32 m;

	for (i = 4; i <= U1_byte_to_read + 4; i++)
	{
		m = 0;
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
			j = 0;
		}
	}

	switch (U1_trame[0])
	{
	case 'L':
		for (i = 0; i < 10; i++)
		{
			Set_LIDAR(i, convert[i]);
		}
		break;
	case 'A':
	{
		int32 id = convert[0];
	}
	break;
	case 'M':
	{
		int32 x = convert[0];
		int32 y = convert[1];
	}
	break;
	case 'N':
	{
		int32 x = convert[0];
		int32 y = convert[1];
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
