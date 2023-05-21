#include <stdio.h>
#include <stdlib.h>

int saisirEntier(){
int a;
printf("saisir un entier:",a);
scanf("%d",&a);
return a;
}
int verifierEntier(int a){
    int m;
    m=a%2;
if (m==0)
{
return 1;
}
else
{
return 0;
}
}

int main()
{
    int n,l;
    n=saisirEntier();
    l=verifierEntier (n);
    if ((n%2)==0){
         printf("\n l'entier saisi est pair:",l);
    }

    else{
         printf("\n l'entier saisi n'est pas pair:",l);
   }
    return 0;
}
