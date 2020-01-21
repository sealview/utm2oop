#include <iostream>
#include "articol.h"
#include "articolCosmetic.h"
#include <string.h>

using namespace std;

articolCosmetic::articolCosmetic(){
    termen_valabilitate = 0;
    pret = 0.0;
}

articolCosmetic::articolCosmetic(char denumire[], int termen_valabilitate, double pret){
    this->termen_valabilitate = termen_valabilitate;
    this->pret = pret_furnizor * (adaos / 100);
}

articolCosmetic::~articolCosmetic(){
    cout<<"desctruct Cosmetic";
}

void articolCosmetic::afisare(){
    articol::afisare();
    cout<<termen_valabilitate<<"\t"<<pret<<" lei"<<endl;
}

void articolCosmetic::setTermen(int v){
    termen_valabilitate = 0;
}

int articolCosmetic::getTermen(){
    return termen_valabilitate;
}
