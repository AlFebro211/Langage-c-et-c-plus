#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a[100],n,i,count;
   printf("entrer le nombre\n");
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
    count=0;
    for(i=0;i<n;i++)
    {
        if(a[i]<0)
        {
            count=count+1;
        }
    }
    printf(" nbre elt negatif est %i",count);
    return 0;
}
