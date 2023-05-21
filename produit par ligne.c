#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[100][100],i,j,n,m,p[100];
    printf("entrer le nombre d ligne\n");
    scanf("%i",&n);
    printf("entrer le nombre d colonne\n");
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
    for(i=0;i<n;i++)
    {
        p[i]=1;
        for(j=0;j<m;j++)
        {
            p[i]=p[i]*a[i][j];
        }
          printf("%3i",p[i]);
    }
}
