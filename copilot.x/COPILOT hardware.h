/****************************************************************************************
 * Fichier     : COPILOT hardware.h
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
#include "COPILOT main.h"

/****************************************************************************************
* Paramètres de configuration (par défaut: 0=not defined, 1=defined)
****************************************************************************************/
#define AN  (2)   // analog
#define IN  (3)   // input
#define OUT (4)   // output

/****************************************************************************************
* Déclaration des pins pour pouvoir les renommer ensuite
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
// pins 21 à 26
#define PIN_21  
#define PIN_22
#define PIN_23
#define PIN_24
#define PIN_25
#define PIN_26

/****************************************************************************************
* Configurations des pins
 * Nommer la pin (facultatif, la pin est nommer PIN_x par défaut)
 * Définir la configuration :
 *      AN : entrée analogique
 *      IN : entrée numérique
 *      OUT : sortie numérique
****************************************************************************************/
// PIN 21 (/!\ switch ICSP/PIN)
#define UNDEF1              PIN_21
#define PIN_21_CONFIG       IN
// PIN 22 (/!\ switch ICSP/PIN)
#define UNDEF2              PIN_22
#define PIN_22_CONFIG       OUT
// PIN 23
#define PRESENCE_PIED       PIN_23  // Capteur couleur en sortie binaire
#define PIN_23_CONFIG       IN
// PIN 24
#define UNDEF3              PIN_24
#define PIN_24_CONFIG       IN
// PIN 25
#define SERVO_6             PIN_25  // servo 6
#define PIN_25_CONFIG       OUT
// PIN 26
#define SERVO_5             PIN_26  // servo 5
#define PIN_26_CONFIG       OUT

/****************************************************************************************
* Configurations des pins synchro
****************************************************************************************/
// Nommer les pins
#define FORCER_EMPILAGE     PIN_9
#define FERMER_PINCE_CLAP   PIN_8
#define GOBELET_PRESENT     PIN_3   // out
#define PRENDRE_GOBELET     PIN_2
#define PIED_PRESENT        PIN_1   // out
#define DEPOSER_SPOT        PIN_44
#define START_PILOT         PIN_43   // out
#define COLOR_TEAM          PIN_42
// Configurer les pins
#undef PIN_9
#define PIN_9   _RB11
#undef PIN_8
#define PIN_8   _RB10
#undef PIN_3
#define PIN_3   _LATC7      // out
#undef PIN_2
#define PIN_2   _RC6
#undef PIN_1
#define PIN_1   _LATB9      // out
#undef PIN_44
#define PIN_44  _RB8
#undef PIN_43
#define PIN_43  _LATB7    // out
#undef PIN_42
#define PIN_42  _RB6
// macro setup
#define Setup_Pin_9()   {_TRISB11 = 1;}
#define Setup_Pin_8()   {_TRISB10 = 1;}
#define Setup_Pin_3()   {_TRISC7 = 0;}    // out
#define Setup_Pin_2()   {_TRISC6 = 1;}
#define Setup_Pin_1()   {_TRISB9 = 0;}  // out
#define Setup_Pin_44()  {_TRISB8 = 1;} 
#define Setup_Pin_43()  {_TRISB7 = 0;}  // out
#define Setup_Pin_42()  {_TRISB6 = 1;}

/****************************************************************************************
* Définition des autres ports entrées/sorties
****************************************************************************************/
// LED
#define LED             _LATB5
#define Setup_LED()     {_TRISB5 = 0; _LATB5 = 0;}     // output

// Switch
#define SW1             !_RC3   // Actif à l'état haut
#define SW2             !_RC8   // Actif à l'état haut
#define SW3             !_RC9   // Actif à l'état haut
#define MODE            _RC4
#define START           !_RC5   // Actif à l'état haut
#define Setup_Switch()  {_TRISC3 = 1;_TRISC8 = 1;_TRISC9 = 1;_TRISC4 = 1;_TRISC5 = 1;}

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
#define Setup_Servo_1()     {_TRISB14 = 0;}
#define Setup_Servo_2()     {_TRISB15 = 0;}
#define Setup_Servo_3()     {_TRISA0 = 0;}
#define Setup_Servo_4()     {_TRISA1 = 0;}

// LCD : see Library

/****************************************************************************************
* Gestion de configuration des pins 21 à 26 (/!\ modifier avec précaution)
****************************************************************************************/
// PIN 21
#if PIN_21_CONFIG == AN
    #undef PIN_21
    #define PIN_21  ( ADC_Read(2) )          // AN2
    #define Setup_Pin_21()  {_PCFG2 = 0;}   
#elif PIN_21_CONFIG == IN
    #undef PIN_21
    #define PIN_21  _RB0
    #define Setup_Pin_21()  {_PCFG2 = 1; _TRISB0 = 1;}
#elif PIN_21_CONFIG == OUT
    #undef PIN_21
    #define PIN_21  _LATB0
    #define Setup_Pin_21()  {_PCFG2 = 1; _TRISB0 = 0;}
#else
    #error "PIN 21 not configured"
#endif
// PIN 22
#if PIN_22_CONFIG == AN
    #undef PIN_22
    #define PIN_22  ( ADC_Read(3) )          // AN3
    #define Setup_Pin_22()  {_PCFG3 = 0;}   
#elif PIN_22_CONFIG == IN
    #undef PIN_22
    #define PIN_22  _RB1
    #define Setup_Pin_22()  {_PCFG3 = 1; _TRISB1 = 1;}
#elif PIN_22_CONFIG == OUT
    #undef PIN_22
    #define PIN_22  _LATB1
    #define Setup_Pin_22()  {_PCFG3 = 1; _TRISB1 = 0;}
#else
    #error "PIN 22 not configured"
#endif
// PIN 23
#if PIN_23_CONFIG == AN
    #undef PIN_23
    #define PIN_23  ( ADC_Read(4) )          // AN4
    #define Setup_Pin_23()  {_PCFG4 = 0;}   
#elif PIN_23_CONFIG == IN
    #undef PIN_23
    #define PIN_23  _RB2
    #define Setup_Pin_23()  {_PCFG4 = 1; _TRISB2 = 1;}
#elif PIN_23_CONFIG == OUT
    #undef PIN_23
    #define PIN_23  _LATB2
    #define Setup_Pin_23()  {_PCFG4 = 1; _TRISB2 = 0;}
#else
    #error "PIN 23 not configured"
#endif
// PIN 24
#if PIN_24_CONFIG == AN
    #undef PIN_24
    #define PIN_24  ( ADC_Read(5) )          // AN5
    #define Setup_Pin_24()  {_PCFG5 = 0;}   
#elif PIN_24_CONFIG == IN
    #undef PIN_24
    #define PIN_24  _RB3
    #define Setup_Pin_24()  {_PCFG5 = 1; _TRISB3 = 1;}
#elif PIN_24_CONFIG == OUT
    #undef PIN_24
    #define PIN_24  _LATB3
    #define Setup_Pin_24()  {_PCFG5 = 1; _TRISB3 = 0;}
#else
    #error "PIN 24 not configured"
#endif
// PIN 25
#if PIN_25_CONFIG == AN
    #undef PIN_25
    #define PIN_25  ( ADC_Read(6) )          // AN6
    #define Setup_Pin_25()  {_PCFG6 = 0;}   
#elif PIN_25_CONFIG == IN
    #undef PIN_25
    #define PIN_25  _RC0
    #define Setup_Pin_25()  {_PCFG6 = 1; _TRISC0 = 1;}
#elif PIN_25_CONFIG == OUT
    #undef PIN_25
    #define PIN_25  _LATC0
    #define Setup_Pin_25()  {_PCFG6 = 1; _TRISC0 = 0;}
#else
    #error "PIN 25 not configured"
#endif
// PIN 26
#if PIN_26_CONFIG == AN
    #undef PIN_26
    #define PIN_26  ( ADC_Read(7) )          // AN7
    #define Setup_Pin_26()  {_PCFG7 = 0;}   
#elif PIN_26_CONFIG == IN
    #undef PIN_26
    #define PIN_26  _RC1
    #define Setup_Pin_26()  {_PCFG7 = 1; _TRISC1 = 1;}
#elif PIN_26_CONFIG == OUT
    #undef PIN_26
    #define PIN_26  _LATC1
    #define Setup_Pin_26()  {_PCFG7 = 1; _TRISC1 = 0;}
#else
    #error "PIN 26 not configured"
#endif
// End gestion configuration des pins

/****************************************************************************************
* Prototypes Fonctions
****************************************************************************************/
void Setup_Hardware(void);
void Sequence_Initiale(void);

#endif	/* COPILOT_HARDWARE_H */

