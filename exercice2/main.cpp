#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  int a,n,p;
      cout << "saisir un entier:"<< endl;
      cin>>a;
      cout << "saisir le second entier:"<< endl;
      cin>>n;
    if (a>0&&n>0)
        {
     p =pow(a,n) ;
    cout << "la puissance est:"<<p<< endl;
    }
  else
   {
     cout << "desole orgad je suis pas vrt capable de te donner la puissance !!!!!!:"<< endl;
    }

    return 0;
}
