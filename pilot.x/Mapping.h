/****************************************************************************************
 * Fichier     : Mapping.h
 * Description : Carte de l'environnement et graphe de passabilité.
 * Auteur      : Christopher Burel
 * Version     : 2017.05.22
 * Compilation : MPLAB X IDE (v3.45), compiler XC16 (v1.26) Lite
 ***************************************************************************************/

#ifndef MAPPING_H
#define	MAPPING_H

/****************************************************************************************
* Includes
****************************************************************************************/
#include "PILOT_main.h"

/****************************************************************************************
* Parameters
****************************************************************************************/
#define MAX_SEGMENT    4
#define MAX_CIRCLE     12
#define MAX_VERTEX     24

#define ROBOT_RADIUS       130  // mm
#define ROBOT_MARGIN       30   // mm

#define INVALID_VERTEX_ID  255

#define MAP_X_MAX 2000
#define MAP_Y_MAX 3000

/****************************************************************************************
* Global Variables
****************************************************************************************/
extern t_segment segment[MAX_SEGMENT];
extern t_circle circle[MAX_CIRCLE];
extern t_vertex vertex[MAX_VERTEX];

/****************************************************************************************
* Prototypes
****************************************************************************************/
void Initialize_Map(uint8 team);

void Set_Adjacent(t_vertexID id1, t_vertexID id2);
void Clear_Adjacent(t_vertexID id1, t_vertexID id2);
boolean Is_Adjacent(t_vertexID id1, t_vertexID id2);
boolean Is_NotAdjacent(t_vertexID id1, t_vertexID id2);

t_point Point(int32 x, int32 y);
t_circle Circle(int32 x, int32 y, uint16 r);
t_segment Segment(t_point p1, t_point p2);

boolean Is_Intersection_Segment(t_segment *s1, t_segment *s2);
boolean Is_Point_On_Segment(t_point *p, t_segment *s);
uint32 Get_Distance_Point(t_point *p1, t_point *p2);
int32 Dot_Product(t_point *v1, t_point *v2);
t_point Get_Point_ProjectionOn_Segment(t_point *p, t_segment *s);
boolean Is_Equal_Point(t_point *p1, t_point *p2);
boolean Is_Different_Point(t_point *p1, t_point *p2);
boolean Is_Point_CloseTo_Segment(t_point *p, t_segment *s, uint16 d);
boolean Is_Circle_CloseTo_Segment(t_circle *c, t_segment *s, uint16 d);
boolean Is_Segment_CloseTo_Segment(t_segment *s1, t_segment *s2, uint16 d);
boolean Is_NotNull_Circle(t_circle *c);

boolean Is_Passable_Point(t_point *source, t_point *target, uint16 margin);
boolean Is_Passable_Robot(t_point *target, uint16 margin);
void Initialize_Passability_Graph(void);
void Update_Passability_Robot(void);
void Update_Passability_Graph(void);
void Update_Passability_Obstacle(void);
void Update_Passability_Element(void);

void Set_End_Vertex(t_vertexID id);
t_vertexID Get_End_Vertex(void);
boolean Is_Equal_Vertex(t_vertexID id1, t_vertexID id2);
boolean Is_Valid_Vertex(uint8 vertexID);
uint32 Get_Distance_Vertex(t_vertexID id1, t_vertexID id2);
void Update_Start_Vertex();

#endif	/* MAPPING_H */



