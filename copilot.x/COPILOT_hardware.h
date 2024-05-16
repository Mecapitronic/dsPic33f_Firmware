/****************************************************************************************
 * Fichier     : COPILOT_hardware.h
 * Description : Configuration hardware du COPILOT
 * Auteur      : Christopher BUREL
 * Version     : 2015.03.07
 * Compilation : MPLAB X IDE (v2.35), compiler XC16 (v1.24) Lite
 ****************************************************************************************/

#ifndef COPILOT_HARDWARE_H
#define	COPILOT_HARDWARE_H

/****************************************************************************************
 * Includes
 ****************************************************************************************/
#include "COPILOT_main.h"

/****************************************************************************************
 * Paramètres de configuration (par défaut: 0=not defined, 1=defined)
 ****************************************************************************************/
#define AN_  (2)   // analog
#define IN_  (3)   // input
#define OUT_ (4)   // output

/****************************************************************************************
 * Déclaration des pins pour pouvoir les renommer ensuite
 ****************************************************************************************/
// pins synchro PILOT <-> COPILOT
#define PIN_9   
#define PIN_8
#define PIN_3
#define PIN_2
#define PIN_1
#define PIN_44
#define PIN_43
#define PIN_42
// pins libres 21 à 26
#define PIN_21  
#define PIN_22
#define PIN_23
#define PIN_24
#define PIN_25
#define PIN_26

/****************************************************************************************
 * Configurations des pins synchro
 * Nommer la pin (facultatif, la pin est nommé PIN_x par défaut)
 * Définir la configuration :
 *      IN_ : entrée numérique
 *      OUT_ : sortie numérique
 ****************************************************************************************/

// PIN 9
#define FREE_PIN_9          PIN_9
#define PIN_9_CONFIG        IN_
// PIN 8
#define LEVER_PLANTE        PIN_8 // lever plante tout en haut, sinon tout en bas
#define PIN_8_CONFIG        IN_
// PIN 3
#define BAISSER_POT         PIN_3 // baisser pot tout en bas, sinon monter légérement pour la chute à la dépose 
#define PIN_3_CONFIG        IN_
// PIN 2
#define LEVER_POT           PIN_2 // lever pot au dessus de la jardiniere, sinon voir baisser pot
#define PIN_2_CONFIG        IN_
// PIN 1
#define FREE_PIN_1          PIN_1
#define PIN_1_CONFIG        IN_
// PIN 44
#define MODE_PILOT          PIN_44
#define PIN_44_CONFIG       OUT_
// PIN 43
#define START_PILOT         PIN_43
#define PIN_43_CONFIG       OUT_
// PIN 42
#define RECALAGE_PILOT      PIN_42
#define PIN_42_CONFIG       OUT_


/****************************************************************************************
 * Configurations des pins
 * Nommer la pin (facultatif, la pin est nommé PIN_x par défaut)
 * Définir la configuration :
 *      AN_ : entrée analogique
 *      IN_ : entrée numérique
 *      OUT_ : sortie numérique
 ****************************************************************************************/
// PIN 19 NOT ENABLE
// PIN 20 NOT ENABLE
// PIN 21 (/!\ switch ICSP/PIN)
#define UNDEF21             PIN_21
#define PIN_21_CONFIG       IN_
// PIN 22 (/!\ switch ICSP/PIN)
#define UNDEF22             PIN_22
#define PIN_22_CONFIG       IN_
// PIN 23
#define BATTERY_CURRENT     PIN_23  // Capteur de courant sur batterie
#define PIN_23_CONFIG       AN_
// PIN 24
#define UNDEF24             PIN_24
#define PIN_24_CONFIG       IN_
// PIN 25
#define UNDEF25             PIN_25
#define PIN_25_CONFIG       IN_
// PIN 26
#define UNDEF26             PIN_26
#define PIN_26_CONFIG       IN_
// PIN 27 NOT ENABLE

/****************************************************************************************
 * Définition des autres ports entrées/sorties
 ****************************************************************************************/
// LED
#define LED             _LATB5
#define Setup_LED()     {_TRISB5 = 0; _LATB5 = 0;}     // output
#define LED_On()        {LED = 1;}
#define LED_Off()       {LED = 0;}
#define LED_Toggle()    {LED = !LED;}

// Switch
#define SW1             !_RC3   // Actif à l'état haut
#define SW2             !_RC8   // Actif à l'état haut
#define SW3             !_RC9   // Actif à l'état haut
#define MODE            _RC4
#define START           !_RC5   // Actif à l'état haut
#define Setup_Switch()  {_TRISC3 = 1;_TRISC8 = 1;_TRISC9 = 1;_TRISC4 = 1;_TRISC5 = 1;} //input

// Relay
#define RELAY           _LATB13         // Relais de puissance (moteur et servo)
#define Setup_Relay()   {_TRISB13 = 0;} // output
#define Relay_Off()     {RELAY = 0;}
#define Relay_On()      {RELAY = 1;}

// Buzzer
#define BUZZER          _LATB12         // Buzzer + LED rouge
#define Setup_Buzzer()  {_TRISB12 = 0; _LATB12 = 0;}    // output

// Mesure tension alimentation
#define Setup_U_PWR()   {_PCFG8 = 0;}                  // AN8
// 3.2[Vmax] / 0.128205[V/V] => 25[Vmax] / 1024
#define COEF_U_PWR      (0.02441)
// tension d'alimentation
#define PWR_VOLTAGE     ( ADC_Read(8)*(COEF_U_PWR) )

// Servo
#define SERVO_1             _LATB14     // output
#define SERVO_2             _LATB15
#define SERVO_3             _LATA0
#define SERVO_4             _LATA1
#define Setup_Servo_1()     {_TRISB14 = 0; _LATB14 = 0;}
#define Setup_Servo_2()     {_TRISB15 = 0; _LATB15 = 0;}
#define Setup_Servo_3()     {_TRISA0 = 0; _LATA0 = 0;}
#define Setup_Servo_4()     {_TRISA1 = 0; _LATA1 = 0;}

// Ecran LCD : voir LCD.h


/****************************************************************************************
 * Gestion de configuration des pins synchro (/!\ modifier avec précaution)
 ****************************************************************************************/
// PIN 9
#if PIN_9_CONFIG == IN_
#undef PIN_9
#define PIN_9  PORTBbits.RB11
#define Setup_Pin_9()  {TRISBbits.TRISB11 = 1;}
#elif PIN_9_CONFIG == OUT_
#undef PIN_9
#define PIN_9  LATBbits.LATB11
#define Setup_Pin_9()  {TRISBbits.TRISB11 = 0;}
#else
#error "PIN 9 not configured"
#endif
// PIN 8
#if PIN_8_CONFIG == IN_
#undef PIN_8
#define PIN_8  PORTBbits.RB10
#define Setup_Pin_8()  {TRISBbits.TRISB10 = 1;}
#elif PIN_8_CONFIG == OUT_
#undef PIN_8
#define PIN_8  LATBbits.LATB10
#define Setup_Pin_8()  {TRISBbits.TRISB10 = 0;}
#else
#error "PIN 8 not configured"
#endif
// PIN 3
#if PIN_3_CONFIG == IN_
#undef PIN_3
#define PIN_3  PORTCbits.RC7
#define Setup_Pin_3()  {TRISCbits.TRISC7 = 1;}
#elif PIN_3_CONFIG == OUT_
#undef PIN_3
#define PIN_3  LATCbits.LATC7
#define Setup_Pin_3()  {TRISCbits.TRISC7 = 0;}
#else
#error "PIN 3 not configured"
#endif
// PIN 2
#if PIN_2_CONFIG == IN_
#undef PIN_2
#define PIN_2  PORTCbits.RC6
#define Setup_Pin_2()  {TRISCbits.TRISC6 = 1;}
#elif PIN_2_CONFIG == OUT_
#undef PIN_2
#define PIN_2  LATCbits.LATC6
#define Setup_Pin_2()  {TRISCbits.TRISC6 = 0;}
#else
#error "PIN 2 not configured"
#endif
// PIN 1
#if PIN_1_CONFIG == IN_
#undef PIN_1
#define PIN_1  PORTBbits.RB9
#define Setup_Pin_1()  {TRISBbits.TRISB9 = 1;}
#elif PIN_1_CONFIG == OUT_
#undef PIN_1
#define PIN_1  LATBbits.LATB9
#define Setup_Pin_1()  {TRISBbits.TRISB9 = 0;}
#else
#error "PIN 1 not configured"
#endif
// PIN 44
#if PIN_44_CONFIG == IN_
#undef PIN_44
#define PIN_44  PORTBbits.RB8
#define Setup_Pin_44()  {TRISBbits.TRISB8 = 1;}
#elif PIN_44_CONFIG == OUT_
#undef PIN_44
#define PIN_44  LATBbits.LATB8
#define Setup_Pin_44()  {TRISBbits.TRISB8 = 0;}
#else
#error "PIN 44 not configured"
#endif
// PIN 43
#if PIN_43_CONFIG == IN_
#undef PIN_43
#define PIN_43  PORTBbits.RB7
#define Setup_Pin_43()  {TRISBbits.TRISB7 = 1;}
#elif PIN_43_CONFIG == OUT_
#undef PIN_43
#define PIN_43  LATBbits.LATB7
#define Setup_Pin_43()  {TRISBbits.TRISB7 = 0;}
#else
#error "PIN 43 not configured"
#endif// PIN 42
#if PIN_42_CONFIG == IN_
#undef PIN_42
#define PIN_42  PORTBbits.RB6
#define Setup_Pin_42()  {TRISBbits.TRISB6 = 1;}
#elif PIN_42_CONFIG == OUT_
#undef PIN_42
#define PIN_42  LATBbits.LATB6
#define Setup_Pin_42()  {TRISBbits.TRISB6 = 0;}
#else
#error "PIN 42 not configured"
#endif

/****************************************************************************************
 * Gestion de configuration des pins 21 à 26 (/!\ modifier avec précaution)
 ****************************************************************************************/
// PIN 19 NOT ENABLE
// PIN 20 NOT ENABLE
// PIN 21
#if PIN_21_CONFIG == AN_
#undef PIN_21
#define PIN_21  ( ADC_Read(2) )          // AN2
#define Setup_Pin_21()  {_PCFG2 = 0;}   
#elif PIN_21_CONFIG == IN_
#undef PIN_21
#define PIN_21  _RB0
#define Setup_Pin_21()  {_PCFG2 = 1; _TRISB0 = 1;}
#elif PIN_21_CONFIG == OUT_
#undef PIN_21
#define PIN_21  _LATB0
#define Setup_Pin_21()  {_PCFG2 = 1; _TRISB0 = 0;}
#else
#error "PIN 21 not configured"
#endif
// PIN 22
#if PIN_22_CONFIG == AN_
#undef PIN_22
#define PIN_22  ( ADC_Read(3) )          // AN3
#define Setup_Pin_22()  {_PCFG3 = 0;}   
#elif PIN_22_CONFIG == IN_
#undef PIN_22
#define PIN_22  _RB1
#define Setup_Pin_22()  {_PCFG3 = 1; _TRISB1 = 1;}
#elif PIN_22_CONFIG == OUT_
#undef PIN_22
#define PIN_22  _LATB1
#define Setup_Pin_22()  {_PCFG3 = 1; _TRISB1 = 0;}
#else
#error "PIN 22 not configured"
#endif
// PIN 23
#if PIN_23_CONFIG == AN_
#undef PIN_23
#define PIN_23  ( ADC_Read(4) )          // AN4
#define Setup_Pin_23()  {_PCFG4 = 0;}   
#elif PIN_23_CONFIG == IN_
#undef PIN_23
#define PIN_23  _RB2
#define Setup_Pin_23()  {_PCFG4 = 1; _TRISB2 = 1;}
#elif PIN_23_CONFIG == OUT_
#undef PIN_23
#define PIN_23  _LATB2
#define Setup_Pin_23()  {_PCFG4 = 1; _TRISB2 = 0;}
#else
#error "PIN 23 not configured"
#endif
// PIN 24
#if PIN_24_CONFIG == AN_
#undef PIN_24
#define PIN_24  ( ADC_Read(5) )          // AN5
#define Setup_Pin_24()  {_PCFG5 = 0;}   
#elif PIN_24_CONFIG == IN_
#undef PIN_24
#define PIN_24  _RB3
#define Setup_Pin_24()  {_PCFG5 = 1; _TRISB3 = 1;}
#elif PIN_24_CONFIG == OUT_
#undef PIN_24
#define PIN_24  _LATB3
#define Setup_Pin_24()  {_PCFG5 = 1; _TRISB3 = 0;}
#else
#error "PIN 24 not configured"
#endif
// PIN 25
#if PIN_25_CONFIG == AN_
#undef PIN_25
#define PIN_25  ( ADC_Read(6) )          // AN6
#define Setup_Pin_25()  {_PCFG6 = 0;}   
#elif PIN_25_CONFIG == IN_
#undef PIN_25
#define PIN_25  _RC0
#define Setup_Pin_25()  {_PCFG6 = 1; _TRISC0 = 1;}
#elif PIN_25_CONFIG == OUT_
#undef PIN_25
#define PIN_25  _LATC0
#define Setup_Pin_25()  {_PCFG6 = 1; _TRISC0 = 0;}
#else
#error "PIN 25 not configured"
#endif
// PIN 26
#if PIN_26_CONFIG == AN_
#undef PIN_26
#define PIN_26  ( ADC_Read(7) )          // AN7
#define Setup_Pin_26()  {_PCFG7 = 0;}   
#elif PIN_26_CONFIG == IN_
#undef PIN_26
#define PIN_26  _RC1
#define Setup_Pin_26()  {_PCFG7 = 1; _TRISC1 = 1;}
#elif PIN_26_CONFIG == OUT_
#undef PIN_26
#define PIN_26  _LATC1
#define Setup_Pin_26()  {_PCFG7 = 1; _TRISC1 = 0;}
#else
#error "PIN 26 not configured"
#endif
// PIN 27 NOT ENABLE
// End gestion configuration des pins

/****************************************************************************************
 * Prototypes Fonctions
 ****************************************************************************************/
void Setup_Hardware(void);
void Sequence_Initiale(void);

#endif	/* COPILOT_HARDWARE_H */

