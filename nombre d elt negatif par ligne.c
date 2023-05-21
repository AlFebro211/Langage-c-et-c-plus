#include <stdio.h>
#include <stdlib.h>

int main()

{
    int a[100][100],i,j,n,m,k[100];
    printf("entrer le nombre de ligne");
    scanf("%i",&n);
    printf("entrer lrn nombre de colonne");
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
    k[i]=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(a[i][j]<0)
            {
                k[i]++;
            }
        }
        printf("%3i",k[i]);
    }

    return 0;
}
