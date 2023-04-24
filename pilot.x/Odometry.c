/****************************************************************************************
* Fichier     : Odometry.c
* Description : Localisation du robot par odométrie.
* Auteur      : Christopher BUREL
* Version     : 2017.05.22
* Compilation : MPLAB X IDE (v3.45), compiler XC16 (v1.26) Lite
 ****************************************************************************************/

/****************************************************************************************
 * Includes
 ****************************************************************************************/
#include "Odometry.h"

/****************************************************************************************
 * Variables
 ****************************************************************************************/
t_robot robot;

int32 ang_position_init = 0;  // position angulaire initiale
float32 orientation = 0;

int32 encoder_right = 0;
int32 encoder_left = 0;

int32 last_lin_position = 0;
int32 last_ang_position = 0;
int16 last_lin_velocity = 0;
int16 last_ang_velocity = 0;

int16 dx = 0;
int16 dy = 0;

/****************************************************************************************
 * Update encoder counter
 ****************************************************************************************/
void Update_Encoder(void)
{
  // Backup counter value and reset just after
  uint16 right = ENCODER_RIGHT;
  uint16 left = ENCODER_LEFT;
  ENCODER_RIGHT = ENCODER_INIT;
  ENCODER_LEFT = ENCODER_INIT;
  // Counter integration, with software amplification
  encoder_right += (right - ENCODER_INIT) * COEF_MULTIPLICATOR;
  encoder_left += (left - ENCODER_INIT) * COEF_MULTIPLICATOR;
}

/****************************************************************************************
 * Setup encoder and odometry
 ****************************************************************************************/
void Setup_Odometry(void)
{
  // Hardware setup
  Setup_QEI_Pin();
  Setup_QEI_Mode();
  Setup_Max_Encoder();
  // Counter setup
  ENCODER_RIGHT = ENCODER_INIT;
  ENCODER_LEFT = ENCODER_INIT;
  encoder_right = 0;
  encoder_left = 0;
}

/****************************************************************************************
 * Initialize robot odometry position 
 ****************************************************************************************/
void Initialize_Robot_Position(int32 x_mm, int32 y_mm, float32 angle_deg)
{
  Set_Asserv(OFF);
  Initialize_Asserv();
  robot.mm.x = x_mm;
  robot.mm.y = y_mm;
  robot.deg = angle_deg;
  
  robot.step.x = MM_TO_STEP(robot.mm.x);
  robot.step.y = MM_TO_STEP(robot.mm.y);
  robot.rad = DEG_TO_RAD(robot.deg);
  
  ang_position_init = RAD_TO_STEP(robot.rad);

  robot.lin.position = 0;
  robot.lin.velocity = 0;
  robot.lin.acceleration = 0;
  robot.ang.position = ang_position_init;
  robot.ang.velocity = 0;
  robot.ang.acceleration = 0;
  last_lin_position = 0;
  last_ang_position = ang_position_init;

  encoder_right = 0;
  encoder_left = 0;
  Set_Asserv(ON);
}

/****************************************************************************************
 * Update odometry with linear (or circular) approximation
 ****************************************************************************************/
void Update_Odometry(void)
{
  float32 coef_curvature = 1;
  float32 coef_ang_speed = 0;

  // Encoder acquisition
  Update_Encoder();

  // Old position
  last_lin_position = robot.lin.position;
  last_ang_position = robot.ang.position;
  
  // Old velocity
  last_lin_velocity = robot.lin.velocity;
  last_ang_velocity = robot.ang.velocity;

  // Current position
#ifdef SIMULATION_ENCODER
  robot.lin.position = move_lin.command.position;
  robot.ang.position = move_ang.command.position;
#else
  robot.lin.position = (encoder_right + encoder_left) / 2;
  robot.ang.position = ang_position_init + (encoder_right - encoder_left);
#endif

  // Current velocity (derivate from position)
  robot.lin.velocity = robot.lin.position - last_lin_position;
  robot.ang.velocity = robot.ang.position - last_ang_position;

  // Current acceleration (derivate from velocity)
  robot.lin.acceleration = robot.lin.velocity - last_lin_velocity;
  robot.ang.acceleration = robot.ang.velocity - last_ang_velocity;

  // Average orientation
  orientation = robot.ang.position + last_ang_position;
  orientation = orientation / 2;
  orientation = STEP_TO_RAD(orientation);
  // Angle simplification
  robot.rad = MOD(orientation, TWO_PI);

#ifdef APPROX_CIRCULAR
    // Si le robot ne va pas tout droit (évite la division par zéro)
    if (robot.ang.velocity != 0)
    {
      // Calcul de la vitesse de rotation en radian et du coefficient de courbure
      coef_ang_speed = robot.ang.velocity;
      coef_ang_speed = coef_ang_speed / 2;
      coef_ang_speed = STEP_TO_RAD(coef_ang_speed);
      coef_curvature = SIN(coef_ang_speed) / coef_ang_speed;
    }
  #endif

  // Coordinates projection
  dx = coef_curvature * (float32)robot.lin.velocity * COS(robot.rad);
  dy = coef_curvature * (float32)robot.lin.velocity * SIN(robot.rad);

  // Coordinates integration
  robot.step.x += dx;
  robot.step.y += dy;

  robot.mm.x = STEP_TO_MM(robot.step.x);
  robot.mm.y = STEP_TO_MM(robot.step.y);
  robot.deg = RAD_TO_DEG(robot.rad);
}


/****************************************************************************************
 * Test odometry for differential wheel diameter ajustment
 ****************************************************************************************/
void Test_Odometry_1()
{
  uint16 distance_test = 2000;
  
  Translate(distance_test, SPEED_LIN);
  while (Wait_Trajectory())Display();
  Rotate(PI, SPEED_ANG);
  while (Wait_Trajectory())Display();
  Translate(distance_test, SPEED_LIN);
  while (Wait_Trajectory())Display();
  Rotate(-PI, SPEED_ANG);
  while (Wait_Trajectory())Display();
  
  Translate(distance_test, SPEED_LIN);
  while (Wait_Trajectory())Display();
  Rotate(PI, SPEED_ANG);
  while (Wait_Trajectory())Display();
  Translate(distance_test, SPEED_LIN);
  while (Wait_Trajectory())Display();
  Rotate(-PI, SPEED_ANG);
  while (Wait_Trajectory())Display();
  
  Translate(distance_test, SPEED_LIN);
  while (Wait_Trajectory())Display();
  Rotate(PI, SPEED_ANG);
  while (Wait_Trajectory())Display();
  Translate(distance_test, SPEED_LIN);
  while (Wait_Trajectory())Display();
  Rotate(-PI, SPEED_ANG);
  while (Wait_Trajectory())Display();
  
  Rotate(DEG_TO_RAD(90-robot.deg), SPEED_ANG);
  while (Wait_Trajectory())Display();
  
  Set_Asserv(OFF);
  while(FOREVER)Display();
}

/****************************************************************************************
 * Test odometry for wheel step per millimeter ajustment
 ****************************************************************************************/
void Test_Odometry_2()
{
  Translate(3000, SPEED_LIN);
  while (Wait_Trajectory())Display();
  
  Set_Asserv(OFF);
  while(FOREVER)Display();
}

/****************************************************************************************
 * Test odometry for wheel spacing ajustment
 ****************************************************************************************/
void Test_Odometry_3()
{
  uint8 i;
  for (i=0;i<40;i++)
  {
    Rotate(PI, SPEED_ANG);
    while (Wait_Trajectory())Display();
  }
  
  Rotate(DEG_TO_RAD(90-robot.deg), SPEED_ANG);
  while (Wait_Trajectory())Display();
  Rotate(DEG_TO_RAD(90-robot.deg), SPEED_ANG);
  while (Wait_Trajectory())Display();
  
  Set_Asserv(OFF);
  while(FOREVER)Display();
}

