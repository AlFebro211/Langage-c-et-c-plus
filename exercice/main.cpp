#include <iostream>
#include "Personne.h"

using namespace std;

int main()
{

    //Creation de Billy et Dave
    Personne Billy,Dave("Bazuka",38);

    cout << "Billy attaque Dave" << endl;

    Billy.attaquer(Dave);

    cout << "Dave attaque Billy" << endl;

    Dave.attaquer(Billy);

    cout << "Billy, il vous reste " << Billy.niveauVie() << endl;
    cout << "Dave, il vous reste " << Dave.niveauVie() << endl;

    Dave.attaquer(Billy);

    if(Billy.enVie()){
        cout << "Vous etes mort" << endl;
    }else{
        cout << "Voulez-vous continuer(O/N)" << endl;
    }

    return 0;
}
