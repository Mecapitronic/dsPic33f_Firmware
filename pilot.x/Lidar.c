/****************************************************************************************
 * Fichier     : Lidar.c
 * Description : Gestion du LIDAR (UART 2)
 * Auteur      : Christopher BUREL
 * Version     : 2017.02.02
 * Compilation : MPLAB X IDE (v3.45), compiler XC16 (v1.26) Lite
 ****************************************************************************************/

/****************************************************************************************
 * Includes
 ****************************************************************************************/
#include "Lidar.h"

/****************************************************************************************
 * Variables
 ****************************************************************************************/
// UART2
uint16 lidar_distance_cm[LIDAR_MAX_SENSOR];  // distance receive from LIDAR
float32 lidar_robot_deg[LIDAR_MAX_SENSOR];    // robot orientation for reference
uint8 U2_index = 0;
uint8 U2_data = 0;
boolean U2_start = FALSE;

/****************************************************************************************
 * Interrupt UART2 RX
 ****************************************************************************************/
void __attribute__((__interrupt__, no_auto_psv)) _U2RXInterrupt(void)
{
  if (U2STAbits.URXDA == 1) // RX buffer has data
  {
    U2_data = U2RXREG;

    // first data => start condition + sensor index
    if (U2_start == FALSE) 
    {
      if ((U2_data >= 0xF0) && (U2_data <= 0xF9))
      {
        U2_index = U2_data & 0x0F;
        U2_start = TRUE;
      }
    }
    else // second data => distance value
    {
      if ((U2_data > LIDAR_CM_MIN) && (U2_data < LIDAR_CM_MAX))
      {
        lidar_distance_cm[U2_index] = U2_data;
        lidar_robot_deg[U2_index] = robot.deg;
      }
      U2_start = FALSE;
    }
  }
  
  IFS1bits.U2RXIF = 0; // clear interrupt flag
}

/****************************************************************************************
 * Interrupt UART2 Error
 ****************************************************************************************/
void __attribute__((__interrupt__, no_auto_psv)) _U2ErrInterrupt(void)
{
  U2_start = FALSE;
  U2STAbits.PERR = 0;
  U2STAbits.FERR = 0;
  U2STAbits.OERR = 0;
  IFS4bits.U2EIF = 0; // clear interrupt flag
}

/****************************************************************************************
 * Initialize UART2 for LIDAR
 ****************************************************************************************/
void Initialize_LIDAR(void)
{
  Reset_Distance_LIDAR();
  U2_index = 0;
	U2_start = FALSE;
  
  Setup_UART2_RX_Pin();
  Setup_UART2_TX_Pin();

  U2MODEbits.STSEL = 0; // 1-stop bit
  U2MODEbits.PDSEL = 0; // 8-bit data, no parity
  U2MODEbits.ABAUD = 0; // Autobaud Disabled
  U2MODEbits.BRGH = 0; // Low Speed mode
	U2BRG = (U2_FCY/U2_BAUD)/16 - 1; // baud rate setting  
  
  U2STAbits.URXISEL = 0; // Interrupt after one RX character is received;
  IPC7bits.U2RXIP = 4; //UART2 RX interrupt priority, mid-range
  IPC16bits.U2EIP = 5; //UART2 error priority set higher
  IEC4bits.U2EIE = 1; // enable error interrupt
	IEC1bits.U2RXIE = 1; // enable RX interrupt
  
	U2MODEbits.UARTEN = 1; // Enable UART
	//U2STAbits.UTXEN = 1; 
}


/****************************************************************************************
 * Get distance from LIDAR sensor in mm
 ****************************************************************************************/
uint16 Get_Distance_LIDAR(uint8 sensorID)
{
  if ((lidar_distance_cm[sensorID] <= LIDAR_CM_MIN)||(lidar_distance_cm[sensorID] >= LIDAR_CM_MAX))
    return (LIDAR_CM_MAX * 10);

  return (lidar_distance_cm[sensorID] * 10);
}

/****************************************************************************************
 * Get angle position of LIDAR sensor in degree
 ****************************************************************************************/
float32 Get_Angle_LIDAR(uint8 sensorID)
{
  float32 angle_deg = sensorID * 20;  // 20 degrees field of view per sensor
  angle_deg += (lidar_robot_deg[sensorID] - 90);   // compensation of robot orientation
  
  return angle_deg; 
}

/****************************************************************************************
 * Reset distance data of LIDAR => must be call to erase ghost obstacle !
 ****************************************************************************************/
void Reset_Distance_LIDAR(void)
{
  uint8 i;
  for (i=0; i<LIDAR_MAX_SENSOR; i++)
  {
    lidar_distance_cm[i] = LIDAR_CM_MAX;
  }
}
