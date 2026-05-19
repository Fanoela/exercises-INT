#include <iostream>
#include "Vitesse.h"
using namespace std;

Vitesse::Vitesse()
{
}

Vitesse::~Vitesse()
{
}

void Vitesse::setValue(double value)
{
    this->value = value;
}

double Vitesse::getValue()
{
    return value;
}

void Vitesse::display()
{
    cout << value << " m/s" << endl;
}