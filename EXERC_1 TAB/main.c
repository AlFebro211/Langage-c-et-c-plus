#include<stdio.h>
int main()
{
int a[4][4],i,j,n,m;
printf("entre le nombre de ligne n=");
scanf("%i",&n);
printf("entre le nombre de colonnes m=");
scanf("%i",&m);
for(i=0;i<n;i++)
{
 for(j=0;j<m;j++)
 {
 printf("a[%i][%i]=",i,j);
 scanf("%2i",&a[i][j]);
 }
}
for(i=0;i<n;i++)
 {
 for(j=0;j<m;j++)
 {

 printf("%4i",a[i][j]);
 }
 printf("\n");
}


return 0;
}
