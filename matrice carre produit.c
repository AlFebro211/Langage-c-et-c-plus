 #include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[100][100],i,j,n,m,p;
    printf("entrer le nombre de ligne\n");
    scanf("%i",&n);
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
    p=1;
     for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(i==j)
            {
                 s=s+a[i][j];
            }
        }
    }

           printf("produit est %i",p);
    return 0;
}
