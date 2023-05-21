#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[100],n,i,max,k,j;
    printf("entrer la taille du vecteur\n");
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
    max=a[0];
    for(i=0;i<n;i++)
    {
        if(max<a[i])
        {
            max=a[i];
            k=i;
        }
    }
    printf("maximum est %i",max);
    printf("\n");
    j=n-k-1;
    printf("les elements de droite est %i\n",j);
    printf("les elts de gouche est %i\n",k);
    printf("\n");
    if(k==j)
    {
        printf("les elements de gauche et droite sont egeaux");
    }
    else if(k>j)
    {
        printf("les elts de gauche est supperieur de droite");
    }
    else
        printf("les elements de de droite est superieur de gauche");

    return 0;
}
