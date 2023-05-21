#include <stdio.h>
#include <stdlib.h>

int main()
{
int a[100],i,n,k,count,j;
printf("entre le nombre du vecteur");
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
for(i=n-1;i<n;i--)
{
    if(a[i]<0)
    {
        k=a[i];
        j=i;
        break;
    }
}
        printf("le dernier elmt est %i",k);
        printf("\n");
        count=0;
        for(i=j+1;i<n;i++)
        {
            if(a[i]%2==0)
            {
             count=count+1;
            }
        }
        printf("le nmbr elmt paire qui suit elmnt ngtf est %i",count);
    return 0;
}
