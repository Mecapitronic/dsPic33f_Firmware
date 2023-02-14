/****************************************************************************************
* Fichier     : PILOT_hardware.c
* Description : Configuration hardware du PILOT
* Auteur      : Christopher BUREL
* Version     : 2017.05.23
* Compilation : MPLAB X IDE (v2.35), compiler XC16 (v1.24) Lite
****************************************************************************************/

/****************************************************************************************
* Includes
****************************************************************************************/
#include "PILOT_hardware.h"

/****************************************************************************************
* Bits de configuration
****************************************************************************************/
#ifndef _VISUAL_STUDIO
_FOSCSEL( FNOSC_PRIPLL & IESO_OFF )
// Primary oscillator (XT, HS, EC) w/ PLL
// Start-up device with user-selected oscillator source
_FOSC( POSCMD_XT & OSCIOFNC_OFF & IOL1WAY_OFF & FCKSM_CSDCMD )
// XT Oscillator Mode
// OSC2 pin has clock out function
// Allow Multiple Re-configurations
// Both Clock Switching and Fail-Safe Clock Monitor are disabled
_FWDT( WDTPOST_PS32768 & WDTPRE_PR128 & WINDIS_OFF & FWDTEN_OFF )
// Watchdog Timer Postscaler 1:32,768
// WDT Prescaler 1:128
// Watchdog Timer in Non-Window mode
// Watchdog timer enabled/disabled by user software
#endif
/****************************************************************************************
* Sequence d'initialisation du système (attention à l'ordre d'exécution!)
****************************************************************************************/
void Setup_Hardware(void)
{
    /* Setup frequency
     * Fréquence d'entrée : résonateur XT 10 MHz
     * Frèquence des cycles d'instructions (FCY) : 40 MIPS */
    CLKDIVbits.PLLPRE = 0;    // N1 = 2
    PLLFBDbits.PLLDIV = 30;   // M = 32
    CLKDIVbits.PLLPOST = 0;   // N2 = 2

    // Setup Pin
    Setup_Pin_19();
    Setup_Pin_20();
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

    RESET_ARM();

    Setup_LED();
    Setup_Switch();

    LCD_Setup();
    Motor_Setup();
    Setup_Odometry();

    ADC_On();
	Initialize_UART1();
    Initialize_LIDAR();

}

/****************************************************************************************
* Séquence au démarrage du système
****************************************************************************************/
void Sequence_Initiale(void)
{
    char i;

    LCD_Line(1);
    LCD_Text("MECAPITRONIC GR2023",LCD_NB_CHARS);
    LCD_Line(2);
    LCD_Text("PILOT version:",LCD_NB_CHARS);
    LCD_Line(3);
    LCD_Text(__DATE__,12);
    LCD_Text(__TIME__,8);
    LCD_Line(4);
    LCD_Text("By BUREL-ARENOU",LCD_NB_CHARS);

    for(i=0; i<5; i++)
    {
        LED = !LED;
        Delay_Ms(100);
    }
    LED = ON;
    Delay_S(1);
    LED = OFF;
    LCD_Clear();
}



