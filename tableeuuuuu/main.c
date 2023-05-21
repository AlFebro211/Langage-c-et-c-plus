#include <stdio.h>
#include <stdlib.h>

  int main()
{

    int T[50];
    int N;
    int i;
    printf("saisir le dimension d'un tableau:");
    scanf("%d",&N);
   for (i=0; i<N; i++)
    {
     printf("%d \n: ", i);
     scanf("%d", &T[i]);
    }
     for (i=0; i<N; i++)
     printf("%d ", T[i]);
 printf("\n");



    return 0;
}
