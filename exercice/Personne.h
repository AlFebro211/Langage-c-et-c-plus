#ifndef PERSONNE_H_INCLUDED
#define PERSONNE_H_INCLUDED

#include <string>

class Personne{
public:
    Personne();
    Personne(std::string nomArme, int degatArme);
    void rechargerVie();
    void attaquer(Personne &cible);
    void changerArme(std::string nomArme,int degatArme);
    void frapper(int degatArme);
    int niveauVie();
    bool enVie();

private:
    int m_niveauVie;
    int m_degatArme;
    std::string m_nomArme;
};

#endif // PERSONNE_H_INCLUDED
