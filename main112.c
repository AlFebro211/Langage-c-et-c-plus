#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,d,e,x,y;
    printf("entrer la valeur de b\n");
    scanf("%i",&b);
    printf("entrer la valeur de c\n");
    scanf("%i",&c);
    printf("entrer la valeur de d\n");
    scanf("%i",&d);
    printf("entrer la valeur de e\n");
    scanf("%i",&e);
    x=pow(b,7);
    y=sqrt(pow(d,3.5));
    a=(x*c*y)/e;
    if(e>0);
    {
        printf("%i",a);
    }
}
