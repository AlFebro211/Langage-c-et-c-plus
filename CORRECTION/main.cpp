#include <iostream>

using namespace std;

struct Compte{
    int numero;
    float solde;
};

typedef struct Compte Compte;

Compte creerCompte() {
    Compte c;
    cout<<" \n ENTRE LE NUMERO DE COMPTE : " ;
    cin>>c.numero;
    cout<<"\n ENTRE LE MONTANT : ";
    cin>>c.solde;

    return c;
}

    void afficherCompte(Compte c){
    cout<<" \n le numero de compte est: " << c.numero << " son solde est:#"<<c.solde << " FBU \n";
}

Compte modifierSolde(Compte c){
    cout<< "\n ENTRE LE NOUVEAU MONTANT :";
    cin>>c.solde;
    return c;
}

int main()
{
   Compte milli = creerCompte();
   afficherCompte(milli);
   milli = modifierSolde(milli);
   cout<< " \n ====== APRES LA MODIFICATION ======= \n ";
   afficherCompte(milli);

    return 0;
}
