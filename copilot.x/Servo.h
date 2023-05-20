/****************************************************************************************
 * Fichier     : Servo.h
 * Description : Gestion des servomoteurs.
 * Auteur      : Christopher BUREL
 * Version     : 2015.03.25
 * Compilation : MPLAB X IDE (v2.35), compiler XC16 (v1.24) Lite
 ****************************************************************************************/

#ifndef SERVO_H
#define	SERVO_H

/****************************************************************************************
 * Includes
 ****************************************************************************************/
#include "COPILOT_main.h"

/****************************************************************************************
 * Configuration des servomoteurs
 ****************************************************************************************/
// Nombre max de servo utilisé
#define NBR_SERVO       4
// Coefficient de conversion de position angulaire [°] => durée d'impulsion [µs]
#define COEF_SERVO      10//11.11
// Durée d'impulsion [µs] de référence => position 0°
#define OFFSET_SERVO    1500
// Durée d'impulsion max
#define MAX_SERVO       2900
// Durée d'impulsion min
#define MIN_SERVO       100

// Valeur d'angle "arbitraire" pour mettre le servo en roue libre
#define SERVO_OFF       360

// Paramètres de mouvement (par rapport à la durée d'impulsion, et non l'angle des servos)
// servo 1
#define S1_VIT    40
#define S1_ACC    5
#define S1_JERK   1
// servo 2
#define S2_VIT    40
#define S2_ACC    5
#define S2_JERK   1
// servo 3
#define S3_VIT    40
#define S3_ACC    5
#define S3_JERK   1
// servo 4
#define S4_VIT    40
#define S4_ACC    15
#define S4_JERK   5
// servo 5
#define S5_VIT    40
#define S5_ACC    15
#define S5_JERK   5
// servo 6
#define S6_VIT    50
#define S6_ACC    20
#define S6_JERK   5

/****************************************************************************************
 * Fonctions prototypes
 ****************************************************************************************/
void Actualiser_Servo(void);
void Set_Servo(uint8 servoID, int16 angle);
int16 Get_Servo(uint8 servoID);
boolean Check_Servo(uint8 servoID);
void Init_Servo(uint8 servoID, int16 vit, int16 acc, int8 jerk);
void Init_All_Servo(void);
void Rotation_Tourelle(void);

void Mode_Test_Servo(void);


#endif	/* SERVO_H */

