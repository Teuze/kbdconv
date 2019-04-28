# Convertisseur PS/2 Bluetooth pour clavier

## Présentation

Le convertisseur clavier est un dispositif électronique destiné à rendre un clavier PS/2 sans-fil.

A terme, il pourrait également être employé pour les claviers filaires USB.

## Matériel requis

Les composants nécessaires à sa fabrication sont les suivants :

    - Une carte microcontrôleur Arduino (La plupart des modèles conviennent)
    - Un module de communication clavier Bluetooth Bluefruit EZ-Key
    - De quoi alimenter les cartes (une pile 9V fait l'affaire)
    - Du matériel de soudure et une embase PS/2 femelle
 
 Le schéma ci-dessous donne les détails de soudure entre les différents composants.
 

### 1. Prérequis logiciels

Ce code repose sur la bibliothèque **PS2KeyRaw** qui permet de lire octet par octet les échanges PS/2.

Il utilise **SoftwareSerial** et la bibliothèque de base pour les communications sérielles.

### 2. Compilation avec l'IDE Arduino

La compilation avec l'IDE Arduino s'effectue comme suit :

    - Récupérez la bibliothèque PS2KeyRaw via Croquis -> Inclure une bibliothèque -> Gérer les bibliothèques
    - Sélectionnez le port et le type de carte correspondant à votre configuration
    - Activez le moniteur série si nécessaire (mode déboguage)
    - Lancez la compilation puis le téléversement.
    
## Utilisation du convertisseur

Si la compilation et le téléversement se sont bien passés, on peut voir en activant un moniteur série les codes PS/2 et HID des touches appuyées.

L'appairage de l'appareil avec un ordinateur se fait comme décrit sur cette page.

## Améliorations restantes à apporter

    - Les lumières des touches de verrouillage (NUM, CAPS, SCROLL) ne s'activent pas (mais les touches fonctionnent).
    - Du fait de la technique d'acquisition de données, les touches restent parfois bloquées. Rappuyer pour débloquer.

## Utilisation du code source

<a rel="license" href="http://creativecommons.org/licenses/by-sa/4.0/"><img alt="Licence Creative Commons" style="border-width:0" src="https://i.creativecommons.org/l/by-sa/4.0/88x31.png" /></a>

<br />Ce code est mis à disposition selon les termes de la <a rel="license" href="http://creativecommons.org/licenses/by-sa/4.0/">Licence Creative Commons Attribution -  Partage dans les Mêmes Conditions 4.0 International</a>.

-------------------------------------


2016 - Richard Jarry et Louis Caravelle


