/****************************************************************************************
 * Fichier     : Power.c
 * Description : Gestion de l'alimentation (tension, arrêt d'urgence)
 * Auteur      : Christopher BUREL
 * Version     : 07/09/2014
 * Compilation : MPLAB X IDE (v2.05), compiler XC16 (v1.11) Lite
 ****************************************************************************************/

/****************************************************************************************
 * Includes
 ****************************************************************************************/
#include "Power.h"

/****************************************************************************************
 * Variables
 ****************************************************************************************/
float32 tension = 0;
uint8 low_bat_timeout = 0;
uint8 special_char = 5;
boolean BAU_flag = OFF;
boolean flashing_flag = OFF;

/****************************************************************************************
 * Fonction de gestion de la partie alimentation
 ****************************************************************************************/
void Gestion_Power(void)
{
  // Tension d'alimentation
  tension = PWR_VOLTAGE;
  BAU_flag = OFF;

  if (tension < SEUIL_TENSION_BAU) // Bouton d'arrêt d'urgence
  {
    low_bat_timeout = 0;
    BAU_flag = ON;
    //RELAY = OFF;
  }
  else if (tension < SEUIL_TENSION_CRITIQUE) // Low Battery
  {
    low_bat_timeout += TE;
    if (low_bat_timeout > TIMEOUT_LOW_BAT)
    {
      low_bat_timeout = 0;
      special_char = 0;
    }
  }
  else if (tension < SEUIL_TENSION_20_POURCENT) 
  {
    low_bat_timeout = 0;
    special_char = 1;
  }
  else if (tension < SEUIL_TENSION_40_POURCENT) 
  {
    low_bat_timeout = 0;
    special_char = 2;
  }
  else if (tension < SEUIL_TENSION_60_POURCENT)
  {
    low_bat_timeout = 0;
    special_char = 3;
  }
  else if (tension < SEUIL_TENSION_80_POURCENT)
  {
    low_bat_timeout = 0;
    special_char = 4;
  }
  else // Battery Full
  {
    low_bat_timeout = 0;
    special_char = 5;
  }

}

/****************************************************************************************
 * Fonction d'affichage de la partie alimentation
 ****************************************************************************************/
void Affichage_Power(void)
{
  flashing_flag = !flashing_flag;

  // Ligne 1, curseur 11
  LCD_Goto(1,11);

  // Symbole batterie
  if (special_char == 0)
  {
    // Symbole batterie faible clignotant + bip rapide
    if (flashing_flag)
    {
      LCD_Char(special_char);
    }
    else 
    {
      LCD_Text(" ",1);
    }
    // Bip 
    BUZZER = ON;
    Delay_Ms(10);
    BUZZER = OFF;
  }
  else 
  {
    LCD_Char(special_char);
  }

  // Tension batterie et BAU
  if (BAU_flag)
  {
    // Symbole BAU clignotant + bip lent
    if (flashing_flag)
    {
      LCD_Text("BAU!",4);
      // Bip
      BUZZER = ON;
      Delay_Ms(5);
      BUZZER = OFF;
    }
    else
    {
      LCD_Text("    ",4);
    }
  }
  else
  {
    LCD_Value(tension,2,1);
  }

}


