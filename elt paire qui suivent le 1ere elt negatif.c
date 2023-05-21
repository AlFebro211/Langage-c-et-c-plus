#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[100],n,i,k,count=0,t;
    printf("entrer la valeur\n");
    scanf("%i",&n);
    for(i=0;i<n;i++)
    {
        printf("a[%i]=",i);
        scanf("%i",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("%3i",a[i]);
    }
    printf("\n");
    for(i=0;i<n;i++)
    {
        if(a[i]<0)
        {
          k=a[i];
          t=i;
          break;
    }}
    printf("le 1ere element negatif est %i",k);
    printf("\n");
    for(i=t+1;i<n;i++)
    {
        if(a[i]%2==0)
        {
            count=count+1;
        }
    }
    printf("le nombre d'element paire qui suivent la 1er elt negatif est %i",count);
    return 0;
 }
