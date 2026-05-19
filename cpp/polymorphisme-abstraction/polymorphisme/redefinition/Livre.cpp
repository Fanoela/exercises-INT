#include <iostream>
#include "Livre.h"

using namespace std;

Livre::Livre()
{
}
Livre::Livre(string titre, string auteur, int annee, int pages)
{
    this->auteur = auteur;
    this->titre = titre;
    this->annee = annee;
    this->pages = pages;
}
Livre::~Livre()
{
}
string Livre::getAuteur()
{
    return auteur;
}
string Livre::getTitre()
{
    return titre;
}
int Livre::getAnnee()
{
    return annee;
}
int Livre::getPage()
{
    return pages;
}
void Livre::setAuteur(string auteur)
{
    this->auteur = auteur;
}
void Livre::setTitre(string titre)
{
    this->titre = titre;
}
void Livre::setAnnee(int annee)
{
    this->annee = annee;
}
void Livre::setPage(int pages)
{
    this->pages = pages;
}
void Livre::decrire()
{
    cout << "le livre intitulé " << titre << " est ecrit par " << auteur << " en " << annee << " avec " << pages << " pages" << endl;
}