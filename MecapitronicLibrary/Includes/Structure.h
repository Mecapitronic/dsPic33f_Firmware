/****************************************************************************************
 * Fichier     : Structure.h
 * Description : Définition des structures.
 * Auteur      : Christopher BUREL
 * Version     : 2016.11.24
 * Compilation : MPLAB X IDE (v3.45), compiler XC16 (v1.26) Lite
 ****************************************************************************************/


#ifndef STRUCTURE_H
#define	STRUCTURE_H

/****************************************************************************************
* MOVE
****************************************************************************************/
typedef struct {
  int32 position;
  int16 velocity;
  int16 acceleration;
} t_motion;

typedef struct {
  int32 position;
  int16 speed_max;
  int16 speed_min;
  int16 acceleration;
  int8 jerk;
} t_motion_parameter;

typedef struct {
  t_motion command;
  t_motion_parameter setpoint;
} t_move;


/****************************************************************************************
* PID
****************************************************************************************/
typedef struct {
  int32 command;
  int32 error;
  int32 last_error;
  int32 sum_error;
  float32 kP;
  float32 kI;
  float32 kD;
} t_PID;

/****************************************************************************************
* MAPPING
****************************************************************************************/
typedef struct {
  int32 x;
  int32 y;
} t_point;

typedef uint64 t_adjacency; // 64 vertex max

typedef struct {
  t_point point;
  t_adjacency adjacency_active;   // high level graph with active obstacle => working graph
  t_adjacency adjacency_passive;  // medium level graph with passive play element
  t_adjacency adjacency_static;   // low level graph with only static map element
} t_vertex;

typedef struct {
  t_point p1;
  t_point p2;
  float32 a;
  int32 b;
} t_segment;

typedef struct {
  t_point p;
  uint16 r;
} t_circle;

typedef uint8 t_vertexID;

/****************************************************************************************
* Path_Finding
****************************************************************************************/
typedef struct {
    uint32 currentCost;
	uint32 parentCost;
	t_vertexID parentID;
    t_vertexID currentID;
} t_node;

/****************************************************************************************
* ODOMETRY
****************************************************************************************/
typedef struct {
  t_point step;   // position in step
  t_point mm;     // position in millimeter
  float32 rad;    // orientation in radian
  float32 deg;    // orientation in degree
  t_motion lin;   // linear motion in step
  t_motion ang;   // angular motion in step
} t_robot;


/****************************************************************************************
* STRATEGY
****************************************************************************************/
typedef struct {
  t_vertexID vertexID;
  int8 mission;
  boolean possible;
  boolean done;
  uint8 iteration;
  t_point point;
  boolean (* function)(void);
} t_action;


/****************************************************************************************
* UART COMMAND
****************************************************************************************/
typedef struct {
	char cmd;
	t_vertexID actionID;
	t_vertexID vertexID;
	//boolean available;
	t_point point;
	float32 angle;
	int32 distance;
} t_uartCMD;

#endif	/* STRUCTURE_H */
