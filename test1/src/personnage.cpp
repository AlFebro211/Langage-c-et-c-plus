#include "Personnage.h"

using namespace std;


void Personnage::recevoirDegats(int nbDegats)
{
m_vie -= nbDegats;
//On enl�ve le nombre de d�g�ts re�us � la vie du personnage
if (m_vie < 0) //Pour �viter d'avoir une vie n�gative
{
m_vie = 0; //On met la vie � 0 (cela veut dire mort)
}
}

 void Personnage::attaquer(Personnage &cible)

{
   cible.recevoirDegats(m_degatsArme);
}

  void Personnage::boirePotionDeVie(int quantitePotion)
{
m_vie += quantitePotion;
if (m_vie > 100) //Interdiction de d�passer 100 de vie
{
m_vie = 100;
}
}
void Personnage::changerArme(string nomNouvelleArme, int degatsNouvelleArme)
{
   m_nomArme=nomNouvelleArme;
   m_degatsArme = degatsNouvelleArme;
}
   bool Personnage::estVivant()
{
 return m_vie;
}

