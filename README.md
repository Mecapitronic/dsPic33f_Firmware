# Mecapitronic_Firmware

## Projets
Contient 2 projets en C pour microcontrôleur __dsPIC33FJ128MC804__
 - Pilot
 - Copilot
Contient le projet en C++ de simulation du microcontrôleur PILOT
 - Firmware


## Démarrer

### Configuration de l'environnement et composants
Pour commencer à développer vous devez installer Visual Studio sur un Poste Windows.
Importez le fichier .vsconfig dans Visual Studio Installer afin d'installer tous les composants nécessaires à ce projet.

### Compilation
Vous pouvez compiler les projets pour les dsPIC avec [MPLAB X IDE de Microchip](https://www.microchip.com/en-us/tools-resources/develop/mplab-x-ide) pour les uploader\
Vous pouvez lancer le firmware du robot en mode CLI sur votre poste:
 * clique droit sur le projet `Firmware` dans l'explorateur de solutions
 * sélectionnez "Propriétés"
 * sélectionnez "Propriétés de configuration / Général"
 * changer l'option "Type de configuration" en "Application (.exe)"
 * appliquez
 * clique droit sur le projet `Firmware` dans l'explorateur de solution
 * générer le projet
 * vous pouvez exécuter le projet en mode console

### Lancement
Vous pouvez également lancer une simulation du robot sur le terrain. Pour cela le `Firmware` doit  être compilé en temps que Bibliothèque dynamique (.dll) \
Le Simulateur pour être généré et exécuter depuis la solution [Mecapitronic_Software](https://github.com/Godeffroy/Mecapitronic_Software).

\
\
TODO ajouter les connexions séries pour communiquer avec le firmware
