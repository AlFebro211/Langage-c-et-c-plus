#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[100],n,i,k;
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
    for(i=n-1;i>=0;i--)
    {
        if(a[i]<0)
        {
          k=a[i];
          break;
    }}
    printf("1ere element negatif est %i",k);
    return 0;
 }
