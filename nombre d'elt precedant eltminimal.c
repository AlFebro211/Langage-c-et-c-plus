#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A[100],i,n,min,k,count;
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
    min=A[0];
    for(i=0;i<n;i++)
    {
        if(min>A[i])
        {
            min=A[i];
            k=i;
        }
    }
    printf("minimum est %i",min);
    printf("\n");
    count=0;
    for(i=k+1;i<n;i++)
    {
        count=count+1;
    }
    printf("nombre d'elt est %i",count);
    return 0;
}
