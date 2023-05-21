#include <stdio.h>
#include <stdlib.h>

int saisirEntier(){
int a;
do{
 printf("\n saisir entier positif svp:",a);
scanf("%d",&a);
} while(a<0);
return a;

}
int saisirAutreEntier(){
int n;
do{
    printf("\n saisir un autre entier positif svp:",n);
scanf("%d",&n);
}while(n<0);
return n;
}
int calculPuissance(int a,int n){
int h;
h=pow(a,n);
return h;
}
int main()
{ int m,k,i;
m=saisirEntier();
k=saisirAutreEntier();
i=pow(m,k);
    printf("\n la puissance de %d et %d est %d:",m,k,i);
    return 0;
}

