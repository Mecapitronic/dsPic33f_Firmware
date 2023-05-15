/****************************************************************************************
 * Fichier     : Sharp.c
 * Description : Capteurs Infra Rouge de distance
 * Auteur      : Geoffroy ARENOU
 * Version     : 15/04/2014
 * Compilation : MPLAB X IDE (v2.05), compiler XC16 (v1.21) Lite
 ****************************************************************************************/

/****************************************************************************************
 * Includes
 ****************************************************************************************/
#include "Sharp.h"

/****************************************************************************************
 * Structures (déclaration)
 ****************************************************************************************/

/****************************************************************************************
 * Variables
 ****************************************************************************************/
float32 sharp[MAX_SHARP];

/****************************************************************************************
 * Initialisation des capteurs Sharp
 ****************************************************************************************/
void Initialize_Sharp(void) {
    int i = 0;
    for (i = 0; i < MAX_SHARP; i++) {
        sharp[i] = 0;
    }
}

/****************************************************************************************
 * Conversion Analogique de la distance en mm avec écrétage des valeures
 ****************************************************************************************/
void Update_Sharp(void) {
#ifdef SHARP_0
    /* Conversion Analogique en mm*/
    sharp[0] = COEF_A / (SHARP_0 - COEF_B);
    /* Ecrétage */
    if (sharp[0] > COEF_C || sharp[0] <= 1) {
        sharp[0] = COEF_C;
    }
#endif
#ifdef SHARP_1
    /* Conversion Analogique en mm*/
    sharp[1] = COEF_A / (SHARP_1 - COEF_B);
    /* Ecrétage */
    if (sharp[1] > COEF_C || sharp[1] <= 1) {
        sharp[1] = COEF_C;
    }
#endif
}

boolean PresenceBalles()
{
    return (sharp[0]<84 || sharp[1]<76);
}

void Display_Sharp(int line) {
    LCD_Line(line);
    LCD_Value(sharp[0], 4, 0);
    LCD_Text("  ", 2);
    LCD_Value(sharp[1], 4, 0);
    
    LCD_Text("  ", 2);
    if(sharp[0]<84 || sharp[1]<76)
        LCD_Text("OK", 2);
    else
        LCD_Text("  ", 2);
    LCD_Text("  ", 2);
}

// SHARP 0 balles 63 < présence < 0 < incertitude < 94 < absence
// SHARP 1 balles 57 < présence < 0 < incertitude < 85 < absence 