#include <stdio.h>
#include <stdlib.h>

   int saisirEntier(){
   int m;
   printf("\n choisissez un entier svp!:",m);
   scanf("%d",&m);
   return m;
   }
   int calculFactoriel(int m){
    int factoriel,i;
    factoriel=1;
    for(i=1;i<=m;i++){
        factoriel=factoriel*i;
    }
     return factoriel;
   }

   int main()
{ int a,b,c,d;
 a=saisirEntier();
 b=calculFactoriel(a);
  for (d=1;d<=a;d++){
    c=c*d;
  }
    printf("\n le factoriel de %d est %d:",a,b,c);
    return 0;
}
