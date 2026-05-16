#include "Person.h"
#include "Camion.h"

class Chauffeur : public Person
{
private:
    char permis;

public:
    Chauffeur();
    ~Chauffeur();
    void conduire(Camion camion);
    void setPermis(char permis);
    char getPermis();
};