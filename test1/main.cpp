#include <iostream>
#include "Personnage.h" //Ne pas oublier
using namespace std;
int main()
{

Personnage david, goliath;
//Cr�ation de 2 objets de type Personnage : david et goliath
goliath.attaquer(david); //goliath attaque david
david.boirePotionDeVie(20); //david r�cup�re 20 de vie en buvant une potion
goliath.attaquer(david); //goliath r�attaque david
david.attaquer(goliath); //david contre-attaque...c'est assezclair non ?
goliath.changerArme("Double hache tranchante v�n�neuse de la mort", 40);
goliath.attaquer(david);

cout << "David" << endl;
david.afficherEtat();
cout << endl << "Goliath" << endl;
goliath.afficherEtat();
return 0;
}
