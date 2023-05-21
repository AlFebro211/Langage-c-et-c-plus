#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N=0;
    int tab[N];
    int i=0;
    do
     {
     printf("\n taper la dimension du tableau:");
    scanf("%d",&N);
    }while(N<0||N>50);
    for(i=0;i<=N;i++)
        {
     printf("\n taper la valeur %d du tableau:",i);
    scanf("%d",&tab[i]);
    }
    printf("\n %d:");
    int p=0;
    for(i=0;i<=N;i++)
    {
    if (tab[i]>=0)
        p++;

         printf("les elements qui sont TPOS sont:",p);
    }


    return 0;
}
