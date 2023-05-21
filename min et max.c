#include <stdio.h>
#include <stdlib.h>
#include <math.h>



int main()
{
    int n,i,j,min=0,max,t=0;
    int a[100];
    printf("Entrez la taille de votre tableau:\t");
    scanf("%d",&n);
    for(i=0;i<n;i++)
        {
    printf("Entrez l'entier numero %d:\t",i+1);
    scanf("%d",&a[i]);
    }
     for(i=0;i<n;i++)
        {
        printf("%d\t",a[i]);
       }
       printf("\n");
    min=a[0];

     for(i=1;i<n;i++)
    {
       if(min>a[i])
    {

               min=a[i];
    }
    }

    printf("Le chiffre minimale est %d:\n",min);
    max=a[0];

     for(i=1;i<n;i++)
    {
       if(max<a[i])
    {

            max=a[i];
    }
    }

    printf("Le chiffre maximale est %d:\n",max);


}
