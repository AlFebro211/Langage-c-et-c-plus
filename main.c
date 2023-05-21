#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[100],i,n,s,p,max,min,k,v,m,h,count;
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
    p=1;
    for(i=0;i<n;i++)
    {
        p=p*a[i];
    }
    printf("produit est %i",p);
    printf("\n");
    max=a[0];
    for(i=0;i<n;i++)
    {
        if(max<a[i])
        {
            max=a[i];
        }
    }
   printf("maxim est %i",max);
    printf("\n");
    min=a[0];
    for(i=0;i<n;i++)
    {
        if(min>a[i])
        {
            min=a[i];
        }
    }
    printf("minim est %i",min);
    return 0;
}
