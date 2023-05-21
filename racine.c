#include <stdio.h>
#include <stdlib.h>
int racine(int nombre)
{
    int a;
    a=sqrt(nombre);
    return a;
}

int main()
{
    float x,y;
    printf("entrer le nombre a calcule la racine\n");
    scanf("%f",&x);
    y=sqrt(x);
    printf("la racine d un nombre est %f",y);
    return 0;
}
