#include <iostream>

using namespace std;

int main()

 {
     float a,b,c;
     float somme;
     float moyenne;

    cout << "taper la note du 1ere  evaluation" << endl;
    cin>>a;
     cout << "taper la note du 2eme  evaluation" << endl;
    cin>>b;
     cout << "taper la note du 3eme evaluation" << endl;
    cin>>c;
    somme=(a+b)+c;
    moyenne=somme/3;
    cout<<"la moyenne de trois notes est:",somme,moyenne;
    return 0;
}
