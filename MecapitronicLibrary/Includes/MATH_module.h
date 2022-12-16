/****************************************************************************************
 * Fichier     : MATH_module.h
 * Description : Fonctions et constantes mathématiques.
 * Auteur      : Christopher BUREL
 * Version     : 2016.11.26
 * Compilation : MPLAB X IDE (v3.45), compiler XC16 (v1.26) Lite
 ****************************************************************************************/

#ifndef MATH_MODULE_H
#define	MATH_MODULE_H

/****************************************************************************************
 * Includes
 ****************************************************************************************/
#include "math.h"

/****************************************************************************************
 * Constantes
 ****************************************************************************************/
#define PI          (3.14159265)
#define TWO_PI      (6.28318530)  // 2*PI
#define SQRT_TWO    (1.41421356)  // racine carrée de 2

/****************************************************************************************
 * Fonctions
 ****************************************************************************************/
#define SIN(x)      sinf(x)
#define COS(x)      cosf(x)
#define ACOS(x)     acosf(x)
#define ABS(x)      ( ((x)<0) ? -(x) : (x) ) //fabsf(x)
#define MOD(x,m)    fmodf(x,m)
#define SQRT(x)     sqrtf(x)
#define ATAN2(y,x)  atan2f(y,x)

#define DEG_TO_RAD(deg)  ((deg) * 0.01745329)  // (PI / 180)
#define RAD_TO_DEG(rad)  ((rad) * 57.29577951) // (180 / PI)

#define SIGN(x)     ( ((x)>=0) ? 1 : -1) // retourne le signe d'une valeur

// Approximation de distance euclidienne /!\ dx et dy doivent être positif
#define Approx_Distance(dx,dy)  ( (dy<dx) ? (dx+(dy>>2)+(dy>>3)) : (dy+(dx>>2)+(dx>>3)) )

#ifndef max
#define max(a,b) (((a) > (b)) ? (a) : (b))
#endif

#ifndef min
#define min(a,b) (((a) < (b)) ? (a) : (b))
#endif

#endif	/* MATH_MODULE_H */

