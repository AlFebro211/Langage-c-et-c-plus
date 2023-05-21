#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[100][100],i,j,n,m,min;
    printf("entrer le nbre de ligne\n");
    scanf("%i",&n);
    printf("entrer le nbre de colonne\n");
    scanf("%i",&m);
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("a[%i][%i]=",i,j);
            scanf("%i",&a[i][j]);
    }}
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%3i",a[i][j]);
        }
          printf("\n");
    }
    min=a[0][0];
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(min>a[i][j])
            {
                min=a[i][j];
            }
        }
    }
    printf("minimal est est %i",min);
}
