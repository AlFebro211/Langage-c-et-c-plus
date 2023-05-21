#include <stdio.h>


int SaisirEntier()
{
    int y;
    printf("\n saisir un entier:",y);
    scanf("%d",&y);
    return y;
}
   int Triple(int y)
{
    int r;
    r=y*3;
    return r;
}
int main()
{
    int m,n;
    m= SaisirEntier;
    n=Triple(m);
    printf("\n %d *3 est %d:",m,n);
    return 0;
}
