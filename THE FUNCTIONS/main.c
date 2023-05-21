#include <stdio.h>
#include <stdlib.h>


int saisirCote()
{
    int cote;
    printf("saisir le cote du carree:");
    scanf("%d",&cote);
    return cote;
}
int calculSurface(int cote)
{
    int surface;
    surface=cote*cote;
printf("le surface d'un carree est :%d",surface);

}
int main()
{

    int a,b;
    a=saisirCote();
    b=calculSurface(a);
    return 0;
}
