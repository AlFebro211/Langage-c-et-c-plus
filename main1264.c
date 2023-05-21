#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,f,D,k,x1,x2;
    printf("entrer la valeur de a\n");
    scanf("%i",&a);
    printf("entrer la valeur de b\n");
    scanf("%i",&b);
    printf("entrer la valeur de c\n");
    scanf("%i",&c);
    f=pow(b,2);
    D=f-4*a*c;
    k=sqrt(D);
    if(D==0)
    {
        x1=x2=-b/2*a;
        printf("%i",x1);
    }
    else if(D>0)
    {
        x1=(-b+k)/2*a;
        x2=(-b-k)/2*a;
    printf("%i",x1);
    printf("\n");
    printf("%i",x2);
    }
    else
    {
         printf("pas de solution");
    }
    return 0;
}
