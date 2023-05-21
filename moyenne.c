#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a[100],n,i,s,m;
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
   s=0;
   for(i=0;i<n;i++)
   {
       s=s+a[i];
   }
   printf("somme est %i",s);
   printf("\n");
   for(i=0;i<n;i++)
   {
       m=s/n;
   }
   printf("moyenne est %i",m);
    return 0;
}
