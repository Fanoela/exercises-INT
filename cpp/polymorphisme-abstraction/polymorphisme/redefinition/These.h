#pragma once
#include <string>
#include "Livre.h"
using namespace std;

class These : public Livre
{
private:
    string universite;
    string encadreur;

public:
    These();
    These(string universite, string encadreur);
    ~These();
    string getUniv();
    string getEncadreur();
    void setUniv(string universite);
    void setEncadreur(string encadreur);
    void decrire();
};
