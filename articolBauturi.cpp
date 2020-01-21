#include <iostream>
#include "articol.h"
#include "articolBauturi.h"
#include <string.h>

using namespace std;

articolBauturi::articolBauturi(){
    termen_valabilitate = 0;
    pret = 0.0;
}

articolBauturi::articolBauturi(char denumire[], int termen_valabilitate, double pret){
    this->termen_valabilitate = termen_valabilitate;
    this->pret = pret_furnizor * (adaos / 100);
}

articolBauturi::~articolBauturi(){
    cout<<"desctruct Bauturi";
}

void articolBauturi::afisare(){
    articol::afisare();
    cout<<termen_valabilitate<<"\t"<<pret<<" lei"<<endl;
}

void articolBauturi::setTermen(int v){
    termen_valabilitate = 0;
}

int articolBauturi::getTermen(){
    return termen_valabilitate;
}
