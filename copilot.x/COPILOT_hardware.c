/****************************************************************************************
 * Fichier     : COPILOT_hardware.c
 * Description : Configuration hardware du COPILOT
 * Auteur      : Christopher BUREL
 * Version     : 2015.03.07
 * Compilation : MPLAB X IDE (v2.35), compiler XC16 (v1.24) Lite
 ****************************************************************************************/

/****************************************************************************************
 * Includes
 ****************************************************************************************/
#include "COPILOT_hardware.h"

/****************************************************************************************
 * Bits de configuration
 ****************************************************************************************/
_FOSCSEL(FNOSC_PRIPLL & IESO_OFF)
// Primary oscillator (XT, HS, EC) w/ PLL
// Start-up device with user-selected oscillator source
_FOSC(POSCMD_XT & OSCIOFNC_OFF & IOL1WAY_OFF & FCKSM_CSDCMD)
// XT Oscillator Mode
// OSC2 pin has clock out function
// Allow Multiple Re-configurations
// Both Clock Switching and Fail-Safe Clock Monitor are disabled
_FWDT(WDTPOST_PS32768 & WDTPRE_PR128 & WINDIS_OFF & FWDTEN_OFF)
// Watchdog Timer Postscaler 1:32,768
// WDT Prescaler 1:128
// Watchdog Timer in Non-Window mode
// Watchdog timer enabled/disabled by user software


/****************************************************************************************
 * Sequence d'initialisation du système (attention à l'ordre d'exécution!)
 ****************************************************************************************/
void Setup_Hardware(void) {
    /* Setup frequency
     * Fréquence d'entrée : résonateur XT 10 MHz
     * Frèquence des cycles d'instructions (FCY) : 40 MIPS */
    _PLLPRE = 0; // N1 = 2
    _PLLDIV = 30; // M = 32
    _PLLPOST = 0; // N2 = 2

    // Setup Pin
    Setup_Pin_21();
    Setup_Pin_22();
    Setup_Pin_23();
    Setup_Pin_24();
    Setup_Pin_25();
    Setup_Pin_26();

    Setup_Pin_9();
    Setup_Pin_8();
    Setup_Pin_3();
    Setup_Pin_2();
    Setup_Pin_1();
    Setup_Pin_44();
    Setup_Pin_43();
    Setup_Pin_42();

    Setup_LED();
    Setup_Switch();
    Setup_Relay();
    Setup_Buzzer();
    Setup_U_PWR();
    Setup_Servo_1();
    Setup_Servo_2();
    Setup_Servo_3();
    Setup_Servo_4();

    LCD_Setup();
    ADC_On();
}

/****************************************************************************************
 * Séquence au démarrage du système
 ****************************************************************************************/
void Sequence_Initiale(void) {
    char i;

    LCD_Line(1);
    LCD_Text("GR2023 COPILOT", 16);
    LCD_Line(2);
    LCD_Text(__DATE__, 7);
    LCD_Text("    ", 4);
    LCD_Text(__TIME__, 5);

    for (i = 0; i < 5; i++) {
        LED = !LED;
        Delay_Ms(100);
        BUZZER = !BUZZER;
    }
    LED = ON;
    BUZZER = OFF;
    //Delay_S(1);
    LED = OFF;
    LCD_Clear();
}



