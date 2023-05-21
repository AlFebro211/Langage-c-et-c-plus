#include <stdio.h>
#include <stdlib.h>
triple(int nombre)
{
    int h;
    h=nombre*3;
    return h;
}

int main()
{
    int t,j;
    printf("entre le nombre a calculer le triple\n");
    scanf("%i",&t);
    j=triple(t);
    printf("le triple est %i",j);
    return 0;
}
