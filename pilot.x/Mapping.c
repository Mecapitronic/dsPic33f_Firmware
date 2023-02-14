/****************************************************************************************
 * Fichier     : Mapping.c
 * Description : Carte de l'environnement et graphe de passabilit�.
 * Auteur      : Christopher Burel
 * Version     : 2016.11.28
 * Compilation : MPLAB X IDE (v3.45), compiler XC16 (v1.26) Lite
 ***************************************************************************************/

/****************************************************************************************
* Includes
****************************************************************************************/
#include "Mapping.h"

/****************************************************************************************
* Variables
****************************************************************************************/
t_segment segment[MAX_SEGMENT];
t_circle circle[MAX_CIRCLE];
t_vertex vertex[MAX_VERTEX];

t_vertexID end_vertex_ID;

/****************************************************************************************
* Initialize all map with defined segment, circle, vertex and potential false obstacle
****************************************************************************************/
void Initialize_Map(uint8 team)
{
  if (team == TEAM_A)
  {
    #include MAP_FILE_TEAM_A
  }
  else if (team == TEAM_B)
  {
    #include MAP_FILE_TEAM_B
  }
}

/****************************************************************************************
* Set adjacent the vertices #id1 and #id2 (t_vertex vertex[] must be declared)
****************************************************************************************/
void Set_Adjacent(t_vertexID id1, t_vertexID id2)
{
  vertex[id1].adjacency_active |= ((t_adjacency)1u << id2);
  vertex[id2].adjacency_active |= ((t_adjacency)1u << id1);
}

/****************************************************************************************
* Set NOT adjacent the vertices #id1 and #id2 (t_vertex vertex[] must be declared)
****************************************************************************************/
void Clear_Adjacent(t_vertexID id1, t_vertexID id2)
{
  vertex[id1].adjacency_active &= ~((t_adjacency)1u << id2);
  vertex[id2].adjacency_active &= ~((t_adjacency)1u << id1);
}

/****************************************************************************************
* Return 1 if vertices id1 and id2 are adjacent
****************************************************************************************/
boolean Is_Adjacent(t_vertexID id1, t_vertexID id2)
{ 
  if ((vertex[id1].adjacency_active & ((t_adjacency)1u << id2)) 
   || (vertex[id2].adjacency_active & ((t_adjacency)1u << id1))) 
    return 1;

  return 0;
}

/****************************************************************************************
* Return 1 if vertices id1 and id2 are NOT adjacent
****************************************************************************************/
boolean Is_NotAdjacent(t_vertexID id1, t_vertexID id2)
{
  return !Is_Adjacent(id1, id2);
}

/****************************************************************************************
* Return a point from coordinates x and y
****************************************************************************************/
t_point Point(int32 x, int32 y)
{
  t_point p;
  p.x = x;
  p.y = y;
  return p;
}

/****************************************************************************************
* Return a circle from center point coordinates x, y and radius r
****************************************************************************************/
t_circle Circle(int32 x, int32 y, uint16 r)
{
  t_circle c;
  c.p = Point(x, y);
  c.r = r;
  return c;
}

/****************************************************************************************
* Return a segment from end points p1 and p2
****************************************************************************************/
t_segment Segment(t_point p1, t_point p2)
{
  t_segment s;
  
  s.p1 = p1;
  s.p2 = p2;
  
  if (p1.x == p2.x)
  { 
      s.a = 9999;  // infinite slope (vertical line)
      s.b = p1.x;
  }
  else
  {
    s.a = (p2.y - p1.y);  // slope
    s.a /= (p2.x - p1.x);
    s.b = (p1.y - (s.a * p1.x));  // intercept
  }
  return s;
}

/****************************************************************************************
* Return 1 if an intersection exists between segments s1 and s2
****************************************************************************************/
boolean Is_Intersection_Segment(t_segment *s1, t_segment *s2)
{
	t_point commun;

    if ((s1->a == s2->a) && (s1->b == s2->b)) // segments are one the same line (parallel but not distinct)
        if (Is_Point_On_Segment(&s2->p1, s1) && Is_Point_On_Segment(&s2->p2, s1))
            return 1; 

    if ((s1->a == s2->a) && (s1->b != s2->b)) // segments are parallel and distinct
        return 0;

    if (s1->a == 9999) // segment 1 is vertical
    {
        commun.x = s1->p1.x;
        commun.y = (s2->a * commun.x) + s2->b;
    }
    else if (s2->a == 9999) // segment 2 is vertical
    {
        commun.x = s2->p1.x;
        commun.y = (s1->a * commun.x) + s1->b;
    }
    else
    {
        commun.x = (s2->b - s1->b) / (s1->a - s2->a);
        commun.y = (s1->a * commun.x) + s1->b;
    }
  
  if (Is_Point_On_Segment(&commun, s1) && Is_Point_On_Segment(&commun, s2))
    return 1;

  return 0;
}

/****************************************************************************************
* Return 1 if point p is between end points of segment s (/!\ it's assume that p is on the line)
****************************************************************************************/
boolean Is_Point_On_Segment(t_point *p, t_segment *s)
{
  if ((p->x <= max(s->p1.x,s->p2.x)) && (p->x >= min(s->p1.x,s->p2.x))
   && (p->y <= max(s->p1.y,s->p2.y)) && (p->y >= min(s->p1.y,s->p2.y)))
    return 1;

  return 0;
}

/****************************************************************************************
* Return the distance (approximated) between points p1 and p2
****************************************************************************************/
uint32 Get_Distance_Point(t_point *p1, t_point *p2)
{
  uint32 dx = ABS(p1->x - p2->x);
  uint32 dy = ABS(p1->y - p2->y);
  return Approx_Distance(dx,dy);
}

/****************************************************************************************
* Return the dot (scalar) product of vectors (points) v1 and v2
****************************************************************************************/
int32 Dot_Product(t_point *v1, t_point *v2)
{
  return ((v1->x * v2->x) + (v1->y * v2->y));
}

/****************************************************************************************
* Return the orthogonal projected point of p on segment s
****************************************************************************************/
t_point Get_Point_ProjectionOn_Segment(t_point *p, t_segment *s)
{
  t_point u, v;
  float32 projection;
  
  u.x = p->x - s->p1.x;
  u.y = p->y - s->p1.y;
  v.x = s->p2.x - s->p1.x;
  v.y = s->p2.y - s->p1.y;

  if ((v.x == 0) && (v.y == 0)) // check if segment length is null
    return s->p1;
  
  projection = Dot_Product(&u, &v);
  projection /= Dot_Product(&v, &v);
  u.x = (projection * v.x) + s->p1.x;
  u.y = (projection * v.y) + s->p1.y;

  return u;
}

/****************************************************************************************
* Return 1 if point p1 is the same point than p2
****************************************************************************************/
boolean Is_Equal_Point(t_point *p1, t_point *p2)
{
  if ((p1->x == p2->x) && (p1->y == p2->y)) 
    return 1;
  
  return 0;
}

/****************************************************************************************
* Return 1 if point p1 is different from point p2
****************************************************************************************/
boolean Is_Different_Point(t_point *p1, t_point *p2)
{
  return !Is_Equal_Point(p1, p2);
}

/****************************************************************************************
* Return 1 if distance (orthogonal) between point p and segment s is less than d
****************************************************************************************/
boolean Is_Point_CloseTo_Segment(t_point *p, t_segment *s, uint16 d)
{
	t_point projected;

//  if (Get_Distance_Point(p, s.p1) <= d) // check distance from first end point
//    return 1;
//
//  if (Get_Distance_Point(p, s.p2) <= d) // check distance from second end point
//    return 1;
    
  projected = Get_Point_ProjectionOn_Segment(p, s);
  
  if (Is_Point_On_Segment(&projected, s))
  {
    if (Get_Distance_Point(p, &projected) <= d)  // check distance from line
      return 1;
  }
  
  return 0;
}

/****************************************************************************************
* Return 1 if distance between circle c and segment s is less than d
****************************************************************************************/
boolean Is_Circle_CloseTo_Segment(t_circle *c, t_segment *s, uint16 d)
{
  d = d + c->r;
  // check distance from each end point to circle
  if (Get_Distance_Point(&s->p1, &c->p) <= d) return 1;
  if (Get_Distance_Point(&s->p2, &c->p) <= d) return 1;
  
  return Is_Point_CloseTo_Segment(&c->p, s, d);
}

/****************************************************************************************
* Return 1 if distance between segment s1 and segment s2 is less than d
****************************************************************************************/
boolean Is_Segment_CloseTo_Segment(t_segment *s1, t_segment *s2, uint16 d)
{
  // check segment intersection
  if (Is_Intersection_Segment(s1, s2)) return 1;
      
//  // check distance from each end point to each other       // manually done in excel map
//  if (Get_Distance_Point(&s1->p1, &s2->p1) <= d) return 1;
//  if (Get_Distance_Point(&s1->p1, &s2->p2) <= d) return 1;
//  if (Get_Distance_Point(&s1->p2, &s2->p1) <= d) return 1;
//  if (Get_Distance_Point(&s1->p2, &s2->p2) <= d) return 1;
    
//  // check distance orthogonal from end point               // manually done in excel map
//  if (Is_Point_CloseTo_Segment(&s1->p1, s2, d)) return 1;
//  if (Is_Point_CloseTo_Segment(&s1->p2, s2, d)) return 1;
//  if (Is_Point_CloseTo_Segment(&s2->p1, s1, d)) return 1;
//  if (Is_Point_CloseTo_Segment(&s2->p2, s1, d)) return 1;

  return 0;
}

/****************************************************************************************
* Return 1 if radius of circle is NOT zero
****************************************************************************************/
boolean Is_NotNull_Circle(t_circle *c)
{
  return (c->r != 0 ? 1 : 0);
}

/****************************************************************************************
* Return 1 if point target is passable from point source, according to distance margin
****************************************************************************************/
boolean Is_Passable_Point(t_point *source, t_point *target, uint16 margin)
{
  uint8 i;
  t_segment edge;

//  if (Is_Equal_Point(source, target)) // check segment existence
//    return 0;
  
  edge = Segment(*source, *target);

  for (i=0; i<MAX_SEGMENT; i++)
  {
    if (Is_Segment_CloseTo_Segment(&segment[i], &edge, margin)) // check segment proximity
      return 0;
  }

  for (i=0; i<MAX_CIRCLE; i++)
  {
    if (Is_NotNull_Circle(&circle[i]))
  {
      if (Is_Circle_CloseTo_Segment(&circle[i], &edge, margin)) // check circle proximity
      return 0;
  }
  }
  
  return 1; // after all checking
}

/****************************************************************************************
* Return 1 if point target is passable from robot (vertex[0]), according to distance margin
****************************************************************************************/
boolean Is_Passable_Robot(t_point *target, uint16 margin)
{
  uint8 i;
  t_segment edge;
  uint16 margin_temp;
  
  edge = Segment(vertex[0].point, *target);

  for (i=0; i<MAX_SEGMENT; i++) // check segment proximity
  {
    // check segment intersection
    if (Is_Intersection_Segment(&segment[i], &edge)) return 0;
    
//    // check distance from each end point to each other
//    //if (Get_Distance_Point(&edge.p1, &segment[i].p1) <= margin) return 0; // ignore edge.p1 = vertex[0] = robot
//    //if (Get_Distance_Point(&edge.p1, &segment[i].p2) <= margin) return 0;
//    if (Get_Distance_Point(&edge.p2, &segment[i].p1) <= margin) return 0;
//    if (Get_Distance_Point(&edge.p2, &segment[i].p2) <= margin) return 0;
      
//    // check distance orthogonal from end point
//    if (Is_Point_CloseTo_Segment(&segment[i].p1, &edge, margin)) return 0;
//    if (Is_Point_CloseTo_Segment(&segment[i].p2, &edge, margin)) return 0;
//    //if (Is_Point_CloseTo_Segment(edge.p1, segment[i], margin)) return 0;
//    if (Is_Point_CloseTo_Segment(&edge.p2, &segment[i], margin)) return 0;  // manually done in excel map
  }

  for (i=0; i<MAX_CIRCLE; i++) // check circle proximity
  {
    if (Is_NotNull_Circle(&circle[i]))
    {
      margin_temp = margin + circle[i].r;
      // check distance from end point to circle
      //if (Get_Distance_Point(&edge.p1, &circle[i].p) <= margin_temp) return 0;
      if (Get_Distance_Point(&edge.p2, &circle[i].p) <= margin_temp) return 0;  // usefull for vertex in circle

      if (Is_Point_CloseTo_Segment(&circle[i].p, &edge, margin_temp)) return 0; // most important
    }
  }
  
  margin_temp = margin + OBSTACLE_RADIUS;
  
  for (i=0; i<MAX_OBSTACLE; i++) // check obstacle proximity
  {
    if (Is_Valid_Obstacle(i))
    {
      if (Get_Distance_Point(&edge.p2, &obstacle[i].p) < margin_temp) 
        return 0;

      if (Is_Point_CloseTo_Segment(&obstacle[i].p, &edge, margin_temp)) 
        return 0;
    }
  }
  
  return 1; // after all checking
}

/****************************************************************************************
* Compute all the passability graph and set the initial adjacency
****************************************************************************************/
void Initialize_Passability_Graph(void)
{ 
  uint16 i, j;
  uint16 margin = ROBOT_RADIUS + ROBOT_MARGIN;
  
  for (i=0; i<MAX_VERTEX; i++)
  {
    vertex[i].adjacency_active = 0;  // clear all list
    vertex[i].adjacency_passive = 0;
    vertex[i].adjacency_static = 0;
  }
  
  for (i=1; i<MAX_VERTEX; i++)
  { 
    for (j=(i+1); j<MAX_VERTEX; j++) // ignore vertex couple already checked (i,j)=(j,i)
    {
      //if (i != j) // if not the same point  // no more possible
      {
        //if (Is_NotAdjacent(i, j))  // if not already adjacent
        {
          if (Is_Passable_Point(&vertex[i].point, &vertex[j].point, margin))
        {
          Set_Adjacent(i, j); // set list
        }
      }
    }
    }
    vertex[i].adjacency_static = vertex[i].adjacency_active; // backup list
    vertex[i].adjacency_passive = vertex[i].adjacency_active;
  }
  
  //Update_Passability_Robot(); // vertex #0
}

/****************************************************************************************
* Update the passability graph from robot (vertex #0)
****************************************************************************************/
void Update_Passability_Robot(void)
{ 
  uint8 i;
  uint16 margin = ROBOT_RADIUS + ROBOT_MARGIN;
  vertex[0].point = robot.mm;
  //vertex[0].adjacency_active = 0;  // clear list
  
  for (i=1; i<MAX_VERTEX; i++)
  {
    if (Is_Passable_Robot(&vertex[i].point, margin))
    {
      Set_Adjacent(0, i);
    }
    else 
    {
      Clear_Adjacent(0, i);
  }
  }
  //vertex[0].adjacency_passive = vertex[0].adjacency_active; // backup list
}

/****************************************************************************************
* Update the passability graph
****************************************************************************************/
void Update_Passability_Graph(void)
{ 
  Update_Passability_Obstacle();
  Update_Passability_Robot();
}

/****************************************************************************************
* Update the passability graph considering obstacle only
****************************************************************************************/
void Update_Passability_Obstacle(void)
{
  uint16 i, j, k;
  uint16 margin = ROBOT_RADIUS + ROBOT_MARGIN; 
  t_segment edge;

  for (i=1; i<MAX_VERTEX; i++)
  {
    vertex[i].adjacency_active = vertex[i].adjacency_passive;  // retrieve list without obstacle
  }
  
  for (k=0; k<MAX_OBSTACLE; k++)  
  {
    if (Is_Valid_Obstacle(k))  // for all obstacle detected
    {
      for (i=1; i<MAX_VERTEX; i++)
      { 
        for (j=(i+1); j<MAX_VERTEX; j++) // ignore vertex couple already checked (i,j)=(j,i)
        {
          if (Is_Adjacent(i, j))  // for all couple passabled
          {
            edge = Segment(vertex[i].point, vertex[j].point);

            if (Is_Circle_CloseTo_Segment(&obstacle[k], &edge, margin)) // check circle proximity
  {
              Clear_Adjacent(i,j);  // Temporarily not passabled 
            }
          }
        }
      }
    }
  }

}

/****************************************************************************************
* Update the passability graph considering playing element only
****************************************************************************************/
//void Update_Passability_Element(void)
//{ 
//  uint16 i, j, k;
//  uint16 margin = ROBOT_RADIUS + ROBOT_MARGIN + OBSTACLE_RADIUS; 
//  t_segment edge;
//  
//  for (i=1; i<MAX_VERTEX; i++)
//  {
//    vertex[i].adjacency_active = vertex[i].adjacency_static;  // retrieve list without element
//  }
//  
//  for (k=0; k<MAX_ELEMENT; k++)  
//  {
//    if (Is_Obstacle_Element(k))  // for all element still present
//    {
//      for (i=1; i<MAX_VERTEX; i++)
//      { 
//        for (j=(i+1); j<MAX_VERTEX; j++) // ignore vertex couple already checked (i,j)=(j,i)
//        {
//          if (Is_Adjacent(i, j))  // for all couple passabled
//          {
//            edge = Segment(vertex[i].point, vertex[j].point);
//        
//            if (Is_Circle_CloseTo_Segment(&element[k], &edge, margin)) // check circle proximity
//            {
//              Clear_Adjacent(i,j);  // Temporarily not passabled 
//            }
//          }
//        }
//        vertex[i].adjacency_passive = vertex[i].adjacency_active; // backup list
//      }
//    }
//  }
//  
//}

/****************************************************************************************
* Set end vertex for Path_Finding
****************************************************************************************/
void Set_End_Vertex(t_vertexID id)
{
  end_vertex_ID = id;
}

/****************************************************************************************
* Get end vertex for Path_Finding
****************************************************************************************/
t_vertexID Get_End_Vertex(void)
{
  return end_vertex_ID;
}

/****************************************************************************************
* Return 1 if vertex id1 is the same vertex than id2
****************************************************************************************/
boolean Is_Equal_Vertex(t_vertexID id1, t_vertexID id2)
{
  return Is_Equal_Point(&vertex[id1].point, &vertex[id2].point);
}

/****************************************************************************************
* Return the distance (approximated) between vertex id1 and id2
****************************************************************************************/
uint32 Get_Distance_Vertex(t_vertexID id1, t_vertexID id2)
{
  return Get_Distance_Point(&vertex[id1].point, &vertex[id2].point);
}

/****************************************************************************************
* Update vertex[0] to robot position
****************************************************************************************/
void Update_Start_Vertex()
{
  vertex[0].point.x = robot.mm.x;
  vertex[0].point.y = robot.mm.y;
}

//void Print_Visibility_Graph()
//{
//    uint16 i;
//    for (i = 0; i < MAX_VERTEX; i++)
//    {
//        printf("vertex[%d].adjacency = %ld",i ,vertex[i].adjacency);        printf(";\n");
//        printf("vertex[%d].adjacency_static = %ld",i ,vertex[i].adjacency_static);        printf(";\n");
//        printf("vertex[%d].point.x = %d",i ,vertex[i].point.x);        printf(";\n");
//        printf("vertex[%d].point.y = %d",i ,vertex[i].point.y);        printf(";\n");
//    }
//}

