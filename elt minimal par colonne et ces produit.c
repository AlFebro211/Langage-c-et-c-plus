#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[100][100],i,j,n,m,min[100],p;
    printf("enrer le nombre de ligne\n");
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
    printf("\n");
    p=1;
    for(j=0;j<m;j++)
    {
        min[j]=a[0][j];
        for(i=0;i<n;i++)
        {
            if(min[j]>a[i][j])
            {
                min[j]=a[i][j];
            }
        }
          printf("%3i",min[j]);
          printf("\n");
          p=p*min[j];
    }
    printf("produit est %i",p);
    return 0;
}
