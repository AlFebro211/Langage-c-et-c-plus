
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[100][100],i,j,n,p;
    printf("entrer le taille de la matrice\n");
    scanf("%i",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("a[%i][%i]=",i,j);
            scanf("%i",&a[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%4i",a[i][j]);
        }
    printf("\n");
    }
     p=1;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(j==n-i-1)
            {
                p=p*a[i][j];
            }
        }
    }
    printf("la prt est %i ",p);
}
