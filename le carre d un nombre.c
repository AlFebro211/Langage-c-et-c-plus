#include <stdio.h>
#include <stdlib.h>
int carre(int nombre)
{
    int a;
    a=nombre*nombre;
    return a;
}

int main()
{
    int x,y;
    printf("entrer le nombre a calcule le carre\n");
    scanf("%i",&x);
    y=carre(x);
    printf("le carre d un nombre est %i",y);
    return 0;
}
