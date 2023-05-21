#include <stdio.h>
#include <stdlib.h>

float saisirReel(){
float m;
printf("saisir un reel:",m);
scanf("%f",&m);
return m;
}
float triple(float m){
float n;
n=m*3;
return n;
}

  int main()
{
    float l,k;
    l=saisirReel();
    k=triple(l);
    printf("\n le triple de %f est %f:",l,k);
    return 0;
}
