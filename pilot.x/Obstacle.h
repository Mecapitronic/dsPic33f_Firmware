/****************************************************************************************
 * Fichier     : Obstacle.h
 * Description : Gestion des obstacles
 * Auteur      : Christopher BUREL
 * Version     : 2017.02.02
 * Compilation : MPLAB X IDE (v3.45), compiler XC16 (v1.26) Lite
 ****************************************************************************************/

#ifndef OBSTACLE_H
#define	OBSTACLE_H

/****************************************************************************************
 * Includes
 ****************************************************************************************/
#include "PILOT_main.h"

/****************************************************************************************
 * Parameters
 ****************************************************************************************/
#define OBSTACLE_RADIUS    150  // mm
#define OBSTACLE_MARGIN    40  // mm for false obstacle checking

#define MAX_OBSTACLE       10 // = LIDAR_MAX_SENSOR (one obstacle per sensor)
#define MAX_FALSE_OBSTACLE 6  // potential false obstacle

/****************************************************************************************
 * Variables Globales
 ****************************************************************************************/
extern t_circle obstacle[MAX_OBSTACLE];
extern t_circle false_obstacle[MAX_FALSE_OBSTACLE];

/****************************************************************************************
 * Functions Prototypes
 ****************************************************************************************/
t_circle Get_Obstacle(uint8 obstacleID);
boolean Is_Valid_Obstacle(uint8 obstacleID);
void Initialize_Obstacle(void);
boolean Is_False_Obstacle(t_circle circle_obstacle);
t_circle Circle_Obstacle(float32 angle_rad, float32 distance_mm);
void Update_Obstacles(void);
void Add_Obstacle(uint8 id);

#endif	/* OBSTACLE_H */

