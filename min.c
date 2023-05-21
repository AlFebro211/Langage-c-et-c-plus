#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[100],n,i,min;
    printf("enter la valeur\n");
    scanf("%i",&n);
    for(i=0;i<n;i++)
    {
        printf("a[%i]=",i);
        scanf("%i",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("%3i",a[i]);
    }
    printf("\n");
    min=a[0];
    for(i=0;i<n;i++)
    {
        if(min>a[i])
        {
            min=a[i];
        }
    }
    printf("minimal est %i",min);
    return 0;
}
