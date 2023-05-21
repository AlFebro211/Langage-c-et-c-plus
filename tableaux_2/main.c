#include <stdio.h>
#include <stdlib.h>

int main()
{
    int j = 0;
    int i = 0;
    int somme =0;
    int t[3][3]={{4,5,6},{7,8,4},{2,7,5}};

    for(i =2;i<3; i++){
        for(j=1;j<3; j++){

                 somme += t[i][j];
            }
        }




     printf("LA SOMME A L'INTERIEUR EST %d \n ", somme);



    return 0;
}
