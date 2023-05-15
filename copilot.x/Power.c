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
float32 courant = 0;
uint16 courant_max = 0;
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

  // Courant
  courant = BATTERY_CURRENT;
  if (courant < courant_max) courant_max = courant; // courant negatif ! => "<"

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
  LCD_Goto(1,12);
  // Tension batterie et BAU
  if (BAU_flag)
  {
    // Symbole BAU clignotant + bip court
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
  
  // Ligne 2, curseur 11
  LCD_Goto(2,11);
  // Mesure courant 
  // ACS712 (185mV/A): 775 = 2.5V = 0A ; -1.5V = -5A 
  if (courant_max < 775) 
    courant = (775 - courant_max)*0.01742;
  else 
    courant = 0;
  courant_max = 775; // reset
  // Alarme
  if (courant > 1.5) // bip long
  {
    if (flashing_flag)
    {
      BUZZER = ON;
      LCD_Text("A",1);
      // Affichage courant 
      LCD_Value(courant,2,1);
    }
    else 
    {
      BUZZER = OFF;
      LCD_Text("     ",5);
    }
  }
  else
  {
    BUZZER = OFF;
    if (flashing_flag)
    {
      LCD_Text("A",1);
    }
    else 
    {
      LCD_Text(" ",1);
    }
    // Affichage courant 
    LCD_Value(courant,2,1);
  }

  
  // Ligne 1, curseur 11
    LCD_Goto(1, 11);

    // Symbole batterie
  if (special_char == 0)
  {
    // Symbole batterie faible clignotant + bip continue
    if (flashing_flag)
    {
      //BUZZER = ON;
            LCD_Char(special_char);
    }
    else 
    {
      //BUZZER = OFF;
            LCD_Text(" ", 1);
        }
        // Bip 
        BUZZER = ON;
//    Delay_Ms(10);
//    BUZZER = OFF;
  }
  else 
  {
        BUZZER = OFF;
        LCD_Char(special_char);
    }

}


