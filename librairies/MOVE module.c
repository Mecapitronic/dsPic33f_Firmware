/****************************************************************************************
* Fichier     : MOVE module.c
* Description : Motion filter.
* Auteur      : Christopher BUREL
* Version     : 2016.11.27
* Compilation : MPLAB X IDE (v3.45), compiler XC16 (v1.26) Lite
****************************************************************************************/

/****************************************************************************************
* Includes
****************************************************************************************/
#include "../Includes/MOVE module.h"

/****************************************************************************************
* Variables
****************************************************************************************/
//uint16 t = 0;

/****************************************************************************************
* Filter the motion setpoint to get trapezoidal acceleration command
****************************************************************************************/
void MOVE_Filter(t_move *m, t_motion *real)
{
  // Local variable
  int16 setpoint_velocity = m->setpoint.speed_max;
  int32 setpoint_acceleration = m->setpoint.acceleration;
  int32 pivot_position = 0;
  int16 pivot_velocity = 0;
  
  if (setpoint_acceleration != 0) // check zero division
  {
  // Position pivot (vf^2-v0^2)/2a0
    /*pivot_position = ((int32)m->setpoint.speed_min * (int32)m->setpoint.speed_min);
    pivot_position -= ((int32)m->command.velocity * (int32)m->command.velocity);
    pivot_position = ABS(pivot_position) / (2 * setpoint_acceleration);
    pivot_position += ((int32)ABS(m->command.velocity) * setpoint_acceleration) / (2 * (int32)m->setpoint.jerk);*/
    //pivot_position += (int32)ABS(m->command.velocity) + (int32)m->command.acceleration;
    // considering real velocity
    pivot_position = ((int32)m->setpoint.speed_min * (int32)m->setpoint.speed_min);
    pivot_position -= ((int32)real->velocity * (int32)real->velocity);
    pivot_position = ABS(pivot_position) / (2 * setpoint_acceleration);
    pivot_position += ((int32)ABS(real->velocity) * setpoint_acceleration) / (2 * (int32)m->setpoint.jerk);
  }
  else
  {
    // todo
  }
  
  // Changement velocity
  if (ABS(m->setpoint.position - m->command.position) <= pivot_position)
  {
    setpoint_velocity = m->setpoint.speed_min;
  }

  // Inversion velocity
  if (m->setpoint.position < m->command.position)
  {
    setpoint_velocity = -setpoint_velocity;
  }
  
  // velocity pivot
  //pivot_velocity = ((int16)m->command.acceleration * (int16)m->command.acceleration) / (2 * (int16)m->setpoint.jerk);
  pivot_velocity = ABS((int16)real->acceleration * (int16)real->acceleration) / (2 * (int16)m->setpoint.jerk);
  
  
  // Changement acceleration
  if (ABS(setpoint_velocity - m->command.velocity) <= pivot_velocity)
  {
    setpoint_acceleration = 0;
  }
  
  // Acceleration
  if (m->command.acceleration < setpoint_acceleration)
  {
    m->command.acceleration += m->setpoint.jerk;
    if (m->command.acceleration > setpoint_acceleration)
    {
      m->command.acceleration = setpoint_acceleration;
    }
  }
  else if (m->command.acceleration > setpoint_acceleration)
  {
    m->command.acceleration -= m->setpoint.jerk;
    if (m->command.acceleration < setpoint_acceleration)
    {
      m->command.acceleration = setpoint_acceleration;
    }
  }
  
  // velocity
  if (m->command.velocity < setpoint_velocity)
  {
    m->command.velocity += m->command.acceleration;
    if (m->command.velocity > setpoint_velocity)
    {
      m->command.velocity = setpoint_velocity;
    }
  }
  else if (m->command.velocity > setpoint_velocity)
  {
    m->command.velocity -= m->command.acceleration;
    if (m->command.velocity < setpoint_velocity)
    {
      m->command.velocity = setpoint_velocity;
    }
  }

//#define ASSERV_2
#ifndef ASSERV_2
  // Position
  if (m->command.position < m->setpoint.position)
  {
    m->command.position += m->command.velocity;
    if (m->command.position > m->setpoint.position)
    {
      m->command.position = m->setpoint.position;
    }
  }
  else if (m->command.position > m->setpoint.position)
  {
    m->command.position += m->command.velocity; // plus
    if (m->command.position < m->setpoint.position)
    {
      m->command.position = m->setpoint.position;
    }
  }
#else
  // Position
  if (m->command.position < m->setpoint.position)
  {
    m->command.position = real->position + m->command.velocity;
    if (m->command.position > m->setpoint.position)
    {
      m->command.position = m->setpoint.position;
    }
  }
  else if (m->command.position > m->setpoint.position)
  {
    m->command.position = real->position - m->command.velocity;
    if (m->command.position < m->setpoint.position)
    {
      m->command.position = m->setpoint.position;
    }
  }
#endif

//#ifdef SERIAL_PRINT
//  t++;
//  printf("%d;%ld;%ld;%d;%d;%ld;%d;%ld;%d \n" , t, (m->setpoint.position), (m->command.position), setpoint_velocity, (m->command.velocity), setpoint_acceleration, m->command.acceleration, pivot_position, pivot_velocity);
//#endif

}

/****************************************************************************************
* Initialize setpoint and command
****************************************************************************************/
void MOVE_Initialize(t_move *m)
{
  m->command.position = 0;
  m->command.velocity = 0;
  m->command.acceleration = 0;
  m->setpoint.position = 0;
  m->setpoint.speed_max = 0;
  m->setpoint.speed_min = 0;
  m->setpoint.acceleration = 0;
  m->setpoint.jerk = 0;
}

/****************************************************************************************
* Setup all setpoint parameters
****************************************************************************************/
void MOVE_Setpoint(t_move *m, int32 pos, int16 speed_max, int16 speed_min, int16 acc, int8 jerk)
{
  m->setpoint.position = pos;
  m->setpoint.speed_max = speed_max;
  m->setpoint.speed_min = speed_min;
  m->setpoint.acceleration = acc;
  m->setpoint.jerk = jerk;
}

/****************************************************************************************
* Setup position setpoint
****************************************************************************************/
void MOVE_Setpoint_Position(t_move *m, int32 position)
{
  m->setpoint.position = position;
}

/****************************************************************************************
* Setup speed max and min setpoint
****************************************************************************************/
void MOVE_Setpoint_Speed(t_move *m, int16 speed_max, int16 speed_min)
{
  m->setpoint.speed_max = speed_max;
  m->setpoint.speed_min = speed_min;
}

/****************************************************************************************
* Return OK if position setpoint is reached
****************************************************************************************/
boolean MOVE_Check_Position(t_move *m)
{
  return ((m->command.position == m->setpoint.position) ? OK : NOK);
}

/****************************************************************************************
* Fonction de test de filtrage de consigne
****************************************************************************************/
/*#ifdef SERIAL_PRINT
void MOVE_Test_Filter(void)
{
//  uint32 t = 0;
  t_move lin;

  MOVE_Initialize(&move_lin);

  MOVE_Setpoint(&move_lin, -20000, 1078, 1078, 19, 2);

  printf("t;setpoint.position;command.position;obj_vit;command.velocity;obj_acc;command.acceleration;pivot_position;pivot_velocity\n");

  while(lin.setpoint.position != lin.command.position)
  {
    MOVE_Filter(&move_lin);
  }

  MOVE_Setpoint_Position(&move_lin, -40000);

  while(lin.setpoint.position != lin.command.position)
  {
    MOVE_Filter(&move_lin);
  }

  MOVE_Setpoint_Position(&move_lin, -70000);

  while(lin.setpoint.position != lin.command.position)
  {
    MOVE_Filter(&move_lin);
  }

  MOVE_Setpoint_Position(&move_lin, -90000);

  while(lin.setpoint.position != lin.command.position)
  {
    MOVE_Filter(&move_lin);
  }

  MOVE_Setpoint_Position(&move_lin, -120000);

  while(lin.setpoint.position != lin.command.position)
  {
    MOVE_Filter(&move_lin);
  }

  MOVE_Setpoint_Position(&move_lin, 70000);
  MOVE_Setpoint_Speed(&move_lin, 1078, 0);

  while(lin.setpoint.position != lin.command.position)
  {
    MOVE_Filter(&move_lin);
  }

}
#endif
*/
