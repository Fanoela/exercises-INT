#include <string>
using namespace std;

class Moteur
{
private:
    float vitesse;
    bool etat;

public:
    Moteur();
    ~Moteur();
    void setVitesse(float vitesse);
    float getVitesse();
    void setEtat(bool etat);
    bool getEtat();
};