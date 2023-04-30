/****************************************************************************************
* Fichier     : Asserv.h
* Description : Asservissement des déplacements du robot.
* Auteur      : Christopher BUREL
* Version     : 2017.05.22
* Compilation : MPLAB X IDE (v3.45), compiler XC16 (v1.26) Lite
 ****************************************************************************************/

#ifndef ASSERV_H
#define	ASSERV_H

/****************************************************************************************
 * Includes
 ****************************************************************************************/
#include "PILOT_main.h"

/****************************************************************************************
 * Parameters
 ****************************************************************************************/
// Coefficient proportionnel et dérivé en distance
#define P_LIN    0.2//0.18
#define I_LIN    0.0
#define D_LIN    1.1
// Coefficient proportionnel et dérivé en orientation
#define P_ANG    0.08
#define I_ANG    0.0
#define D_ANG    0.2


/****************************************************************************************
 * Variables
 ****************************************************************************************/
extern t_move move_lin;  // linear move
extern t_move move_ang;  // angular move

extern boolean asserv_distance    ;   
extern boolean asserv_orientation ;

/****************************************************************************************
 * Prototypes functions
 ****************************************************************************************/
void Initialize_Asserv(void);
void Update_Asserv(void);
void Set_Asserv(boolean state);

#endif	/* ASSERV_H */

