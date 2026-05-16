#include "Vehicule.h"
#include "Moteur.h"

class Moto : public Vehicule
{
private:
    Moteur moteur;
    string marque;
    string modele;

public:
    Moto();
    ~Moto();
    void demarrer();
    void arreterMoteur(Moteur moteur);
    void setMarque(string marque);
    string getMarque();
    void setModele(string modele);
    string getModele();
    void setMoteur(Moteur moteur);
    string getMoteur();
};