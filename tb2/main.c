#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;
    int T[50];
    int i;
    int somme=0;
    printf("taper la dimension du table\n:");
    scanf("%d",&N);
    for(i=0;i<N;i++){
        printf("T[%d]:",i);
        scanf("%d",&T[i]);
    }
    for (i=0;i<N;i++)
    {
      printf("\n %d" ,T[i]);
    }
for (i=0;i<N;i++){
    somme=somme+T[i];
}
printf("\n la somme des elements du tableau est: %d",somme);
    return 0;
}
