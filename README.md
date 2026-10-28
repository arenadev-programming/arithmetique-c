# Mini-projet : Calculateur Arithmétique en C

Premier mini-projet pratique du **Cours 1 : Les bases de l'arithmétique pour un développeur C/C++**.

## Description
Ce programme en langage C demande à l'utilisateur de saisir deux entiers, puis calcule et affiche :
- Leur **somme** (`+`)
- Leur **produit** (`*`)
- Leur **quotient entier** (`/`)
- Le **reste de la division** ou modulo (`%`), avec gestion de la sécurité (division par zéro).

## Code Source
Le code source principal se trouve dans le fichier `main.c`.

## Compilation et Exécution

### Sous Windows (avec GCC / MinGW) :
```bash
# Compilation
gcc main.c -o calculateur.exe

# Exécution
./calculateur.exe