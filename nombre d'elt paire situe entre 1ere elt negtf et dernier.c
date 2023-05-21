#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a[100],n,i,t,k,count=0,m,l;
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
    for(i=0;i<n;i++)
    {
        if(a[i]<0)
        {
            k=a[i];
            t=i;
            break;
        }
    }
    printf(" 1ere elt negatif est %i",k);
    printf("\n");
    printf("indice est %i",t);
    }
    printf(" 1ere elt negatif est %i",t);
        }
    }
    printf(" 2ere elt negatif est %i",m);
    printf("\n");
    printf("indice est %i",l);
    for(i=k+1;i<l;i++)
    {
        if(a[i]%2==0)
        {
            count=count+1;
        }
    }
    printf("nombre d'elt paire situe entre 1ere elt negtf et dernier est %i",count);
    return 0;
}
