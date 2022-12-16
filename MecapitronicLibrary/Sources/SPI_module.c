/****************************************************************************************
* File        : SPI_module.c
* Description : Functions for SPI communication
* Author      : Christopher BUREL
* Version     : 2015.06.23
* Compilation : MPLAB X IDE (v2.35), compiler XC16 (v1.24) Lite
****************************************************************************************/

/****************************************************************************************
* Includes
****************************************************************************************/
#include "../Includes/SPI_module.h"

/****************************************************************************************
* Variables
****************************************************************************************/
uint32 timeout_spi = 0;

/****************************************************************************************
* Function: SPI_module 1 Configuration
****************************************************************************************/
void SPI_Init(boolean mode, uint8 frequency, boolean polarity, boolean phase, boolean data_size)
{
  SPI1STAT = 0x0;                             // Disable SPI_module     
  SPI1BUF = 0x0;                              // Clear Buffer
  IFS0bits.SPI1IF = 0;                        // Clear Interrupt Flag
  IEC0bits.SPI1IE = 0;                        // Disable Interrupt
  
  SPI1CON1 = 0x0 | frequency;                 // Set Clock Prescale (Master Mode)
  SPI1CON1bits.MODE16 = data_size;            // Set Word/Byte Communication
  SPI1CON1bits.CKE = phase;                   // Set Clock Edge (Phase)
  SPI1CON1bits.CKP = polarity;                // Set Clock Polarity
  SPI1CON1bits.MSTEN = mode;                  // Enable Master/Slave Mode
  
  if (mode == SPI_SLAVE) 
  {
    SPI1CON1bits.SSEN = 1;                    // Enable Slave Select (Slave Mode)
    SPI_SS_Setup();                           // Slave Select Input Pin
    SPI_SCK_IN_Setup();                       // Clock Input Pin
  }
  else
  {
    SPI_SCK_OUT_Setup();                      // Clock Output Pin
  }
  SPI_SDI_Setup();                            // Data Input Pin
  SPI_SDO_Setup();                            // Data Output Pin

  SPI1STAT = 0x8000;                          // Enable SPI_module
//  IFS0bits.SPI1IF = 0;                        // Clear Interrupt Flag
  if (mode == SPI_SLAVE) IEC0bits.SPI1IE = 1;                        // Enable Interrupt
} 

/****************************************************************************************
* Function: Single Data Transfer (Master Mode) /!\ Slave Select pin not managed here!
****************************************************************************************/
uint16 SPI_Transfer(uint16 data_out)
{
  uint16 data_in = 0;
  
  // Disable interrupt
//   IFS0bits.SPI1IF = 0;
//   IEC0bits.SPI1IE = 0;
  
  // Wait until TX buffer is clear
  Set_Timeout_SPI(SPI_TIME_LIMIT);
  while(SPI1STATbits.SPITBF && !TIMEOUT_SPI);
  
  // Clear RX buffer and overflow flag
  data_in = SPI1BUF;
  SPI1STATbits.SPIROV = 0;
//  Set_Timeout_SPI(SPI_TIME_LIMIT);
  while(SPI1STATbits.SPIRBF && !TIMEOUT_SPI);
  
  // Send data
  SPI1BUF = data_out;
//  Set_Timeout_SPI(SPI_TIME_LIMIT);
  while(!SPI1STATbits.SPIRBF && !TIMEOUT_SPI);
  
  // Read data received
  data_in = SPI1BUF;
  
  // Enable interrupt
//  IFS0bits.SPI1IF = 0;
//  IEC0bits.SPI1IE = 1;
  
  return data_in;
} 

/****************************************************************************************
* Function: Multiple Data Transfer (Master Mode) /!\ Slave Select pin not managed here!
****************************************************************************************/
void SPI_Transfer_Multiple(uint8 *data_out, uint8 *data_in, uint16 data_length)
{
  uint16 i;
  uint16 temp;
  
  // Disable interrupt
//   IFS0bits.SPI1IF = 0;
//   IEC0bits.SPI1IE = 0;
  
  // Wait until TX buffer is clear
  Set_Timeout_SPI(SPI_TIME_LIMIT);
  while(SPI1STATbits.SPITBF && !TIMEOUT_SPI);
  
  // Clear RX buffer and overflow flag
  temp = SPI1BUF;
  SPI1STATbits.SPIROV = 0;
//  Set_Timeout_SPI(SPI_TIME_LIMIT);
  while(SPI1STATbits.SPIRBF && !TIMEOUT_SPI);
  
  //  For each byte/word to write
  for (i = 0; i < data_length; i++)
  {
    uint16 data_tx = 0;
    uint16 data_rx = 0;

    if (data_out)
    {
      data_tx = data_out[i];
      if (SPI1CON1bits.MODE16 == SPI_16_BITS)
      {
        data_tx |= data_out[i+1] << 8;
      }
    }

    // Send data
    SPI1BUF = data_tx;
    Set_Timeout_SPI(SPI_TIME_LIMIT);
    while(!SPI1STATbits.SPIRBF && !TIMEOUT_SPI);
    
    // Read data received
    data_rx = SPI1BUF;

    if (data_in)
    {
      data_in[i] = data_rx;
    }
    
    // Increment for word communication
    if (SPI1CON1bits.MODE16 == SPI_16_BITS) i += 1;
  }
  
  // Enable interrupt
//  IFS0bits.SPI1IF = 0;
//  IEC0bits.SPI1IE = 1;

} 

/****************************************************************************************
 * Interrupt Handle: SPI_module 1 (Slave Mode) => To implement in project
 ****************************************************************************************/
/* void __attribute__((__interrupt__, no_auto_psv)) _SPI1Interrupt(void)
{
  // Clear interrupt flag
  IFS0bits.SPI1IF = 0;
  
  // Read data received
  int16 data_in = SPI1BUF; 
  
  // TODO...
  
} */


