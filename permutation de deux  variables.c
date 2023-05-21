#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    printf("entrer la valeur de a\n");
    scanf("%i",&a);
    printf("entrer la valeur de b\n");
    scanf("%i",&b);
    printf("avant permutation a=%i",a);
    printf("\n");
    printf("avant permutation b=%i",b);
    printf("\n");
    c=a;
    a=b;
    b=c;
    printf("apres permutation a=%i",a);
    printf("\n");
    printf("apres permutation b=%i",b);

    return 0;
}
