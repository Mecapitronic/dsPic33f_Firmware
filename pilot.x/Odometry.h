/****************************************************************************************
* Fichier     : Odometry.h
* Description : Localisation du robot par odométrie.
* Auteur      : Christopher BUREL
* Version     : 2017.05.22
* Compilation : MPLAB X IDE (v3.45), compiler XC16 (v1.26) Lite
 ****************************************************************************************/

#ifndef ODOMETRY_H
#define	ODOMETRY_H

/****************************************************************************************
 * Includes
 ****************************************************************************************/
#include "PILOT main.h"

/****************************************************************************************
 * Paramètres d'odométrie
 ****************************************************************************************/
// Coefficient multiplicateur logiciel pour plus de précision dans les calculs en entier
#define COEF_MULTIPLICATOR  8

// Coefficients dépendants des roues codeuses => à ajuster expérimentalement
#define COEF_MM   463.4       // [step/mm] (lié au diamètre des roues codeuses)
#define COEF_RAD  104613    // [step/rad] (lié à l'entraxe des roues codeuses)
#define COEF_DEG  (RAD_TO_DEG(COEF_RAD))      // [step/°] (COEF_RAD * RAD_TO_DEG)

// Macro de conversion
#define MM_TO_STEP(mm)      ((mm) * COEF_MM)
#define RAD_TO_STEP(rad)    ((rad) * COEF_RAD)
#define DEG_TO_STEP(deg)    ((deg) * COEF_DEG)

#define STEP_TO_MM(step)    ((step) / COEF_MM)
#define STEP_TO_RAD(step)   ((step) / COEF_RAD)
#define STEP_TO_DEG(step)   ((step) / COEF_DEG)

// Choix de l'approximation pour le calcul des coordonnées (lineaire par défaut)
#define APPROX_CIRCULAR

/****************************************************************************************
 * Configuration des encodeurs
 ****************************************************************************************/
#define ENCODER_RIGHT       POS2CNT     // QEI2 counter
#define ENCODER_LEFT        POS1CNT     // QEI1 counter
#define ENCODER_INIT        32768     // initial encoder value
#define Setup_Max_Encoder() {MAX1CNT = 65535; MAX2CNT = 65535;}
// Peripheral Pin: QEI1A = RP20, QEI1B = RP21, QEI2A = RP25, QEI2B = RP24
#define Setup_QEI_Pin()     {RPINR14bits.QEA1R = 20; \
                             RPINR14bits.QEB1R = 21; \
                             RPINR16bits.QEA2R = 25; \
                             RPINR16bits.QEB2R = 24;}
// Mode x4 avec reset sur MAXxCNT, inverser direction QEI1
#define Setup_QEI_Mode()    {QEI1CONbits.QEIM = 7/*0b111*/; QEI2CONbits.QEIM = 7/*0b111*/; \
                             QEI1CONbits.SWPAB = 1; QEI2CONbits.SWPAB = 0;}

/****************************************************************************************
 * Globales Structures
 ****************************************************************************************/
extern t_robot robot;

/****************************************************************************************
 * Functions Prototypes
 ****************************************************************************************/
void Update_Encoder(void);
void Setup_Odometry(void);
void Initialize_Robot_Position(int32 x_mm, int32 y_mm, float32 a_deg);
void Update_Odometry(void);


#endif	/* ODOMETRY_H */

