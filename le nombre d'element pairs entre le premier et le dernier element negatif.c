#include <stdio.h>
#include <stdlib.h>

int main()
{
 int a[100],i,n,k,count,l;
 printf("entrer la taille du vecteur");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
     printf("a[%i]=",i);
     scanf("%i",&a[i]);
 }
 for(i=0;i<n;i++)
 {
     printf("%2i",a[i]);
 }
 printf("\n");
 for(i=0;i<n;i++)
    {
        if(a[i]<0)
        {
            k=i+1;
            break;
        }
    }
    for(i=n-1;i>=0;i--)
    {
        if(a[i]<0)
        {
            l=i;
            break;
        }
    }
    count=0;
    for(i=k;i<l;i++)
    {
        if(a[i]%2==0)
        {
            count++;
        }
    }
    printf("le nombre d'element pairs entre le premier et le dernier element negatif est %d",count);
}
