#include <stdio.h>
#include <iostream>
#include <string.h>
#include "articol.h"

using namespace std;

articol::articol(){ // construcor
    cod_produs                  = 0;
    strcpy(denumire, "WWWWWWW");
    strcpy( furnizor, "XXXXX");
    strcpy(unitate_masura, "buc");
    pret_furnizor               = 0.0;
    adaos                       = 0;
    cantitate                   = 0;
}

articol::articol(int cod_produs, char denumire[], char furnizor[], char unitate_masura[], double pret_furnizor, int adaos, int cantitate){
    this->cod_produs        = cod_produs;
    strcpy(this->denumire, denumire);
    strcpy(this->furnizor, furnizor);
    strcpy(this->unitate_masura, unitate_masura);
    this->pret_furnizor      = pret_furnizor;
    this->adaos             = adaos;
    this->cantitate         = cantitate;
}

articol::~articol(){
    cout<<"decontruct"<<endl;
}

void articol::afisare(){
    cout<<cod_produs<<"\t"<<denumire<<"\t"<<furnizor<<"\t"<<cantitate<<" "<<unitate_masura<<
    "\t"<<pret_furnizor<<" lei"<<"\t"<<adaos<<endl;
}

void articol::setArticol(int c, char d[], char f[], char u[], double pf, int a, int q){
    cod_produs = c;
    strcpy(denumire, d);
    strcpy(furnizor, f);
    strcpy(unitate_masura, u);
    pret_furnizor = pf;
    adaos = a;
    cantitate = q;
}

char* articol::cautare(char v[]){

}

void articol::stergeVechi(int v){

}

void articol::setCantitate(int v){

}
