#include <stdio.h>
#include <stdlib.h>

    int calculerOccurence(int tab[], int taille, int e)
    {
    int n = 0;
    for(int i =0; i< taille; i++)
                if(tab[i] == e)
                n++;
    return n;
}

int saisirNDimension(){
    int dimension = 0;
    do{
        printf("\nENTRE LA DIMENSION D'UNE MATRICE : ");
        scanf("%d", &dimension);
    }while(dimension < 0 || dimension > 50);

    return dimension;
}


int main()
{
    int dimension = 0;
    int tab[50];
    for(int i = 0; i < dimension ; i++)
    {
        printf("\n ENTRE LA VALEUR DU CASE %d : ", i);

        scanf("%d", &tab[i]);
    }

     for(int i = 0; i < dimension ; i++)
     {
         if(tab[i] !=0)
            printf("%d \n", tab[i]);
     }

     int  zeros = calculerOccurence(tab,dimension,0);

     printf("ZERO APPARTIENT %d FOIS DANS LE TABLEAU ",zeros );

    return 0;
}
