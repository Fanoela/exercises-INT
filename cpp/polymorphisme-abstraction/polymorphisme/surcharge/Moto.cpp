#include <iostream>
#include <string>
#include "Vitesse.h"
#include "Moto.h"

Moto::Moto()
{
}

Moto::Moto(std::string marque)
{
    this->marque = marque;
}

Moto::~Moto()
{
}

Vitesse Moto::calculerVitesseMoyenne(Vitesse u, Vitesse v)
{
    Vitesse m;
    double s = (u.getValue() + v.getValue()) / 2;
    m.setValue(s);
    return m;
}

Vitesse Moto::calculerVitesseMoyenne(double positionInitiale, double positionFinale, double time)
{
    Vitesse m;
    double s = ((positionFinale - positionInitiale) / time);
    m.setValue(s);
    return m;
}