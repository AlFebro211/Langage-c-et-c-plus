#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[100][100],i,j,n,s,l,k,p;
    printf("entrer la taille\n");
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
            printf("%3i",a[i][j]);
        }
        printf("\n");
    }
    s=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j+k)
            {
                s=s+a[i][j];
            }
        }
    }
    printf("somme est %i",s);
    return 0;
}