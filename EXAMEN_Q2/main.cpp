#include <iostream>

using namespace std;
class Compte{
private:
    int numero;
    float solde;
public:
    Compte(int n, float s)
    {
        numero = n;
        solde = s;
    }
    void modifierSolde(float m)
    {
        solde = m;
    }
    void afficherCompter(){
        cout<<" COMPTE NUMERO = " <<numero << " SOLDE #" << solde << " FBU "<<endl;
    }
};
int main()
{
    Compte c =  Compte(12,25000);
    c.afficherCompter();
    c.modifierSolde(475000);
  c.afficherCompter();

    return 0;
}
