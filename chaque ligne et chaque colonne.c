#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[100][100],i,j,n,m,s[100],t[100];
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
        printf("\n\n");
    }

       for(i=0;i<n;i++)
    {
        s[i]=0;
        for(j=0;j<m;j++)
        {
          s[i]=s[i]+a[i][j];
        }
         printf("%3i",s[i]);
    }
    printf("\n");
    for(j=0;j<m;j++)
    {
        t[j]=0;
        for(i=0;i<n;i++)
        {
            t[j]=t[j]+a[i][j];
        }
        printf("%3i",t[j]);
    }
}
