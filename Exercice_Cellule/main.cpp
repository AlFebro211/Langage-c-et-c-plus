#include <iostream>

using namespace std;

struct Cellule{
    char collonne;
    int ligne;
    float valeur;
};

typedef struct Cellule Cellule;

Cellule createCellule(){
    Cellule c;
    cout<<"\n ENTRE LA LETTRE DE COLLONNE  : " ;
    cin>>c.collonne;
    cout<<" \n ENTRE LE NUMERO D'UNE LIGNE : ";
    cin>>c.ligne;
    cout<<"\n ENTRE LA VALEUR : ";
    cin>>c.valeur;
    return c;
}

void afficherCellule(Cellule c){
    cout<<"\n COLONNE : "<< c.collonne;
    cout<<"\n LIGNE : "<< c.ligne;
    cout<<"\n VALUER : "<< c.valeur;
}

Cellule  modifierCellule(Cellule c){
    cout<<" ENTRE LA NOUVELLE VALEUR : ";
    cin>>c.valeur;
    return c;
}
int main()
{
    Cellule c = createCellule();

    afficherCellule(c);
    cout<<"\n ============MODIFICATION ============== \n ";

    c= modifierCellule(c);

    cout<<"\n==============APRES LA MODIFICATION ================= \n";

     afficherCellule(c);
    return 0;
}
