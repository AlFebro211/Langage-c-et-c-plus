#include<stdio.h>
#define NOMBRELEMENTS 6
int main()
{
int a[NOMBRELEMENTS],i,j,m;
for(i=0;i<NOMBRELEMENTS;i++)
{
printf("a[%i]=",i);
scanf("%i",&a[i]);
}
for(i=0;i<NOMBRELEMENTS;i++)
{
 printf("%3i",a[i]);
}
printf("\n");
 j=0;
 for(i=0;i<NOMBRELEMENTS;i++)
 {
 if(a[i]%2==1)
 j++;
 }
 printf("\n le nombre d'element impair est =%i\n",j);
 m=0;
  for(i=0;i<NOMBRELEMENTS;i++)
 {
 if(a[i]%2==0)
 m++;
 }
 printf("\n le nombre d'element pair est =%i\n",j);
}
