/****************************************************************************************
 * Fichier     : Path_Finding.c
 * Description : Recherche du chemin le plus court
 * Auteur      : (Daniel Lacroix) Geoffroy Arenou et Christopher Burel
 * Version     : 2016.11.28
 * Compilation : MPLAB X IDE (v3.45), compiler XC16 (v1.26) Lite
 ***************************************************************************************/

/****************************************************************************************
* Includes
****************************************************************************************/
#include "Path_Finding.h"

/****************************************************************************************
* Variables
****************************************************************************************/
t_node open[listlength];
t_node close[listlength];
t_vertexID solution[listlength] = {INVALID_VERTEX_ID}; // /!\ init of first index only !
t_vertexID solutionInverse[listlength];

uint32 timeout_pf = 0;

/****************************************************************************************
 Fonction : Calculate the shortest path between the start point and the end point
 ****************************************************************************************/
boolean Path_Finding()
{
	t_node listPossible[listlength];
	t_node startNode;
	t_node best;
	Set_Timeout_PF(PATH_FINDING_TIME_LIMIT);

	// Initialisation des list
	ListFreeALL(open);
	ListFreeALL(close);
	ListFreeALL(listPossible);

	NodeNew(&startNode);
	NodeNew(&best);

	// Cr�ation du premier noeud de d�part
	NodeSet(&startNode, INVALID_VERTEX_ID, 0, 0);  // start to vertex 0
	// On ajoute le noeud � la liste open
	ListAddFirst(open, startNode);

	while (ListLength(open) > 0)
	{
		//on r�cup�re le premier noeud de la liste cad le meilleur
		ListGetFirstItem(open, &best);

		// on regarde si le noeud est le noeud final OU si il y a condition d'arr�t anticip�
		if ((Is_Equal_Vertex(best.currentID, Get_End_Vertex())) || (PATH_FINDING_STOP))
		{
			int i = 0;
			int pos = 0;
			t_node dummy;
			ListVertexIDInit(solutionInverse);
			NodeNew(&dummy);
			solutionInverse[i++] = best.currentID;
			dummy.currentID = best.parentID;
			
			//A partir du noeud de fin,
			while (dummy.currentID != INVALID_VERTEX_ID)
			{
				pos = ListIsDataExist(close, dummy);
				dummy = close[pos];
				solutionInverse[i++] = dummy.currentID;
				dummy.currentID = dummy.parentID;
			}
			int j=0;
			ListVertexIDInit(solution);
			for (i = 0; i < listlength; i++)
			{
				if(solutionInverse[listlength-1-i] != INVALID_VERTEX_ID)
					if(solutionInverse[listlength-1-i] != 0)
						solution[j++] = solutionInverse[listlength-1-i];
			}
#ifdef SERIAL_PRINT
			//ListPrint(open , "open");
			//ListPrint(close , "close");
			//ListVertexPrint(solution);
#endif
			return TRUE;
		}
		// on ajoute le noeud �valu� � la liste close
		ListAddEnd(close, best);

		// on r�cup�re dans une liste tous les noeuds voisins autour du best
		ListFreeALL(listPossible);
		NodeListGetPossibleNode(listPossible, best);

#ifdef SERIAL_PRINT
		//printf("\n");
		//ListPrint(open, "open");
		//ListPrint(close, "close");
		//ListPrint(listPossible, "Possible from best");
#endif

		// on ajoute cette liste de nodes � open pour que les noeuds soient �valu�s
		PathFindingAddToOpen(listPossible);
	}
	// No path found
#ifdef SERIAL_PRINT
	printf("No solution founded !\n");
#endif
	return FALSE;


}

/****************************************************************************************
* Fonction : Add a list of nodes to the open list if needed
****************************************************************************************/
void PathFindingAddToOpen(t_node list[])
{
	int i = 0;
	int pos = 0;
	// on parcourt la liste des noeuds
	while (list[i].currentID != INVALID_VERTEX_ID)
	{
		// on v�rifie que le noeud n'existe pas d�j� dans open
		pos = ListIsDataExist(open, list[i]);
		if (pos == -1)
		{
			// on v�rifie que le noeud n'existe pas d�j� dans close
			pos = ListIsDataExist(close, list[i]);
			if (pos == -1)
			{
				// On ajoute le noeud de fa�on tri� dans la liste open
				ListInsertSorted(open, list[i]);
			}
			else
			{
				// le noeud existe d�j� dans close
				// on regarde si son cout sera meilleur
				// sinon on affecte le nouveau parent
				t_node node;
				NodeNew(&node);
				node = close[pos];
				if (NodeCostWillBe(list[i]) < NodeGetCost(close[pos]))
				{
					NodeSetParent(&close[pos], list[i].parentID, list[i].parentCost);
				}
			}
		}
		else
		{
			// le noeud existe d�j� dans open
			// on regarde si son cout sera meilleur
			// sinon on affecte le nouveau parent
			if (NodeCostWillBe(list[i]) < NodeGetCost(open[pos]))
			{
				NodeSetParent(&open[pos], list[i].parentID, list[i].parentCost);
			}
		}

		i++;
	}
}

