/****************************************************************************************
* File        : I2C message.c
* Description : Functions for I2C message protocole and slave mode handle
* Author      : Christopher BUREL
* Version     : 2015.07.01
* Compilation : MPLAB X IDE (v2.35), compiler XC16 (v1.24) Lite
****************************************************************************************/

/****************************************************************************************
* Includes
****************************************************************************************/
#include "PILOT_main.h"

/****************************************************************************************
* Variables
****************************************************************************************/
uint8 index = 0;

/****************************************************************************************
 * Interrupt Handle: I2C Module 1 (Slave Mode)
 ****************************************************************************************/
void __attribute__((__interrupt__, no_auto_psv)) _SI2C1Interrupt(void)
{
  uint8 data = 0;
  
  IFS1bits.SI2C1IF = 0;                             // Clear interrupt flag                 

  if (!I2C1STATbits.R_W)                              // Reception of data/address (Write) 
  {
    data = I2C1RCV;                                 // Read it !
    if (I2C1STATbits.D_A)                           // Data reception
    {
      index++;                                      // Increment data number
      // TODO: Read data/command from master...
      
    }
    else                                            // Address reception
    {
      index = 0;                                    // Initialize data number
    }
  }
  else                                                // Request to transmit/stop (Read)
  {
    if (!I2C1STATbits.D_A)                          // Address reception
    {
      index = 0;                                    // Initialize data number
    }
    if (!I2C1STATbits.ACKSTAT)                      // Data transmission request
    {
      // TODO: Write data response to master...
      
      index++;                                      // Increment data number
    }
  }
}


