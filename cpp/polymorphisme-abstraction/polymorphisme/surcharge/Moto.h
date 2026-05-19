#include <string>
class Moto
{
private:
    std::string marque;

public:
    Moto();
    Moto(std::string marque);
    ~Moto();
    Vitesse calculerVitesseMoyenne(Vitesse u, Vitesse v);
    Vitesse calculerVitesseMoyenne(double positionInitiale, double positionFinale, double time);
};