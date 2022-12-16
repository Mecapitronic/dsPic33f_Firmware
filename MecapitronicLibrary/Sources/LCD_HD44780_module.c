/****************************************************************************************
* Fichier     : LCD_HD44780_module.c
* Description : Librairie afficheur LCD HD44780 (interface 4 bits, écriture uniquement)
* Auteur      : Christopher BUREL
* Version     : 2015.03.08
* Compilation : MPLAB X IDE (v2.35), compiler XC16 (v1.24) Lite
****************************************************************************************/

/****************************************************************************************
* Includes
****************************************************************************************/
#include "../Includes/LCD_HD44780_module.h"

/****************************************************************************************
* Variables
****************************************************************************************/
// LCD_NB_CHARS - current cursor position
uint8 remainingChar = LCD_NB_CHARS;    
uint8 currentLine = 0;
char LCDText[4][20];

/****************************************************************************************
* Static functions prototypes
****************************************************************************************/
static void Send_Nibble(char nibble);

/****************************************************************************************
* Function to send 4 bits to LCD
****************************************************************************************/
static void Send_Nibble(char nibble)
{
    // Set data pins
    LCD_D4_PIN = (nibble & 0x01);
    LCD_D5_PIN = (nibble & 0x02) >> 1;
    LCD_D6_PIN = (nibble & 0x04) >> 2;
    LCD_D7_PIN = (nibble & 0x08) >> 3;
    // Toggle LCD_E > 1us to valid
    LCD_E_PIN = ON;
    LCD_Delay_Us(1);
    LCD_E_PIN = OFF;
}

/****************************************************************************************
* Function to configure pins and setup LCD
****************************************************************************************/
void LCD_Setup(void)
{
    // Wait for more than 15 msec
    LCD_Delay_Ms(15);
    // Init pins to low state
    LCD_RS_PIN = 0;
    LCD_E_PIN  = 0;
    LCD_D4_PIN = 0;
    LCD_D5_PIN = 0;
    LCD_D6_PIN = 0;
    LCD_D7_PIN = 0;
    // Configure tris pins as output
    LCD_RS_TRIS = 0;
    LCD_E_TRIS  = 0;
    LCD_D4_TRIS = 0;
    LCD_D5_TRIS = 0;
    LCD_D6_TRIS = 0;
    LCD_D7_TRIS = 0;

    // Setup LCD for 4 bits mode
    Send_Nibble(0x03);
    LCD_Delay_Ms(5);        // Wait for more than 4.1 msec
    Send_Nibble(0x03);
    LCD_Delay_Us(100);      // Wait for more than 100 usec
    Send_Nibble(0x03);
    Send_Nibble(0x02);      // Set 4-bit interface
    LCD_Delay_Us(40);       // Wait for more than 40 usec

    LCD_Command(LINE_SETTING & MATRIX_SETTING);             // Function set
    LCD_Command(DISPLAY_ON & CURSOR_OFF & BLINK_OFF);       // Display control
    LCD_Command(CLEAR_DISPLAY);                             // Clear display
    LCD_Command(INCREMENT_MODE & SHIFT_ALL_OFF);            // Entry mode
    LCD_Command(INIT_CURSOR);                               // Set cursor to home
} 

/****************************************************************************************
* Function to send command to LCD
****************************************************************************************/ 
void LCD_Command(char command)
{
    LCD_RS_PIN = 0;                 // Command instruction
    Send_Nibble(command >> 4);      // Write hight nibble
    Send_Nibble(command);           // Write low nibble
    if ((command == CLEAR_DISPLAY) || (command == INIT_CURSOR)) {LCD_Delay_Ms(2);}
    else {LCD_Delay_Us(40);}          // Wait >40µs (or >1.64ms) while busy
}

/****************************************************************************************
* Function to send data to LCD
****************************************************************************************/
void LCD_Data(char data)
{
    LCD_RS_PIN = 1;                 // Data instruction
    Send_Nibble(data >> 4);         // Write hight nibble
    Send_Nibble(data);              // Write low nibble
    LCD_Delay_Us(43);               // Wait >43µs while busy
}

/****************************************************************************************
* Function to write character to LCD (characters ignored after end of line)
****************************************************************************************/
void LCD_Char(char character)
{
    if (remainingChar > 0)
    {
        LCD_Data(character);
		LCDText[currentLine][LCD_NB_CHARS-remainingChar] = character;
        remainingChar--;                // Increment current cursor position
    }
}

/****************************************************************************************
* Function to set position of line and cursor (line starting from 1, cursor from 0)
****************************************************************************************/
void LCD_Goto(uint8 line, uint8 cursor)
{
    // Set line address
    switch (line)
    {
        case 1 :  line = ADDR_LINE_1; break;
        case 2 :  line = ADDR_LINE_2; break;
        case 3 :  line = ADDR_LINE_3; break;
        case 4 :  line = ADDR_LINE_4; break;
        default : line = ADDR_LINE_1; break;
    }
    // Set RAM position and update remaining char
    if (cursor < LCD_NB_CHARS)
    {
        LCD_Command( DDRAM(line + cursor) );
        remainingChar = LCD_NB_CHARS - cursor;
    }
    else remainingChar = 0;
}

/****************************************************************************************
* Function to write text with reserved size at current position
****************************************************************************************/
void LCD_Text(char *textPointer, uint8 textSize)
{
    if (textSize <= remainingChar)
    {
        uint8 i;
        // Initialize a buffer with spaces
		//char textBuffer[textSize];
        char textBuffer[20];
		for (i = 0; i < textSize; i++) textBuffer[i] = ' ';
        // Fill the buffer with text content
        i = 0;
        while ((i < textSize) && (*textPointer)) textBuffer[i++] = *textPointer++;
        // Write each characters to LCD (except control characters)
        for (i = 0; i < textSize; i++) 
        {
            if (textBuffer[i] < ' ') textBuffer[i] = ' ';
            LCD_Char( textBuffer[i] );
        }
    }
}

/****************************************************************************************
* Function to write decimal value at current position
* format: [sign][integer][point][decimal] )
****************************************************************************************/
void LCD_Value(float64 value, uint8 integerSize, uint8 decimalSize)
{
    uint8 i = 0;
    float64 power = 0.1;
    char digit = 0;
    uint8 textSize = 1; // Size for sign

    // Set size of text to write
    if (integerSize >= remainingChar) integerSize = remainingChar - 1;
    if (decimalSize > 0) textSize += 1;   // Size for decimal point
    textSize += integerSize + decimalSize;
    if (textSize > remainingChar) textSize = remainingChar;
    // Text buffer representing the value
	//char buffer[textSize + 1];
 	char buffer[20 + 1];
	
    // Sign of value
    if (value < 0)
    {
        value = -value;
        buffer[0] = '-';
    }
    else buffer[0] = ' ';

    // Calculate the ten power of value
    for (i = 0; i < integerSize; i++) power *= 10;
    // If value exceeds the integer size, display '#' with upper/lower symbol
    if (value >= (power*10))
    {
        for (i = 1; i <= textSize; i++) buffer[i] = '#';
        if (buffer[0] == '-') buffer[0] = '<';
        else buffer[0] = '>';
        buffer[integerSize + 1] = '.';
    }
    else
    {
        // Extract value's integer and decimal
        i = 1;
        while (i <= textSize)
        {
            if (i == (integerSize + 1)) buffer[i++] = '.'; // Decimal point
            if (i == (textSize - 1)) digit = (char)((value / power) + 0.5); // Round
            else digit = (char)(value / power);
            if (digit > 9) digit = 9;
            value -= ((float64)digit) * power;                  
            power /= 10;
            buffer[i++] = digit + '0';
        }
        // Remove insignificant zero and right justify the sign
        i = 1;
        while ( (buffer[i] == '0') && (i < integerSize) )
        {
            buffer[i] = buffer[i-1];
            buffer[i-1] = ' ';
            i++;
        }
    }
    // Write image of value to LCD. If positive value, don't write the fisrt (sign) char
    if (buffer[0] == ' ') LCD_Text((char*)&buffer[1], textSize - 1);
    else LCD_Text(buffer, textSize);
}

/****************************************************************************************
* Function to write hexadecimal value at current position
* (size corresponds to hex-char or 4 bits)
****************************************************************************************/
void LCD_Hexa(uint32 value, uint8 size)
{
    uint8 i = 1;
    char digit[16] = "0123456789ABCDEF";

    // Limit size
    if (size > 8) size = 8;
    else if (size < 1) size = 1;
    
    // Text buffer representing value to write
	//char buffer[size];
	char buffer[20];	

    // Check if value exceeds the size, display '$'
    if (value >> (4*size))
    {
        for (i = 0; i < size; i++) buffer[i] = '$';
    }
    else
    {
        // Extract nibbles of value
        for (i = 0; i < size; i++)
        {
            buffer[(size - 1) - i] = digit[ (value >> (4*i)) & 0x0000000F ];
        }
    }
    // Write image of value to LCD
    LCD_Text(buffer, size);
}

/****************************************************************************************
* Function to set a custom character (from 0 to 7)
* Then write it to LCD with LCD_Char(numChar)
* Ex: buffer[8]=CHAR_BATTERY; LCD_CustomChar(0,buffer); LCD_Char(0);
****************************************************************************************/ 
void LCD_CustomChar(uint8 numChar, char *customChar)
{
    uint8 i;
    LCD_Command( CGRAM(numChar * 8) );                  // Set position to CGRAM
    for (i = 0; i < 8; i++) LCD_Data(customChar[i]);    // Write each line of custom char
}

