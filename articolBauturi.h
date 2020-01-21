#ifndef ARTICOLBAUTURI_H_INCLUDED
#define ARTICOLBAUTURI_H_INCLUDED



#endif // ARTICOLBAUTURI_H_INCLUDED
#include "articol.h"

class articolBauturi:public articol{
    int termen_valabilitate;
    double pret;
public:
    articolBauturi();
    articolBauturi(char denumire[], int termen_valabilitate, double pret);
    ~articolBauturi();

    void afisare();
    void setTermen(int v);
    int getTermen();

};
