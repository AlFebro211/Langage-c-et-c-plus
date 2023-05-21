#include <stdio.h>
#include <stdlib.h>

int main()

  {
    int entierPositif;

    do{
        printf("ENTRE UN ENTIER POSITIF [2,20]: ");
        scanf("%d", &entierPositif);
    } while(entierPositif< 2||entierPositif>20 );

    return 0;
}
