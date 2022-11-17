/****************************************************************************************
 * Fichier     : List.c
 * Description : Gestion de listes chain�es
 * Auteur      : (Daniel Lacroix) Geoffroy Arenou et Christopher Burel
 * Version     : 2016.11.05
 * Compilation : MPLAB X IDE (v3.45), compiler XC16 (v1.26) Lite
 ***************************************************************************************/

/****************************************************************************************
* Includes
****************************************************************************************/
#include "List.h"

/****************************************************************************************
* Fonction : Rajoute en tete de la liste pList l'element data.
****************************************************************************************/
void ListAddFirst(t_node list[], t_node data)
{
	int i;
	if (list[0].currentID == INVALID_VERTEX_ID)
	{ // la liste est vide
		list[0] = data;
	}
	else
    {
		for (i = listlength-1; i > 0; i--)
		{
			list[i] = list[i-1];
		}
		list[0] = data;
	}
}

/****************************************************************************************
* Fonction : Rajoute en queue de la liste pList l'element data.
****************************************************************************************/
void ListAddEnd(t_node list[], t_node data)
{
	int i = 0;
	for (i = 0; i <listlength; i++)
	{
		if(list[i].currentID == INVALID_VERTEX_ID)
			break;
	}
	if (list[i].currentID == INVALID_VERTEX_ID)
	{
		list[i] = data;
	}
	else
	{
		//the list is full
	}
}

/****************************************************************************************
* Fonction : Renvoie le nombre d'element contenu dans la liste.
****************************************************************************************/
uint32 ListLength(t_node list[])
{
	int i = listlength - 1;
	for (i = listlength - 1; i >= 0; i--)
	{
		if(list[i].currentID != INVALID_VERTEX_ID)
			break;
	}
	return (i + 1);
}

/****************************************************************************************
* Fonction : Insere l'element data dans la liste pList, trie d'apres la fonction NodeFCmp.
* Elle doit renvoyer 0 si p1 pointe sur un element equivalent a p2.
* < 0 si p1 est inferieur a p2, >0 si p2 est superieur a p1.
****************************************************************************************/
void ListInsertSorted(t_node list[], t_node data)
{
	int i = 0;
	int j = 0;
	boolean find = FALSE;
	
	//si la liste est vide
	if(list[0].currentID==INVALID_VERTEX_ID)
	{
		list[0] = data;
	}
	else
	{
		//on recherche le premier �l�ment dans la liste qui sera sup�rieur au data
		for (i = 0; i < listlength; i++)
		{
			if (list[i].currentID != INVALID_VERTEX_ID)
			{
				if (NodeFCmp(list[i], data) > 0)
				{
					find = TRUE;
					break;
				}
			}
			else
				break;
		}
		if (find == TRUE)
		{
			//on d�cale toute la liste jusqu'� l'�l�ment trouv� inclus
			for (j = listlength - 1; j >= i; j--)
			{
				if (list[j].currentID != INVALID_VERTEX_ID)
					list[j + 1] = list[j];
			}
			//test de verification
			if(j+1 == i)
			//on insere l'element dans la liste
			list[i] = data;
		}
		else
		{
			if(i < listlength)
				list[i]=data;
			else
				i++;

		}
	}
}

/****************************************************************************************
* Fonction : Libere le premier element.
* Renvoi dans data le premier �l�ment enlev�.
****************************************************************************************/
void ListGetFirstItem(t_node list[], t_node * data)
{
	int i = 0;
	/* on fait pointer data vers cet element*/
	(*data) = list[0];
	/* on libere l'element */
	for (i = 0; i < listlength-1; i++)
	{
		if(list[i].currentID != INVALID_VERTEX_ID)
			list[i] = list[i + 1];
	}

	NodeNew(&list[listlength-1]);
}

/****************************************************************************************
* Fonction : Recherche l'element de liste qui contient la premiere donnee data.
* Renvoie la position si trouv�, -1 sinon.
****************************************************************************************/
int ListIsDataExist(t_node list[], t_node data)
{
	int i = 0;
	for (i = 0; i < listlength-1; i++)
	{
		if(list[i].currentID != INVALID_VERTEX_ID)
		if (Is_Equal_Vertex(list[i].currentID, data.currentID))
			return i;
	}
	return -1;
}

/****************************************************************************************
* Fonction : Initialise chaques �l�ments de la list
****************************************************************************************/
void ListFreeALL(t_node list[])
{int i;
	for (i = 0; i < listlength; i++)
	{
		list[i].currentCost = 0;
		list[i].currentID = INVALID_VERTEX_ID;
		list[i].parentCost = 0;
		list[i].parentID = INVALID_VERTEX_ID;
	}
}

/****************************************************************************************
* Fonction : Initialise chaques �l�ments de la list
****************************************************************************************/
void ListVertexIDInit(t_vertexID list[])
{int i;
	for (i = 0; i < listlength; i++)
	{
		list[i] = INVALID_VERTEX_ID;
	}
}


#ifdef SERIAL_PRINT

/****************************************************************************************
* Fonction : Imprime la liste dans UART 1 OUTPUT avec le simulateur.
****************************************************************************************/
void ListPrint(t_node list[], char *c)
{
	int i = 0;
	printf("-------\n");
	printf("ListNode : %s \n", c);
	for (i = 0; i < length; i++)
	{
		if(list[i].currentID==INVALID_VERTEX_ID)
			break;
		printf("%d] ", i);
		//printf ("Liste 0x%X - Node 0x%X ->",current,current->data);
		printf("Vertex ID:%d -> ", list[i].currentID);
		printf("Cost %ld ", list[i].currentCost);
		//printf("Heuristic %f , Cost %f " , NodeF(current->data) , NodeGetCost(current->data));
		printf("\n");
	}
}

/****************************************************************************************
* Fonction : Imprime la liste dans UART 1 OUTPUT avec le simulateur
****************************************************************************************/
void ListVertexPrint(t_vertexID list[])
{
	int i = 0;
	printf("-------\n");
	printf("Solution founded : \n");
	while (list[i] != INVALID_VERTEX_ID)
	{
		printf("%d] ", i);
		printf("Vertex id:%d", list[i]);
		printf("\n");
		i++;
	}
}

#endif

