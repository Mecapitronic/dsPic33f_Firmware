/****************************************************************************************
* File        : I2C module.h
* Description : Functions for I2C communication
* Author      : Christopher BUREL
* Version     : 2015.07.01
* Compilation : MPLAB X IDE (v2.35), compiler XC16 (v1.24) Lite
****************************************************************************************/

#ifndef I2C_MODULE_H
#define I2C_MODULE_H

/****************************************************************************************
* Includes
****************************************************************************************/
#include "LIBRARY module.h"

/****************************************************************************************
* Configurations
****************************************************************************************/
// I2C pins (see also ALTI2C configuration bits) :   SDA1 => pin 1   ;   SCL1 => pin 44

// Slave address (7-bit mode)
#define I2C_ADD_PILOT       0x10
#define I2C_ADD_COPILOT     0x20
#define I2C_ADD_CMUCAM      0x30

// Frequency (for FCY = 40 MHz)
#define I2C_400_KHZ         0x05F
#define I2C_100_KHZ         0x18B

/****************************************************************************************
* Macros
****************************************************************************************/
// Interrupt enable (set x to ON/OFF)
#define I2C_Int_Slave(x)    do{IFS1bits.SI2C1IF = 0; IEC1bits.SI2C1IE = x;}while(0)
#define I2C_Int_Master(x)   do{IFS1bits.MI2C1IF = 0; IEC1bits.MI2C1IE = x;}while(0)

// Timeout in millisecond /!\ "current_time" variable must be define in project
#define Set_Timeout_I2C(time)   do{timeout_i2c = current_time + time;}while(0)
#define TIMEOUT_I2C             (current_time > timeout_i2c)
#define I2C_TIME_LIMIT          (1000)

/****************************************************************************************
* Prototypes fonctions
****************************************************************************************/
void I2C_Init(uint16 frequency, uint8 slave_address);


#endif /* I2C_MODULE_H */

