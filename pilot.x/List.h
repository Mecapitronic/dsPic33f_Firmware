/****************************************************************************************
 * Fichier     : List.h
 * Description : Gestion de listes chainées
 * Auteur      : (Daniel Lacroix) Geoffroy Arenou et Christopher Burel
 * Version     : 2016.11.05
 * Compilation : MPLAB X IDE (v3.45), compiler XC16 (v1.26) Lite
 ***************************************************************************************/

#ifndef LIST_H
#define LIST_H

/****************************************************************************************
* Includes
****************************************************************************************/
#include "PILOT main.h"

#define listlength MAX_VERTEX

/****************************************************************************************
* Protoypes
****************************************************************************************/
void ListAddFirst(t_node list[], t_node data);
void ListAddEnd(t_node list[] , t_node data);
uint32 ListLength(t_node list[]);
void ListInsertSorted(t_node list[], t_node data);
void ListGetFirstItem(t_node list[] , t_node *data);
int ListIsDataExist(t_node list[] , t_node data);
void ListFreeALL(t_node list[]);
void ListVertexIDInit(t_vertexID list[]);

#ifdef SERIAL_PRINT
void ListPrint(t_node list[], char *c);
void ListVertexPrint(t_vertexID list[]);
#endif

#endif /* LIST_H */
