/****************************************************************************************
 * Fichier     : LCD HD44780 module.h
 * Description : Librairie afficheur LCD HD44780 (interface 4 bits, écriture uniquement)
 * Auteur      : Christopher BUREL
 * Version     : 2015.03.08
* Compilation : MPLAB X IDE (v2.35), compiler XC16 (v1.24) Lite
 ***************************************************************************************/

#ifndef LCD_HD44780_MODULE_H
#define LCD_HD44780_MODULE_H

/****************************************************************************************
* Includes
****************************************************************************************/
#include "LIBRARY module.h"
#include "LCD Custom Character.h"

/****************************************************************************************
* Variables
****************************************************************************************/
extern uint8 remainingChar;    
extern uint8 currentLine;
extern char LCDText[4][20];

/****************************************************************************************
* LCD Configuration
****************************************************************************************/
// Delay routines 
#define LCD_Delay_Ms(t) Delay_Ms(t)
#define LCD_Delay_Us(t) Delay_Us(t)
// Output pins
#define LCD_RS_PIN      LATAbits.LATA7
#define LCD_E_PIN       LATAbits.LATA10
#define LCD_D4_PIN      LATAbits.LATA8
#define LCD_D5_PIN      LATBbits.LATB4
#define LCD_D6_PIN      LATAbits.LATA4
#define LCD_D7_PIN      LATAbits.LATA9
// Corresponding tris pins
#define LCD_RS_TRIS     TRISAbits.TRISA7
#define LCD_E_TRIS      TRISAbits.TRISA10
#define LCD_D4_TRIS     TRISAbits.TRISA8
#define LCD_D5_TRIS     TRISBbits.TRISB4
#define LCD_D6_TRIS     TRISAbits.TRISA4
#define LCD_D7_TRIS     TRISAbits.TRISA9
// Display size
#define LCD_NB_LINES    4
#define LCD_NB_CHARS    20
// Dots matrix size (comment the unused)
#define LCD_IS_5X8_MATRIX
//#define LCD_IS_5X10_MATRIX

// RAM  start address of lines
#define ADDR_LINE_1     0x00
#define ADDR_LINE_2     0x40
#define ADDR_LINE_3     0x14
#define ADDR_LINE_4     0x54

/****************************************************************************************
* LCD Commands
****************************************************************************************/
// Clear display
#define CLEAR_DISPLAY   0x01
// Return home
#define INIT_CURSOR     0x02
// Entry set mode
#define INCREMENT_MODE	0x07
#define DECREMENT_MODE	0x05
#define SHIFT_ALL_OFF   0x06
#define SHIFT_ALL_ON	0x07
// Display on/off control
#define DISPLAY_ON      0x0F
#define DISPLAY_OFF     0x0B
#define CURSOR_ON       0x0F
#define CURSOR_OFF      0x0D
#define BLINK_ON        0x0F
#define BLINK_OFF       0x0E
// Cursor or display shift
#define CURSOR_LEFT     0x13
#define CURSOR_RIGHT    0x17
#define DISPLAY_LEFT    0x1B
#define DISPLAY_RIGHT   0x1F
// Function set (4 bits interface only)
#if LCD_NB_LINES == 1
#define LINE_SETTING    0x27    // one line
#else
#define LINE_SETTING    0x2F    // two lines
#endif
#ifdef LCD_IS_5X8_MATRIX
#define MATRIX_SETTING  0x2B    // 5x8 dots
#else
#define MATRIX_SETTING  0x2F    // 5x10 dots
#endif
// RAM address mask macro
#define DDRAM(addr)     ((addr) | 0x80)
#define CGRAM(addr)     (((addr) | 0x40) & 0x7F)

/****************************************************************************************
* Macros
****************************************************************************************/
// Clear all display
#define LCD_Clear()             LCD_Command(CLEAR_DISPLAY)
// Set position of line
#define LCD_Line(line)          {LCD_Goto((line),0); currentLine = line-1;}
// Clear one line
#define LCD_Clear_Line()        {LCD_Text("                    ",20);}
// Set a custom char
#define LCD_SetCustomChar(n,c)  {char buffer[8] = c; LCD_CustomChar(n, buffer);}

/****************************************************************************************
* Functions prototypes
****************************************************************************************/
// Configure pins and setup LCD
void LCD_Setup(void);
// Send command to LCD
void LCD_Command(char command);
// Send data to LCD
void LCD_Data(char data);
// Write character to LCD (characters ignored after end of line)
void LCD_Char(char character);
// Set position of line and cursor (line starting from 1, cursor from 0)
void LCD_Goto(uint8 line, uint8 cursor);
// Write text with reserved size at current position 
void LCD_Text(char *textPointer, uint8 textSize);
// Write decimal value at current position (format: [sign][integer][point][decimal] )
void LCD_Value(float64 value, uint8 integerSize, uint8 decimalSize);
// Write hexadecimal value at current position (size corresponds to hex-char or 4 bits)
void LCD_Hexa(uint32 value, uint8 size);
// Set a custom character (from 0 to 7), then write it to LCD with LCD_Char(numChar)
// => Use macro LCD_SetCustomChar(numChar, customChar)
void LCD_CustomChar(uint8 numChar, char *customChar);


#endif /* LCD_HD44780_MODULE_H */

