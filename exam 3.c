#include <stdio.h>
#include <stdlib.h>

int main()
{
    int B[100][100],i,j,n,k,p[j],pt;
    printf("entrer la taille de la matrice\n");
    scanf("%i",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("a[%i][%i]=",i,j);
            scanf("%i",&B[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%3i",B[i][j]);
        }
        printf("\n");
    }
    pt=1;
    for(j=0;j<n;j++)
    {
        p[j]=1;
        for(i=0;i<n;i++)
        {
                p[j]=p[j]*B[i][j];
                if(p[j]%2==1)
                {
                    p[j]=1;
                }
        }
        pt=pt*p[j];

    }
    printf("produit%i",pt);





    return 0;
}
