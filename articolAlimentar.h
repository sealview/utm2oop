#ifndef ARTICOLALIMENTAR_H_INCLUDED
#define ARTICOLALIMENTAR_H_INCLUDED



#endif // ARTICOLALIMENTAR_H_INCLUDED
#include "articol.h"

class articolAlimentar:public articol{
    int termen_valabilitate;
    double pret;
public:
    articolAlimentar();
    articolAlimentar(char denumire[], int termen_valabilitate, double pret);
    ~articolAlimentar();

    void afisare();
    void setTermen(int v);
    int getTermen();

};
