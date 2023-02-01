/****************************************************************************************
 * Fichier     : Uart.h
 * Description : Gestion de l'UART 1
 * Auteur      : Geoffroy ARENOU et Christopher BUREL
 * Version     : 2016.01.11
 * Compilation : MPLAB X IDE (v3.45), compiler XC16 (v1.26) Lite
 ****************************************************************************************/

#ifndef UART_H
#define	UART_H

/****************************************************************************************
 * Includes
 ****************************************************************************************/
#include "PILOT_main.h"

 /****************************************************************************************
  * Variables Globales
  ****************************************************************************************/
extern t_uartCMD uartCMD;
extern boolean send_ack;
extern uint8 send_ack_cmd;

/****************************************************************************************
* Parameters
****************************************************************************************/
#define FCY  (unsigned long)40000000   // operating frequency (MIPS)
// UART 1
#define U1_BAUD    125000 // /!\ check if UxBRG value is integer
#define U1RX_SIZE  64
#define Setup_UART1_RX_Pin()  do{ RPINR18bits.U1RXR = 11; }while(0);  // pin 9
#define Setup_UART1_TX_Pin()  do{ RPOR8bits.RP17R = 3; }while(0);     // pin 26
// UART 2 => LIDAR 

/****************************************************************************************
* Prototypes
****************************************************************************************/
// UART1
void Initialize_UART1(void);
void Write_UART1(uint16 data);
void Write_String_UART1(const char * s);
void Write_Float_UART1(float number, int32 afterpoint);
void Write_Int_UART1(int32 number);
void Update_UART1(void);
void Send_UART1_ACK(uint8 ack);
void Update_UART1_ACK(uint8 ack);
void Process_Data_UART1(char str);
void Analyse_Data_UART1(void);

void reverse(char *str, int32 len);
int32 intToStr(int32 x, char str[], int32 d);
void ftoa(float n, char *res, int32 afterpoint);


void Afficher_UART(uint8 ligne);

#ifdef _VISUAL_STUDIO
void _U1RXInterrupt(void);
#endif

#endif
