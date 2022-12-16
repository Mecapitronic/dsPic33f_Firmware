/****************************************************************************************
* File        : I2C_module.c
* Description : Functions for I2C communication
* Author      : Christopher BUREL
* Version     : 2015.07.01
* Compilation : MPLAB X IDE (v2.35), compiler XC16 (v1.24) Lite
****************************************************************************************/

/****************************************************************************************
* Includes
****************************************************************************************/
#include "../Includes/I2C_module.h"

/****************************************************************************************
* Variables
****************************************************************************************/
uint32 timeout_i2c = 0;

/****************************************************************************************
* Function: Configuration of I2C_module
****************************************************************************************/
void I2C_Init(uint16 frequency, uint8 slave_address)
{
  I2C1CONbits.I2CEN = 0;                        // Disable I2C_module
  I2C_Int_Slave(OFF);                           // Disable Interrupt
  I2C_Int_Master(OFF);
  
  I2C1BRG = frequency;                          // Set baud rate generator (master mode)
  I2C1ADD = slave_address;                      // Set slave address (slave mode)
  
  I2C1CONbits.STREN = 0;                        // Disable clock stretching
  I2C1CONbits.SCLREL = 1;
  I2C1CONbits.A10M = 0;                         // 7-bit slave address
  
  if (frequency == I2C_400_KHZ) 
    I2C1CONbits.DISSLW = 0;                     // Slew rate control enabled for 400kHz
  else
    I2C1CONbits.DISSLW = 1;                     // Slew rate control disabled for 100kHz
    
  I2C_Int_Slave(ON);                            // Enable Interrupt
  //I2C_Int_Master(ON);
  I2C1CONbits.I2CEN = 1;                        // Enable I2C_module
} 

/****************************************************************************************
* Function: Wait Idle state
****************************************************************************************/
void I2C_Wait_Idle()
{ 
  Set_Timeout_I2C(I2C_TIME_LIMIT);
  while((I2C1CON & 0x1F) && !TIMEOUT_I2C);    // Wait Master logic inactive
}

/****************************************************************************************
* Function: Initiate Start
****************************************************************************************/
void I2C_Start()
{
  Set_Timeout_I2C(I2C_TIME_LIMIT);          
  while(!I2C1STATbits.P && !TIMEOUT_I2C);     // Wait last bit is Stop
  
  I2C1CONbits.SEN = 1;                        // Enable Start condition
}

/****************************************************************************************
* Function: Initiate Repeated Start
****************************************************************************************/
void I2C_Restart()
{
  I2C_Wait_Idle();                            // Wait idle state
  I2C1CONbits.RSEN = 1;                       // Enable Repeated Start condition
}

/****************************************************************************************
* Function: Initiate Stop
****************************************************************************************/
void I2C_Stop()
{
  I2C_Wait_Idle();                            // Wait idle state
  I2C1CONbits.PEN = 1;                        // Enable Stop condition
}

/****************************************************************************************
* Function: Write data/address byte
****************************************************************************************/
boolean I2C_Write(uint8 byte)
{
  I2C_Wait_Idle();                            // Wait idle state
  I2C1TRN = byte;                             // Transmit byte
  
  Set_Timeout_I2C(I2C_TIME_LIMIT);          
  while(I2C1STATbits.TRSTAT && !TIMEOUT_I2C); // Wait transmit and acknowledge
  
  return (!I2C1STATbits.ACKSTAT);             // Return '1' if transmission is acknowledged
}

/****************************************************************************************
* Function: Read data byte, ending by ACK (ack = 1) or NACK (ack = 0)
****************************************************************************************/
uint8 I2C_Read(boolean ack)
{
  uint8 data = 0;

  I2C_Wait_Idle();                            // Wait idle state
  I2C1CONbits.RCEN = 1;                       // Enable Receive
  
  Set_Timeout_I2C(I2C_TIME_LIMIT);          
  while(!I2C1STATbits.RBF && !TIMEOUT_I2C);   // Wait Receive Buffer Full
  
  data = I2C1RCV;                             // Read data received
  
  if (ack) 
    I2C1CONbits.ACKDT = 0;                    // Set acknowledge to ACK or NACK 
  else     
    I2C1CONbits.ACKDT = 1;
    
  I2C_Wait_Idle();                            // Wait idle state
  I2C1CONbits.ACKEN = 1;                      // Send acknowledge
  
  return data;
}



