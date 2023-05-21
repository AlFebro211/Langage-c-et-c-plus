#include <stdio.h>
#include <stdlib.h>
int carree(int nombre)
{
    int a;
    a=nombre*nombre;
    return a;
}

int main()
{
    int x,y;
    printf("entre le nombre a calculer le carree\n");
    scanf("%i",&x);
    y=carree(x);
    printf("le carree de nombre est %i",y);

    return 0;
}
