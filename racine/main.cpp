#include <iostream>
#include <cmath>

using namespace std;

int main()



{
    int a,b,c,racine_carre,D,x1,x2;
    cout << "taper la valeur de a:" << endl;
    cin>>a;
    cout<<"taper la valeur de b:" <<endl;
    cin>>b;
    cout<<"taper la valeur de c:" <<endl;
    cin >>c;
    D = b*b-4*a*c;
    racine_carre = sqrt(D);

    if (racine_carre > 0)
        {
        x1 = (-b-racine_carre)/2*a;
        x2 = (- b + racine_carre)/2*a;
        cout<< "les racines de cette equation sont:"<< x1 << "et"<< x2 << endl;

    }
    else if (racine_carre = 0)
        {
        x1 = -b/2*a;
        x2 = - b/2*a;
         cout<< "les racines de cette equation sont:"<< x1 << "et"<< x2 << endl;

    }
    else{
        cout<<"les racines de cette equations n'existent pas!!";
    }

    return 0;
}
