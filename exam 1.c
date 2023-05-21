#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A[100],i,n,max,count,k;
    printf("entrer la taille du vecteur");
    scanf("%i",&n);
    for(i=0;i<n;i++)
    {
        printf("A[%i]=",i);
        scanf("%i",&A[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("%3i",A[i]);
    }
    printf("\n");
    max=0;
    for(i=0;i<n;i++)
    {
        if(max<A[i])
        {
            max=A[i];
              k=i;
        }
    }
    printf("max est %i",max);
    printf("\n");
    printf("son indice est %i",k);
    printf("\n");
    count=0;
    for(i=k+1;i<n;i++)
    {
        if(A[i]%2==0)
        {
            count=count+1;
        }
    }
    printf("nombre est %i",count);
}
