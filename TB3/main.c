#include <stdio.h>
main()
{
 /* D�clarations */
 int T[50]; /* tableau donn�    */
 int N;     /* dimension        */
 int I,J;   /* indices courants */

 /* Saisie des donn�es */
 printf("Dimension du tableau (max.50) : ");
 scanf("%d", &N );
 for (I=0; I<N; I++)
    {
     printf("El�ment %d : ", I);
     scanf("%d", &T[I]);
    }
 /* Affichage du tableau */
 printf("Tableau donn� : \n");
 for (I=0; I<N; I++)
     printf("%d ", T[I]);
 printf("\n");
 /* Effacer les z�ros et comprimer :        */
 /* Copier tous les �l�ments de I vers J et */
 /* augmenter J pour les �l�ments non nuls. */
 for (I=0, J=0 ; I<N ; I++)
     {
      T[J] = T[I];
      if (T[I]!=0)
        I++;
     }
 /* Nouvelle dimension du tableau ! */

  /* Edition des r�sultats */
 printf("Tableau r�sultat :\n");
 for (I=0; I<N; I++)
     printf("%d ", T[I]);
 printf("\n");
 return 0;
}
