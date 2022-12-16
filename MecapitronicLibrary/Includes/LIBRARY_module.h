/****************************************************************************************
 * Fichier     : LIBRARY_module.h
 * Description : Inclusion des fichiers de librairie, types et constantes globales.
 * Auteur      : Christopher BUREL
 * Version     : 2016.11.05
 * Compilation : MPLAB X IDE (v3.45), compiler XC16 (v1.26) Lite
 ****************************************************************************************/

#ifndef LIBRARY_MODULE_H
#define	LIBRARY_MODULE_H

/****************************************************************************************
* Includes
 ****************************************************************************************/
#ifdef _USRDLL
#include "dsPIC.h"
#else
#include "p33FJ128MC804.h"
#endif

#include "stdio.h"
#include "stdlib.h"

/****************************************************************************************
 * Types de données
 ****************************************************************************************/
// boolean (1 byte)
typedef unsigned char boolean;
// char (1 byte)
typedef signed char int8;
#define INT8_MIN 		(-128)
#define INT8_MAX 		(127)
typedef unsigned char uint8;
#define UINT8_MAX 		(255)
// int (2 bytes)
typedef signed int int16;
#define INT16_MIN 		(-32768)
#define INT16_MAX 		(32767)
typedef unsigned int uint16;
#define UINT16_MAX 		(65535U)
// long (4 bytes)
typedef signed long int int32;
#define INT32_MIN 		(-2147483648L)
#define INT32_MAX 		(2147483647L)
typedef unsigned long int uint32;
#define UINT32_MAX 		(4294967295UL)
// long long (8 bytes)
typedef signed long long int int64;
#define INT64_MIN               (-9223372036854775808LL)
#define INT64_MAX               (9223372036854775808LL)
typedef unsigned long long int uint64;
#define UINT64_MAX              (18446744073709551615ULL)
// float (4 bytes)
typedef float float32; // about 7 decimal digits
#define FLOAT32_MIN             (1.175494351E?38)           // 2e-126
#define FLOAT32_MAX             (3.402823466E38)            // 2e128
// double (8 bytes)
typedef double float64; // about 16 decimal digits
#define FLOAT64_MIN             (2.2250738585072014E?308)   // 2e-1022
#define FLOAT64_MAX             (1.7976931348623158E308)    // 2e1024
/* SUFFIXES :
 * u or U : unsigned
 * l or L : long
 * f or F or . : float
 * E : exponent
 */

/****************************************************************************************
 * Constantes Génériques
 ****************************************************************************************/
#define OK          1
#define NOK         0

#define	ON          1
#define	OFF         0

#define YES         1
#define NO          0

#define HIGH        1
#define LOW         0

#define TRUE        1
#define FALSE       0

#define FOREVER     1

#define EXIT_OK     0

#ifndef NULL
#define	NULL	   (0)
#endif

/****************************************************************************************
 * User Includes
 ****************************************************************************************/
#include "Structure.h"
#include "MATH_module.h"
#include "DELAY_module.h"
#include "ADC_module.h"
#include "LCD_HD44780_module.h"
#include "MOVE_module.h"
#include "PID_module.h"
//#include "SPI_module.h"
//#include "I2C_module.h"

#endif	/* LIBRARY_MODULE_H */

