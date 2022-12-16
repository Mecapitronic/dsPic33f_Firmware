/****************************************************************************************
* Fichier     : PILOT_hardware.h
* Description : Configuration hardware du PILOT
* Auteur      : Christopher BUREL
* Version     : 2017.05.23
* Compilation : MPLAB X IDE (v3.45), compiler XC16 (v1.26) Lite
****************************************************************************************/

#ifndef PILOT_HARDWARE_H
#define	PILOT_HARDWARE_H

/****************************************************************************************
* Includes
****************************************************************************************/
#include "PILOT_main.h"

/****************************************************************************************
* Param�tres de configuration (par d�faut: 0=not defined, 1=defined)
****************************************************************************************/
#define AN_  (2)   // analog
#define IN_  (3)   // input
#define OUT_ (4)   // output

/****************************************************************************************
* D�claration des pins pour pouvoir les renommer ensuite
****************************************************************************************/
// pins synchro
#define PIN_9   
#define PIN_8
#define PIN_3
#define PIN_2
#define PIN_1
#define PIN_44
#define PIN_43
#define PIN_42
// pin 19 � 27
#define PIN_19  
#define PIN_20
#define PIN_21  
#define PIN_22
#define PIN_23
#define PIN_24
#define PIN_25
#define PIN_26
#define PIN_27

/****************************************************************************************
* Configurations des pins
 * Nommer la pin (facultatif, la pin est nommer PIN_x par d�faut)
 * D�finir la configuration :
 *      AN_ : entr�e analogique
 *      IN_ : entr�e num�rique
 *      OUT_ : sortie num�rique
****************************************************************************************/
// PIN 19
#define COMMAND_GO_IN         PIN_19
#define PIN_19_CONFIG       OUT_
// PIN 20
#define FREE_PIN_20         PIN_20
#define PIN_20_CONFIG       IN_
// PIN 21 (/!\ switch ICSP/PIN)
#define FREE_PIN_21         PIN_21
#define PIN_21_CONFIG       IN_
// PIN 22 (/!\ switch ICSP/PIN)
#define FREE_PIN_22         PIN_22
#define PIN_22_CONFIG       IN_
// PIN 23
#define LIDAR_RX            PIN_23
#define PIN_23_CONFIG       IN_
// PIN 24
#define FREE_PIN_24         PIN_24
#define PIN_24_CONFIG       IN_
// PIN 25
#define COMMAND_PUMP        PIN_25
#define PIN_25_CONFIG       OUT_
// PIN 26
#define COMMAND_GO_OUT      PIN_26
#define PIN_26_CONFIG       OUT_
// PIN 27
#define FREE_PIN_27       PIN_27
#define PIN_27_CONFIG       OUT_

#ifdef _USRDLL

#endif

/****************************************************************************************
* Configurations des pins synchro
****************************************************************************************/
// Nommer les pins
#define COMMAND_PUT_IN      PIN_9   // out
#define COMMAND_PUT_LEFT    PIN_8   // out
#define COMMAND_PUT_RIGHT   PIN_3   // out
#define COMMAND_TURN        PIN_2   // out
#define INFO_ARM_BUSY       PIN_1   // INPUT 5V 
#define FREE_PIN_44         PIN_44  // out
#define START_PILOT         PIN_43  // input
#define COLOR_TEAM          PIN_42  // out
// Configurer les pins
#undef PIN_9
#define PIN_9   LATBbits.LATB11
#undef PIN_8
#define PIN_8   LATBbits.LATB10
#undef PIN_3
#define PIN_3   LATCbits.LATC7
#undef PIN_2
#define PIN_2   LATCbits.LATC6
#undef PIN_1
#define PIN_1   PORTBbits.RB9   // ordre du bras
#undef PIN_44
#define PIN_44  LATBbits.LATB8
#undef PIN_43
#define PIN_43  PORTBbits.RB7    // ordre du copilot
#undef PIN_42
#define PIN_42  LATBbits.LATB6
// macro setup
#define Setup_Pin_9()   {TRISBbits.TRISB11 = 0;}
#define Setup_Pin_8()   {TRISBbits.TRISB10 = 0;}
#define Setup_Pin_3()   {TRISCbits.TRISC7 = 0;}
#define Setup_Pin_2()   {TRISCbits.TRISC6 = 0;}
#define Setup_Pin_1()   {TRISBbits.TRISB9 = 1;} // in
#define Setup_Pin_44()  {TRISBbits.TRISB8 = 0;}
#define Setup_Pin_43()  {TRISBbits.TRISB7 = 1;} // in 
#define Setup_Pin_42()  {TRISBbits.TRISB6 = 0;}
/****************************************************************************************
* D�finition des autres ports entr�es/sorties
****************************************************************************************/
// LED
#define LED             LATBbits.LATB5
#define Setup_LED()     {TRISBbits.TRISB5 = 0;}     // output
#define LED_On()        {LED = 1;}
#define LED_Off()       {LED = 0;}
#define LED_Toggle()    {LED = !LED;}

// Switch
#define SELECT          PORTCbits.RC3
#define Setup_Switch()  {TRISCbits.TRISC3 = 1;}   // input

// PWM moteurs : voir Motor.h
// QEI : voir Odometry.h
// Ecran LCD : voir LCD.h

/****************************************************************************************
* Gestion de configuration des pins 19 � 26 (/!\ modifier avec pr�caution)
****************************************************************************************/
// PIN 19
#if PIN_19_CONFIG == AN_
    #undef PIN_19
    #define PIN_19  ( ADC_Read(0) )          // AN0
    #define Setup_Pin_19()  {AD1PCFGLbits.PCFG0 = 0;}
#elif PIN_19_CONFIG == IN_
    #undef PIN_19
    #define PIN_19  PORTAbits.RA0
    #define Setup_Pin_19()  {AD1PCFGLbits.PCFG0 = 1; TRISAbits.TRISA0 = 1;}
#elif PIN_19_CONFIG == OUT_
    #undef PIN_19
    #define PIN_19  LATAbits.LATA0
    #define Setup_Pin_19()  {AD1PCFGLbits.PCFG0 = 1; TRISAbits.TRISA0 = 0;}
#else
    #error "PIN 19 not configured"
#endif
// PIN 20
#if PIN_20_CONFIG == AN_
    #undef PIN_20
    #define PIN_20  ( ADC_Read(1) )          // AN1
    #define Setup_Pin_20()  {AD1PCFGLbits.PCFG1 = 0;}
#elif PIN_20_CONFIG == IN_
    #undef PIN_20
    #define PIN_20  PORTAbits.RA1
    #define Setup_Pin_20()  {AD1PCFGLbits.PCFG1 = 1; TRISAbits.TRISA1 = 1;}
#elif PIN_20_CONFIG == OUT_
    #undef PIN_20
    #define PIN_20  LATAbits.LATA1
    #define Setup_Pin_20()  {AD1PCFGLbits.PCFG1 = 1; TRISAbits.TRISA1 = 0;}
#else
    #error "PIN 20 not configured"
#endif
// PIN 21
#if PIN_21_CONFIG == AN_
    #undef PIN_21
    #define PIN_21  ( ADC_Read(2) )          // AN2
    #define Setup_Pin_21()  {AD1PCFGLbits.PCFG2 = 0;}   
#elif PIN_21_CONFIG == IN_
    #undef PIN_21
    #define PIN_21  PORTBbits.RB0
    #define Setup_Pin_21()  {AD1PCFGLbits.PCFG2 = 1; TRISBbits.TRISB0 = 1;}
#elif PIN_21_CONFIG == OUT_
    #undef PIN_21
    #define PIN_21  LATBbits.LATB0
    #define Setup_Pin_21()  {AD1PCFGLbits.PCFG2 = 1; TRISBbits.TRISB0 = 0;}
#else
    #error "PIN 21 not configured"
#endif
// PIN 22
#if PIN_22_CONFIG == AN_
    #undef PIN_22
    #define PIN_22  ( ADC_Read(3) )          // AN3
    #define Setup_Pin_22()  {AD1PCFGLbits.PCFG3 = 0;}   
#elif PIN_22_CONFIG == IN_
    #undef PIN_22
    #define PIN_22  PORTBbits.RB1
    #define Setup_Pin_22()  {AD1PCFGLbits.PCFG3 = 1; TRISBbits.TRISB1 = 1;}
#elif PIN_22_CONFIG == OUT_
    #undef PIN_22
    #define PIN_22  LATBbits.LATB1
    #define Setup_Pin_22()  {AD1PCFGLbits.PCFG3 = 1; TRISBbits.TRISB1 = 0;}
#else
    #error "PIN 22 not configured"
#endif
// PIN 23
#if PIN_23_CONFIG == AN_
    #undef PIN_23
    #define PIN_23  ( ADC_Read(4) )          // AN4
    #define Setup_Pin_23()  {AD1PCFGLbits.PCFG4 = 0;}   
#elif PIN_23_CONFIG == IN_
    #undef PIN_23
    #define PIN_23  PORTBbits.RB2
    #define Setup_Pin_23()  {AD1PCFGLbits.PCFG4 = 1; TRISBbits.TRISB2 = 1;}
#elif PIN_23_CONFIG == OUT_
    #undef PIN_23
    #define PIN_23  LATBbits.LATB2
    #define Setup_Pin_23()  {AD1PCFGLbits.PCFG4 = 1; TRISBbits.TRISB2 = 0;}
#else
    #error "PIN 23 not configured"
#endif
// PIN 24
#if PIN_24_CONFIG == AN_
    #undef PIN_24
    #define PIN_24  ( ADC_Read(5) )          // AN5
    #define Setup_Pin_24()  {AD1PCFGLbits.PCFG5 = 0;}   
#elif PIN_24_CONFIG == IN_
    #undef PIN_24
    #define PIN_24  PORTBbits.RB3
    #define Setup_Pin_24()  {AD1PCFGLbits.PCFG5 = 1; TRISBbits.TRISB3 = 1;}
#elif PIN_24_CONFIG == OUT_
    #undef PIN_24
    #define PIN_24  LATBbits.LATB3
    #define Setup_Pin_24()  {AD1PCFGLbits.PCFG5 = 1; TRISBbits.TRISB3 = 0;}
#else
    #error "PIN 24 not configured"
#endif
// PIN 25
#if PIN_25_CONFIG == AN_
    #undef PIN_25
    #define PIN_25  ( ADC_Read(6) )          // AN6
    #define Setup_Pin_25()  {AD1PCFGLbits.PCFG6 = 0;}   
#elif PIN_25_CONFIG == IN_
    #undef PIN_25
    #define PIN_25  PORTCbits.RC0
    #define Setup_Pin_25()  {AD1PCFGLbits.PCFG6 = 1; TRISCbits.TRISC0 = 1;}
#elif PIN_25_CONFIG == OUT_
    #undef PIN_25
    #define PIN_25  LATCbits.LATC0
    #define Setup_Pin_25()  {AD1PCFGLbits.PCFG6 = 1; TRISCbits.TRISC0 = 0;}
#else
    #error "PIN 25 not configured"
#endif
// PIN 26
#if PIN_26_CONFIG == AN_
    #undef PIN_26
    #define PIN_26  ( ADC_Read(7) )          // AN7
    #define Setup_Pin_26()  {AD1PCFGLbits.PCFG7 = 0;}   
#elif PIN_26_CONFIG == IN_
    #undef PIN_26
    #define PIN_26  PORTCbits.RC1
    #define Setup_Pin_26()  {AD1PCFGLbits.PCFG7 = 1; TRISCbits.TRISC1 = 1;}
#elif PIN_26_CONFIG == OUT_
    #undef PIN_26
    #define PIN_26  LATCbits.LATC1
    #define Setup_Pin_26()  {AD1PCFGLbits.PCFG7 = 1; TRISCbits.TRISC1 = 0;}
#else
    #error "PIN 26 not configured"
#endif
// PIN 27
#if PIN_27_CONFIG == AN_
    #undef PIN_27
    #define PIN_27  ( ADC_Read(8) )          // AN8
    #define Setup_Pin_27()  {AD1PCFGLbits.PCFG7 = 0;}
#elif PIN_27_CONFIG == IN_
    #undef PIN_27
    #define PIN_27  PORTCbits.RC2
    #define Setup_Pin_27()  {AD1PCFGLbits.PCFG8 = 1; TRISCbits.TRISC2 = 1;}
#elif PIN_27_CONFIG == OUT_
    #undef PIN_27
    #define PIN_27  LATCbits.LATC2
    #define Setup_Pin_27()  {AD1PCFGLbits.PCFG8 = 1; TRISCbits.TRISC2 = 0;}
#else
    #error "PIN 27 not configured"
#endif
// End gestion configuration des pins

/****************************************************************************************
* Prototypes Fonctions
****************************************************************************************/
void Setup_Hardware(void);
void Sequence_Initiale(void);

#endif	/* PILOT_HARDWARE_H */

