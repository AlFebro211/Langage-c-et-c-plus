#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[100][100],i,j,n,m,p;
    printf("entrer le nombre de ligne\n");
    scanf("%i",&n);
    printf("entrer le nombre de colonne\n");
    scanf("%i",&m);
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("a[%i][%i]=",i,j);
            scanf("%i",&a[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%3i",a[i][j]);
        }
          printf("\n");
    }
    int pc[50],pt=1;
    for(j=0;j<m;j++)
    {
        pc[j]=1;
        for(i=0;i<n;i++)
        {
            pc[j]=pc[j]*a[i][j];
        }
        if(pc[j]==0)
        {
            pc[j]=1;
        }
        else
            pt=pt*pc[j];

    }
    printf("\n produit des elts de clnn ne conten pas elt nul est %i",pt);
    }
