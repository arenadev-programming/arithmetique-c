#include <stdio.h>
#include "include/header.h"

int main(void){
    int nombre1, nombre2;

    printf("Entrez le premier nombre : ");
    scanf("%d", &nombre1);

    printf("Entrez le deuxieme nombre : ");
    scanf("%d", &nombre2);

    printf("La somme est : %d\n", somme(nombre1, nombre2));

    afficher_trait();

    printf("Le produit est : %d\n", produit(nombre1, nombre2));

    afficher_trait();

    printf("Le quotient entier est : %d\n", quotient_entier(nombre1, nombre2));
    
    afficher_trait();
    
    printf("Le reste est : %d\n", reste(nombre1, nombre2));
    
    return 0;
}