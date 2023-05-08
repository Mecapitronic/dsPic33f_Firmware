# Mecapitronic_Firmware

Contient 2 projets pour microcontroleur __dsPIC33FJ128MC804__
 - Pilot
 - Copilot

Pour commencer � developper vous devez installer Visual Studio sur un Poste Windows.
Importez le fichier vsconfig dans Visual Studio Installer afin d'installer tous les composants n�cessaires � ce projet.

Vous pouvez compiler le firmware pour le PIC avec l'[IDE de Microchip](https://www.microchip.com/en-us/tools-resources/develop/mplab-x-ide)
Vous pouvez lancer le firmware du robot en mode CLI sur votre poste:
 * clique droit sur le projet `Firmware` dans l'explorateur � droite
 * s�lectionnez "Proprit�t�s"
 * s�lectionnez "Propri�t�s de configuration / G�n�ral"
 * changer l'option "Type de configuration" en "Application (.exe)"
 * appliquez
 * vous pouvez g�n�rer et exectuer le projet.
 
TODO ajouter les connexions s�ries pour communiquer avec le firmware

Vous pouvez �galement lancer une simulation du robot sur le terrain. Pour cela le `Firmware` doit  �tre compil� en temps que Biblioth�que dynamique (.dll)
Le Simulateur pour �tre g�n�r� et ex�cuter depuis la solution [Mecapitronic_Software](https://github.com/Godeffroy/Mecapitronic_Software).