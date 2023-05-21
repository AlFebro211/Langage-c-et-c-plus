#include <stdio.h>
#include <stdlib.h>

int main()
{
    int moyenne=0;
    int somme = 0;
    int produit =1;
    int nombre[5]={5,2,4,2,5};
    for(int i=1;i<5;i++){
        printf("la valeur de la case numero%d est %d\n:",i,nombre[i]);

        somme += nombre[i];
        produit = produit * nombre[i];
        moyenne=somme/5;
    }
     printf("la somme des valeurs du tableaux est %d\n",somme);
     printf("le produit des valeurs du tableaux est %d\n",produit);
     printf("la moyenne du tableau est %d\n",moyenne);


    return 0;
}


