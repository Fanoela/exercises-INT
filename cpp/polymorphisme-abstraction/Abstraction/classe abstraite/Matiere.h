#pragma once
#include <string>
using namespace std;

class Matiere
{
protected:
    double masse;
    string etat;

public:
    Matiere();
    ~Matiere();
    void setMasse(double masse);
    void setEtat(string etat);
    double getMasse();
    string getEtat();
    virtual void utilite() = 0;
};