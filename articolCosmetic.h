#ifndef ARTICOLCOSMETIC_H_INCLUDED
#define ARTICOLCOSMETIC_H_INCLUDED



#endif // ARTICOLCOSMETIC_H_INCLUDED
#include "articol.h"

class articolCosmetic:public articol{
    int termen_valabilitate;
    double pret;
public:
    articolCosmetic();
    articolCosmetic(char denumire[], int termen_valabilitate, double pret);
    ~articolCosmetic();

    void afisare();
    void setTermen(int v);
    int getTermen();

};
