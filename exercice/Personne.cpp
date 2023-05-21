#include "Personne.h"

using namespace std;

Personne::Personne(){
    m_niveauVie = 100;
    m_degatArme = 15;
    m_nomArme = "Epee";
}
Personne::Personne(string nomArme,int degatArme){
    m_niveauVie = 100;
    m_degatArme = degatArme;
    m_nomArme = nomArme;
}
void Personne::rechargerVie(){
    m_niveauVie = 100;
}

int Personne::niveauVie(){
    return m_niveauVie;
}

void Personne::attaquer(Personne &cible){
    cible.frapper(cible.m_degatArme);
}

void Personne::frapper(int degatArme){
    m_niveauVie -= degatArme;

    if(m_niveauVie < 0){
        m_niveauVie = 0;
    }
}

void Personne::changerArme(string nomArme,int degatArme){
    m_nomArme = nomArme;
    m_degatArme = degatArme;
}

bool Personne::enVie(){
    return m_niveauVie <= 0;
}
