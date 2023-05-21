#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[100],n,i,max;
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
    max=a[0];
    for(i=0;i<n;i++)
    {
        if(max<a[i])
        {
            max=a[i];
        }
    }
    printf("maximal est %i",max);
    return 0;
}
