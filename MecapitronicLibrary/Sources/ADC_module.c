/****************************************************************************************
* Fichier     : ADC_module.c
* Description : Conversion analogique/numérique
* Auteur      : Christopher BUREL
* Version     : 23/06/2013
* Compilation : MPLAB X IDE (v1.85), compiler XC16 (v1.11) Lite
****************************************************************************************/

/****************************************************************************************
* Includes
****************************************************************************************/
#include "../Includes/ADC_module.h"

/****************************************************************************************
* Routine de lecture d'un canal ADC
****************************************************************************************/
uint16 ADC_Read(unsigned int channel)
{
    ADC_CHANNEL = channel;	// select the input channel to be converted
    ADC_Start_Sampling();	// start sampling
    ADC_Wait_Sampling();        // wait the required acquisition time
    ADC_Clear_Int_Flag();	// clear ADC interrupt flag
    ADC_Stop_Sampling();	// stop sampling, start conversion
    ADC_Wait_Conversion();	// wait for ADC conversion complete
    return(ADC_BUFFER);         // read A/D result buffer
} // end ADC_Read()


