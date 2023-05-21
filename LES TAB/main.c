#include <stdio.h>
#include <stdlib.h>
  int saisirTailleTableau()
 {   int N=0;
     int tab[N];
      printf("taper la taille du tableau svp:");
      scanf("%d",&N);
      for(int i=0;i<=N;i++){
      printf ("taper l'element tab[%i]:",i);
      scanf("%d",&tab[i]);
      }

 }

int  sommeTableau(int tab[])
{
    int som;
    for(int i=0;i<=tab[i];i++)
    {
      som=som+tab[i];
    }
    printf("\n",som);
}

int main()

{ int m,n;
   m=saisirTailleTableau();
   n=sommeTableau(int tab[]);
    return 0;
}
