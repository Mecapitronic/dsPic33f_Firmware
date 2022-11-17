/****************************************************************************************
 * Fichier     : Node.c
 * Description : Noeud pour la recherche de chemin.
 * Auteur      : (Daniel Lacroix) Geoffroy Arenou et Christopher Burel
 * Version     : 2016.11.05
 * Compilation : MPLAB X IDE (v3.45), compiler XC16 (v1.26) Lite
 ***************************************************************************************/

/****************************************************************************************
* Includes
****************************************************************************************/
#include "Node.h"

/****************************************************************************************
* Fonction : Set a Node with a parent and a vertex ID
****************************************************************************************/
void NodeSet(t_node *node , t_vertexID parent , t_vertexID currentPoint, uint32 parentCost)
{
  node->currentID = currentPoint;
  NodeSetParent(node , parent, parentCost);
}

/****************************************************************************************
* Fonction : Create a new node
****************************************************************************************/
void NodeNew(t_node * newNode)
{
  newNode->currentCost = 0;
  newNode->parentCost = 0;
  newNode->currentID = INVALID_VERTEX_ID;
  newNode->parentID = INVALID_VERTEX_ID;
}

/****************************************************************************************
* Fonction : Set the parent
****************************************************************************************/
void NodeSetParent(t_node *node , t_vertexID parent, uint32 parentCost)
{
  node->parentID = parent;
  node->parentCost = parentCost;
  // Refresh the cost : the cost of the parent + the cost of the current point
  if (parent != INVALID_VERTEX_ID)
  {

		  uint32 cost = Get_Distance_Vertex(node->currentID, node->parentID);
		  node->currentCost = node->parentCost + cost;
  }
  else
	  node->currentCost=0;
}

/****************************************************************************************
* Fonction : Get the cost
****************************************************************************************/
uint32 NodeGetCost(t_node node)
{
  return node.currentCost;
}


/****************************************************************************************
* Fonction : Get the F distance (Cost + Heuristic)
****************************************************************************************/
uint32 NodeF(t_node node)
{
    return (node.currentCost);
}

/****************************************************************************************
* Fonction : Comparaison between 2 node by their Heuristic
****************************************************************************************/
int8 NodeFCmp(t_node p1 , t_node p2)
{
  uint32 nodeFp1 = NodeF(p1);
  uint32 nodeFp2 = NodeF(p2);

  if (nodeFp1 > nodeFp2)
    return (1);
  else if (nodeFp1 < nodeFp2)
    return (-1);
  else
    return (0);
}

/****************************************************************************************
* Fonction : Return the cost if you move to this
****************************************************************************************/
uint32 NodeCostWillBe(t_node node)
{
  // The cost of the parent + the cost of the current point
  if (node.parentID != INVALID_VERTEX_ID)
  {
    uint32 cost = Get_Distance_Vertex(node.currentID, node.parentID);
    return ( node.parentCost + cost );
  }
  else
  {
    return 0;
  }
}

/****************************************************************************************
* Fonction : Get a list of all neigbors from the node
* if they're not wall and are allowed by the Path
****************************************************************************************/
void NodeListGetPossibleNode(t_node list[], t_node node)
{
  int i =0;
  int j=0;
  for (i=0; i<listlength; i++)
  {
    if (Is_Adjacent(node.currentID, i))
    {
      NodeNew(&list[j]);
      NodeSet(&list[j] , node.currentID , i, node.currentCost);
	  j++;
    }
  }
}


