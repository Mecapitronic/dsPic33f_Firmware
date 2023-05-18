/****************************************************************************************
 * Fichier     : Action.c
 * Description : Gestion des actions (COPILOT).
 * Auteur      : Christopher BUREL
 * Version     : 2023.05.06
 * Compilation : MPLAB X IDE (v2.35), compiler XC16 (v1.24) Lite
 ****************************************************************************************/

/****************************************************************************************
 * Includes
 ****************************************************************************************/
#include "Action.h"

/****************************************************************************************
 * Variables
 ****************************************************************************************/
uint32 timeout_action = 0;

/****************************************************************************************
 * Fonction d'attente d'execution d'une action lié à un servo
 ****************************************************************************************/
static void Wait_Action(uint8 servoID) {
    Set_Timeout_Action(TIMEOUT_ACTION_VALUE);
    while (!Check_Servo(servoID) && !TIMEOUT_ACTION);
    Delay_Ms(20);
}

/****************************************************************************************
 * Fonction d'initialisation des actionneurs
 ****************************************************************************************/
void Init_All_Action(void) {
    Bras_Preparer();
    Wait_Action(BRAS_CERISE);
    Bras_Desactiver();
    
    Deguisement_Pret();
    Wait_Action(DEGUISEMENT);    
    Deguisement_Desactiver();

}

//
///****************************************************************************************
// * Fonction d'empilage des spots (pieds + ampoule)
// ****************************************************************************************/
//uint8 Empiler_Spot(void) {
//    // attendre "déposer" à partir du 4eme pied
//    if (nbr_pied_spot <= 3) {
//        // S'assurer que la pince est ouverte et en bas
//        if (Get_Servo(PINCE_PIED) != -74) Pince_Pied_Ouvrir();
//        Wait_Action(PINCE_PIED);
//        Pince_Pied_Desactiver();
//        if (Get_Servo(ASCENSEUR) != 89) Ascenseur_Baisser();
//        Garde_Spot_Fermer();
//        Wait_Action(ASCENSEUR);
//        Ascenseur_Desactiver();
//        Wait_Action(GARDE_SPOT);
//
//        if (FALSE || FALSE) {
//            // Saisir l'élément
//            Pince_Pied_Fermer();
//            Wait_Action(PINCE_PIED);
//            // Si plus de présence en empilage auto
//            if ((!FALSE) && (!FALSE)) {
//                Pince_Pied_Ouvrir();
//                Wait_Action(PINCE_PIED);
//                Pince_Pied_Desactiver();
//                return nbr_pied_spot;
//            } else if (FALSE && (!FALSE)) {
//                // Comptabiliser le nombre de pied /!\ non empilé de force !
//                nbr_pied_spot++;
//            }
//            // le soulever si il est bien présent
//            Ascenseur_Monter_5mm();
//            // Si c'est pas le 4eme pied
//            if (nbr_pied_spot != 4) {
//                // Empiler l'élément
//                Garde_Spot_Lacher();
//                Wait_Action(ASCENSEUR);
//                Wait_Action(GARDE_SPOT);
//                Ascenseur_Monter_Max();
//                Wait_Action(ASCENSEUR);
//                Garde_Spot_Fermer();
//                Wait_Action(GARDE_SPOT);
//
//                //if (nbr_pied_spot > 0)
//                {
//                    // Revenir en position initiale
//                    Pince_Pied_Ouvrir();
//                    Wait_Action(PINCE_PIED);
//                    Pince_Pied_Desactiver();
//                    Ascenseur_Baisser();
//                    Wait_Action(ASCENSEUR);
//                    Ascenseur_Desactiver();
//                }
//            }
//        }
//    }
//    return nbr_pied_spot;
//}
//
///****************************************************************************************
// * Fonction de dépose des pieds et ampoules (spot)
// ****************************************************************************************/
//void Deposer_Spot(void) {
//    // Si il y a un spot
//    if (nbr_pied_spot > 0) {
//        // Si il n'y a pas de pied dessous alors monter
//        if (FALSE) {
//            Pince_Pied_Ouvrir();
//            Wait_Action(PINCE_PIED);
//            Pince_Pied_Desactiver();
//            Ascenseur_Monter_Max();
//            Wait_Action(ASCENSEUR);
//        }
//        // Fermer et poser le spot
//        Pince_Pied_Fermer();
//        Wait_Action(PINCE_PIED);
//        Delay_Ms(50); // Assure que la pince soit bien fermée
//        Garde_Spot_Lacher();
//        Wait_Action(GARDE_SPOT);
//        Ascenseur_Baisser();
//        Pince_Pied_Desactiver(); // Evite de soulever le robot si dépose sur quelque chose
//        Wait_Action(ASCENSEUR);
//        Ascenseur_Desactiver();
//        // Libérer le spot
//        Pince_Pied_Ouvrir();
//        Garde_Spot_Ouvrir();
//        Wait_Action(PINCE_PIED);
//        Pince_Pied_Desactiver();
//        Wait_Action(GARDE_SPOT);
//        Garde_Spot_Desactiver();
//        // Reinitialiser compteur de pied
//        nbr_pied_spot = 0;
//        Delay_S(1);
//    }
//}
//
///****************************************************************************************
// * Fonction de prise d'un gobelet
// ****************************************************************************************/
//boolean Prendre_Gobelet(void) {
//    if (Get_Servo(PINCE_GOBELET) != 54) Pince_Gobelet_Fermer();
//    Wait_Action(PINCE_GOBELET);
//    //Delay_Ms(50);
//    if (PRESENCE_GOBELET) {
//        Pince_Gobelet_Desactiver();
//        //GOBELET_PRESENT = YES;
//        return OK;
//    } else {
//        Pince_Gobelet_Desactiver();
//        //GOBELET_PRESENT = NO;
//        return NOK;
//    }
//}
//
///****************************************************************************************
// * Fonction de dépose d'un gobelet
// ****************************************************************************************/
//void Deposer_Gobelet(void) {
//    if (Get_Servo(PINCE_GOBELET) != 0) Pince_Gobelet_Ouvrir();
//    Wait_Action(PINCE_GOBELET);
//    Pince_Gobelet_Desactiver();
//}
//
///****************************************************************************************
// * Fonction d'ouverte de la pince popcorn
// ****************************************************************************************/
//void Ouvrir_Pince_Popcorn(void) {
//    if (Get_Servo(PINCE_POPCORN) != 67) Pince_Popcorn_Ouvrir();
//    Wait_Action(PINCE_POPCORN);
//    Pince_Popcorn_Desactiver();
//}
//
///****************************************************************************************
// * Fonction de fermeture de la pince popcorn
// ****************************************************************************************/
//void Fermer_Pince_Popcorn(void) {
//    if (Get_Servo(PINCE_POPCORN) != -39) Pince_Popcorn_Fermer();
//    Wait_Action(PINCE_POPCORN);
//    Pince_Popcorn_Desactiver();
//}

/****************************************************************************************
 * Fonction de gestion des actions
 ****************************************************************************************/
void Gestion_Action(void) {
    // Position attente 00, prise 10, dépose 01, désactiver 11
            
    // Action préparer la pince pour la prise
    if (PREPARER_CERISE && !PRISE_CERISE && !DEPOSE_CERISE) {
        Bras_Preparer();
    }
    
    // Action prendre les cerises
    if (!PREPARER_CERISE && PRISE_CERISE && !DEPOSE_CERISE) {
        Bras_Ramasser();
    }
    
    // Action déposer les cerises
    if (!PREPARER_CERISE && !PRISE_CERISE && DEPOSE_CERISE) {
        Bras_Monter();
    }    
    
    // Action désactiver la pince
    if (!PREPARER_CERISE && !PRISE_CERISE && !DEPOSE_CERISE) {
        Bras_Desactiver();
    }
}

/****************************************************************************************
 * Fonction de test des actions
 ****************************************************************************************/
void Mode_Test_Action(void) {
    LCD_Line(1);
    LCD_Text("Test Actions", 16);
    LCD_Line(2);
    LCD_Text("SW1 SW2 SW3", 16);
    while (SW1);

    while (FOREVER) {
        if (SW1) {
            BUZZER = ON;
            Delay_Ms(200);
            BUZZER = OFF;
            Bras_Ramasser();
            if (SW1) Delay_Ms(300);
        }
        if (SW2) {
            BUZZER = ON;
            Delay_Ms(200);
            BUZZER = OFF;
            Bras_Preparer();
            if (SW2) Delay_Ms(300);
        }
        if (SW3) {
            BUZZER = ON;
            Delay_Ms(200);
            BUZZER = OFF;
            Bras_Monter();
            if (SW3) Delay_Ms(300);
        }
    }// while
}

void Afficher_Action(void) {
    //  LCD_Line(2);

    //  LCD_Text("couleur feu ",12);
    //  LCD_Value(CAPTEUR_COULEUR,4,0);

    //  LCD_Text("Feu ",4);
    //  if (Get_Couleur_Feu() == TEAM_A) LCD_Text(LCD_TEAM_A,6);
    //  else if (Get_Couleur_Feu() == TEAM_B) LCD_Text(LCD_TEAM_B,6);
    //  else LCD_Text("absent",6);

}

