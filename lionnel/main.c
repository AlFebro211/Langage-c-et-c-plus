
#include <stdio.h>
#include <stdlib.h>

int main()
{
   int nombre1,nombre2,reste,produit;
   printf ("saisir le premier nombre:",nombre1);
   scanf("%d",&nombre1);
   printf ("saisir le second nombre:",nombre2);
   scanf("%d",&nombre2);
   produit=nombre1*nombre2;
   reste=nombre1%nombre2;
   while(reste!=0)

   {nombre1=nombre2;
    nombre2=reste;
    reste=nombre1%nombre2;
     }
       printf("PGCD =%d:",nombre2,produit/nombre2);
    return 0;
}

