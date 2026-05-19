#include <iostream>
#include <string>
#include "These.h"

These::These()
{
}
These::These(string titre, string universite)
{
    this->universite = universite;
    this->titre = titre;
}
These::~These()
{
}
string These::getUniv()
{
    return universite;
}
string These::getEncadreur()
{
    return encadreur;
}
void These::setUniv(string universite)
{
    this->universite = universite;
}
void These::setEncadreur(string encadreur)
{
    this->encadreur = encadreur;
}
void These::decrire()
{

    cout << "la these intitulé " << titre << " est ecrit par " << auteur << " et soutenue en " << annee << " avec " << pages << " pages" << endl;
    cout << "Etudiant encadré(e) par " << encadreur << "." << endl;
    cout << "Université: " << universite << endl;
}