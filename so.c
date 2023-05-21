 #include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[100][100],i,j,n,m,s;
    printf("entrer le nombre de ligne\n");
    scanf("%i",&n);
    printf("entrer le nombre de colone\n");
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
    s=0;
     for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            s=s+a[i][j];
        }
    }

           printf("somme est %i",s);
    return 0;
}
