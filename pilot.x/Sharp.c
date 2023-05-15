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
 * Conversion Analogique de la distance en mm avec moyenne mobile et écrétage valeures
 ****************************************************************************************/
void Update_Sharp(void) {
#ifdef SHARP_1
    /* Conversion Analogique en mm*/
    sharp[0] = COEF_A / (SHARP_1 - COEF_B);
    /* Ecrétage */
    if (sharp[0] > 700 || sharp[0] <= 1) {
        sharp[0] = 700;
    }
#endif
#ifdef SHARP_2
    /* Conversion Analogique en mm*/
    sharp[1] = COEF_A / (SHARP_2 - COEF_B);
    /* Ecrétage */
    if (sharp[1] > 700 || sharp[1] <= 1) {
        sharp[1] = 700;
    }
#endif
}

void Display_Sharp(int line) {
    LCD_Line(line);
    LCD_Text("S1 ", 3);
    LCD_Value(sharp[0], 4, 0);
    LCD_Text(" S2 ", 4);
    LCD_Value(sharp[1], 4, 0);
}