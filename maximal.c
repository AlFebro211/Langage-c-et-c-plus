#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a[100],n,i,t,k;
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
   for(i=o;i<n;i++)
   {
       if(a[i]<0)
       {
           t=a[i];
           k=i;
           break;
       }
   }
   printf("1ere elt negatf est %i",t,k);

}
