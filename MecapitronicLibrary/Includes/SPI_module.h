/****************************************************************************************
* File        : SPI_module.h
* Description : Functions for SPI communication
* Author      : Christopher BUREL
* Version     : 2015.06.23
* Compilation : MPLAB X IDE (v2.35), compiler XC16 (v1.24) Lite
****************************************************************************************/

#ifndef SPI_MODULE_H
#define SPI_MODULE_H

/****************************************************************************************
* Includes
****************************************************************************************/
#include "LIBRARY_module.h"

/****************************************************************************************
* Macros
****************************************************************************************/
//#define SPI_Write_Copilot(x)

// Timeout in millisecond /!\ "current_time" variable must be define in project
#define Set_Timeout_SPI(time)   do{timeout_spi = current_time + time;}while(0)
#define TIMEOUT_SPI             (current_time > timeout_spi)
#define SPI_TIME_LIMIT          (1000)

/****************************************************************************************
* Configurations
****************************************************************************************/
//// Pin Setup => To define into project harware.h !
//// Output                                                                            pin
// #define SPI_SCK_OUT_Setup()    do{RPOR5bits.RP11R = 0x08;}while(0)   // SCK -> RP11 (9)
// #define SPI_SDO_Setup()        do{RPOR11bits.RP23R = 0x07;}while(0)  // SDO -> RP23 (3)
//// Input
// #define SPI_SCK_IN_Setup()     do{RPINR20bits.SCK1R = 11;}while(0)   // SCK <- RP11 (9)
// #define SPI_SDI_Setup()        do{RPINR20bits.SDI1R = 10;}while(0)   // SDI <- RP10 (8)
// #define SPI_SS_Setup()         do{RPINR21bits.SS1R = 22;}while(0)    // SS  <- RP22 (2)

// Mode
#define SPI_MASTER      1
#define SPI_SLAVE       0
// Frequency (for FCY = 40 MHz)
#define SPI_10_MHZ      0x1E
#define SPI_5_MHZ       0x1A
#define SPI_2500_KHZ    0x12
#define SPI_1250_KHZ    0x02
#define SPI_625_KHZ     0x1C
#define SPI_312500_HZ   0x18
#define SPI_156250_HZ   0x10
#define SPI_78125_HZ    0x00
// Data Size Communication Mode
#define SPI_8_BITS      0
#define SPI_16_BITS     1

/****************************************************************************************
* Prototypes functions
****************************************************************************************/
void SPI_Init(boolean mode, uint8 frequency, boolean polarity, boolean phase, boolean data_size);
uint16 SPI_Transfer(uint16 data_out);
void SPI_Transfer_Multiple(uint8 *data_out, uint8 *data_in, uint16 data_length);


#endif /* SPI_MODULE_H */

