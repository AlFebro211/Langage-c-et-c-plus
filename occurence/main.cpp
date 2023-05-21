#include<iostream>

using namespace std;

int main()

{

int nb,max,x,i;

for(i=0;i<10;i++)

        {

        cout<<"Tapez un entier : ";
        cin>>x;

         if(i==0){max=x;nb=1;}

        else if(x==max)nb++;

        else if(max)
            {
                max=x;
                nb=1;
        }

        }

cout<<"le nombre d'occurences de max est:"<<nb<<endl;

return 0;

}
