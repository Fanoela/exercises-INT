#pragma once
#include <string>

using namespace std;

class Livre
{
protected:
    string auteur;
    string titre;
    int annee;
    int pages;

public:
    Livre();
    Livre(string auteur, string titre, int annee, int pages);
    ~Livre();
    string getAuteur();
    string getTitre();
    int getAnnee();
    int getPage();
    void setAuteur(string auteur);
    void setTitre(string titre);
    void setAnnee(int annee);
    void setPage(int pages);
    virtual void decrire();
};