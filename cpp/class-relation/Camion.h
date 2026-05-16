#include "Vehicule.h"
#include "Moteur.h"
using namespace std;

class Camion : public Vehicule
{
private:
    Moteur moteur;
    string marque;
    string modele;

public:
    Camion();
    ~Camion();
    void demarrer();
    void charger();
    void decharger();
    void arreterMoteur(Moteur moteur);
    string getMarque();
    void setModele(string modele);
    string getModele();
    void setMoteur(Moteur moteur);
    string getMoteur();
};