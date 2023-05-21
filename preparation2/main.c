#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,m;
    do{
        printf("ENTRE Le premier :") ;
        scanf("%d", &a);
        printf("ENTRE Le second entier  :") ;
        scanf("%d", &m);
    } while(a<1&&m<1);

        if((a%m)==0&&(m%a)==0)
        {
            printf("ils sont divisible");
        }

        else{
            printf("ils ne sont pas divisible");
        }


    return 0;
}
