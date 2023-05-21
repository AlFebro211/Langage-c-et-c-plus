#include "fonctions.h"

using namespace std;

string melanger(string motMystere){
    int position(0);
    string motMelanger;

    while(motMystere.size() > 0){
        position = rand() % motMystere.size();
        motMelanger += motMystere[position];
        motMystere.erase(position, 1);
    }

    return motMelanger;
}
