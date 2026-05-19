#include <iostream>
#include <string>
#include "Matiere.h"

Matiere::Matiere()
{
}
Matiere::~Matiere()
{
}
void Matiere::setMasse(double masse)
{
    this->masse = masse;
}
void Matiere::setEtat(string etat)
{
    this->etat = etat;
}
double Matiere::getMasse()
{
    return masse;
}
string Matiere::getEtat()
{
    return etat;
}
