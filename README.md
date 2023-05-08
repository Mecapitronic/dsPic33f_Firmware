# Mecapitronic_Firmware

Contient 2 projets pour microcontroleur __dsPIC33FJ128MC804__
 - Pilot
 - Copilot

Pour commencer à developper vous devez installer Visual Studio sur un Poste Windows.
Importez le fichier vsconfig dans Visual Studio Installer afin d'installer tous les composants nécessaires à ce projet.

Vous pouvez compiler le firmware pour le PIC avec l'[IDE de Microchip](https://www.microchip.com/en-us/tools-resources/develop/mplab-x-ide)
Vous pouvez lancer le firmware du robot en mode CLI sur votre poste:
 * clique droit sur le projet `Firmware` dans l'explorateur à droite
 * sélectionnez "Propritétés"
 * sélectionnez "Propriétés de configuration / Général"
 * changer l'option "Type de configuration" en "Application (.exe)"
 * appliquez
 * vous pouvez générer et exectuer le projet.
 
TODO ajouter les connexions séries pour communiquer avec le firmware

Vous pouvez également lancer une simulation du robot sur le terrain. Pour cela le `Firmware` doit  être compilé en temps que Bibliothèque dynamique (.dll)
Le Simulateur pour être généré et exécuter depuis la solution [Mecapitronic_Software](https://github.com/Godeffroy/Mecapitronic_Software).