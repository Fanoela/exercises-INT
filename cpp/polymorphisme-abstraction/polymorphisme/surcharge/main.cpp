#include <iostream>
#include <string>
#include "Vitesse.h"
#include "Moto.h"

using namespace std;

int main(void)
{
    Vitesse u = Vitesse();
    Vitesse v = Vitesse();
    Moto moto1 = Moto();
    Moto moto2 = Moto();

    u.setValue(10);
    v.setValue(45.5);

    double d1 = 30.5, d2 = 79, t = 11;

    Vitesse m1 = moto1.calculerVitesseMoyenne(u, v);
    Vitesse m2 = moto2.calculerVitesseMoyenne(d1, d2, t);

    m1.display();
    m2.display();

    return 0;
}