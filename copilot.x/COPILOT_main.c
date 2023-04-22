/****************************************************************************************
 * Fichier     : COPILOT_main.c
 * Description : Code principal du COPILOT
 * Auteur      : Christopher BUREL
 * Version     : 2015.05.09
 * Compilation : MPLAB X IDE (v2.35), compiler XC16 (v1.24) Lite
 ****************************************************************************************/

/****************************************************************************************
* Includes
****************************************************************************************/
#include "COPILOT_main.h"

/****************************************************************************************
* Variables
****************************************************************************************/
uint8 main_mode = 0;  // Mode de fonctionnement

/****************************************************************************************
* Routine Principale
****************************************************************************************/
int main(void)
{
  // Initialisation hardware
  Setup_Hardware();

  // Définition des caractères spéciaux
  LCD_SetCustomChar(0,CHAR_BATTERY_LOW);
  LCD_SetCustomChar(1,CHAR_BATTERY_20);
  LCD_SetCustomChar(2,CHAR_BATTERY_40);
  LCD_SetCustomChar(3,CHAR_BATTERY_60);
  LCD_SetCustomChar(4,CHAR_BATTERY_80);
  LCD_SetCustomChar(5,CHAR_BATTERY_FULL);

  Sequence_Initiale();

  // Choix du mode de fonctionnement au démarrage (SW1 appuyé en mode TEST)
  main_mode = Selection_Main_Mode(0);  // Mode par défaut

  // Initialisation des actionneurs
  Init_All_Servo();

  // Initialisation timer
  Setup_Timer_Primaire();
  Set_Timer_Primaire(ON);
  
  Setup_Timer_Secondaire();
  Set_Timer_Secondaire(ON);

  Init_All_Action();


  while(FOREVER)
  {
    // Mode de fonctionnement
    switch(main_mode) 
    {
      case 0:
        Gestion_Action(); // Match
        break;

      case 1:
        Mode_Test_Servo();
        break;

      case 2:
        Mode_Test_Action();
        break;

    default:
      Gestion_Action(); // Match
      break;
    }

  }

  return EXIT_OK;
}

/****************************************************************************************
* Sélection du mode de fonctionnement
****************************************************************************************/
uint8 Selection_Main_Mode(uint8 initial_mode)
{
  uint8 mode = initial_mode;
  // Si mode TEST et SW1 appuyé
  if(SW1&&(MODE==MODE_TEST))
  {
    BUZZER = ON;
    LCD_Line(1);
    LCD_Text("SELECTION MODE",16);
    while(SW1);
    BUZZER = OFF;
    LCD_Line(2);
    LCD_Text("SW1:OK SW2+ SW3-",16);
    LCD_Line(1);
    LCD_Text("MAIN MODE = ",16);
    LCD_Goto(1,12);
    LCD_Value(mode,3,0);

    while(!SW1)
    {
      if(SW2)
      {
        BUZZER = ON;
        mode++;
        LCD_Goto(1,12);
        LCD_Value(mode,3,0);
        BUZZER = OFF;
        Delay_Ms(200);
        if(SW2) Delay_Ms(300);
      }
      if(SW3)
      {
        BUZZER = ON;
        mode--;
        LCD_Goto(1,12);
        LCD_Value(mode,3,0);
        BUZZER = OFF;
        Delay_Ms(200);
        if(SW3) Delay_Ms(300);
      }
    }
    BUZZER = ON;
    LCD_Clear();
  }
  BUZZER = OFF;
  return mode;
}

