#ifndef ARTICOL_H_INCLUDED
#define ARTICOL_H_INCLUDED



#endif // ARTICOL_H_INCLUDED
#pragma once

class articol{
protected:
    int cod_produs;
    char denumire[50];
    char furnizor[50];
    char unitate_masura[5];
    double pret_furnizor;
    int adaos;
    int cantitate;
public:
    articol(); //construcot fara argumente
    articol(int cod_produs, char denumire[], char furnizor[], char unitate_masura[], double pret_furnizor, int adaos, int cantitate); //contructor cu argumente
    ~articol(); //deconstructor

    void afisare(); //functie de afisare a articolelor
    void setArticol( int c, char d[], char f[], char u[], double pf, int a, int q);
    char* cautare(char v[]);
    void stergeVechi(int v);
    void setCantitate( int v);
};
