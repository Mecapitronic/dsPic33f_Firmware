/****************************************************************************************
 * Fichier     : Path_Finding.h
 * Description : Recherche du chemin le plus court
 * Auteur      : (Daniel Lacroix) Geoffroy Arenou et Christopher Burel
 * Version     : 2016.11.28
 * Compilation : MPLAB X IDE (v3.45), compiler XC16 (v1.26) Lite
 ***************************************************************************************/

#ifndef PATH_FINDING_H
#define	PATH_FINDING_H

/****************************************************************************************
* Includes
****************************************************************************************/
#include "PILOT_main.h"

/****************************************************************************************
 * Macros
 ****************************************************************************************/
// Timeout in millisecond
#define Set_Timeout_PF(time)    do{timeout_pf = current_time + time;}while(0)
#define TIMEOUT_PF              (current_time > timeout_pf)


// Condition d'arrêt anticipé du calcul de Path_Finding
#define PATH_FINDING_STOP           (TIMEOUT_PF)
// Durée limite du calcul de Path_Finding en millisecond
#define PATH_FINDING_TIME_LIMIT     (10000)

/****************************************************************************************
* Globales Variables
****************************************************************************************/
extern t_vertexID solution[];

/****************************************************************************************
* Prototypes
****************************************************************************************/
boolean Path_Finding();
void PathFindingAddToOpen(t_node list[]);

#endif	/*PATH_FINDING_H */

