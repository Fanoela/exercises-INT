#include <iostream>
#include <string>
#include "Matiere.h"
#include "Eau.h"

int main(void)
{
    Eau eau = Eau();
    eau.setEtat("liquide");
    cout << "Utilsation et usage de l'eau:"
         << endl;
    eau.utilite();
}