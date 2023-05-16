/****************************************************************************************
* Fichier     : ADC_module.h
* Description : Routines li�s aux p�riph�riques analogiques
* Auteur      : Christopher BUREL
* Version     : 19/07/2013
* Compilation : MPLAB X IDE (v1.85), compiler XC16 (v1.11) Lite
****************************************************************************************/

#ifndef ADC_MODULE_H
#define ADC_MODULE_H

/****************************************************************************************
* Includes
****************************************************************************************/
#include "LIBRARY_module.h"

/****************************************************************************************
* Param�tres
****************************************************************************************/
#define ADC_CHANNEL     AD1CHS0bits.CH0SA
#define ADC_BUFFER      ADC1BUF0

/****************************************************************************************
* Macros
****************************************************************************************/
#define ADC_On()                {AD1CON1bits.ADON = 1;}
#define ADC_Start_Sampling()    {AD1CON1bits.SAMP = 1;}
#define ADC_Stop_Sampling()     {AD1CON1bits.SAMP = 0;}
#define ADC_Clear_Int_Flag()    {IFS0bits.AD1IF = 0;}
#define ADC_Wait_Sampling()     {Nop();Nop();Nop();Nop();Nop();}
#ifdef _VISUAL_STUDIO
#define ADC_Wait_Conversion()   {while(0);}
#else
#define ADC_Wait_Conversion()   {while(!IFS0bits.AD1IF);}
#endif

/****************************************************************************************
* Prototypes fonctions
****************************************************************************************/
// Read an ADC channel
uint16 ADC_Read(unsigned int);


#endif /* ADC_MODULE_H */

