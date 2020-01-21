#include <iostream>
#include "articol.h"
#include "articolAlimentar.h"
#include <string.h>

using namespace std;

articolAlimentar::articolAlimentar(){
    termen_valabilitate = 0;
    pret = 0.0;
}

articolAlimentar::articolAlimentar(char denumire[], int termen_valabilitate, double pret){
    this->termen_valabilitate = termen_valabilitate;
    this->pret = pret_furnizor * (adaos / 100);
}

articolAlimentar::~articolAlimentar(){
    cout<<"desctruct Alimentar";
}

void articolAlimentar::afisare(){
    articol::afisare();
    cout<<termen_valabilitate<<"\t"<<pret<<" lei"<<endl;
}

void articolAlimentar::setTermen(int v){
    termen_valabilitate = 0;
}

int articolAlimentar::getTermen(){
    return termen_valabilitate;
}
