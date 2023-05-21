#include <stdio.h>
#include <stdlib.h>
racine(int nombre)
{
    int a;
    a=sqrt(nombre);
    return a;
}

int main()
{
    int x,y;
    printf("entre le nmbre a calculer racine\n");
    scanf("%f",&x);
    y=sqrt(x);
    printf(" racine est %f",y);
    return 0;
}
