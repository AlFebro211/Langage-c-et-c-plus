#include <stdio.h>
#include <stdlib.h>

int main()
{
    int B[100][100],i,j,n,pc[j],pt;
    printf("entrer la taille de matrice\n");
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
    printf("\n");
    pt=1;
    for(j=0;j<n;j++)
    {
        pc[j]=1;
        for(i=0;i<n;i++)
        {
           pc[j]=pc[j]*B[i][j];
           if(pc[j]<0)
            {
              pc[j]=1;
              break;
            }

        }
         pt=pt*pc[j];
    }
   printf("  %3i",pt);
    return 0;
}

