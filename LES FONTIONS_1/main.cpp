#include <iostream>
using namespace std;

double surfaceRectangle(double longueur,double largeur)
{
double resultat;
resultat = largeur*longueur;
return resultat;
}
int main()
{
double longueur, largeur,surface;
cout << "Entrez la longueur : ";
cin >> longueur;
cout << "Entrez la largeur : ";
cin >> largeur;
surface = surfaceRectangle(largeur,longueur); //On utilise la fonction
cout << "La surface du rectangle de longueur de:" << longueur <<"et de largeur de:"<<largeur<<" est " << surface <<
endl;
return 0;
}
