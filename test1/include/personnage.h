#ifndef DEF_PERSONNAGE
#define DEF_PERSONNAGE

#include <iostream>
#include <string>
#include "Arme.h"

class Personnage
{
    public:
        Personnage();//constructeur
        Personnage(std::string nomArme, int degatsArme);
        ~Personnage();
        void recevoirDegats(int nbDegats);
        void afficherEtat() const;
        void attaquer(Personnage &cible);
        void boirePotionDeVie(int quantitePotion);
        void changerArme(std::string nomNouvelleArme,int degatsNouvelleArme);
        bool estVivant();


       private:

        int m_vie;
        int m_mana;
        std::string m_nomArme;
        int m_degatsArme;//Notre Personnage possède une Arme


};

#endif // PERSONNAGE_H
