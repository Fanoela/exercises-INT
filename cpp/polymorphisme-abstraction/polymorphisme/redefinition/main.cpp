#include <iostream>
#include <string>
#include "Livre.h"
#include "These.h"

using namespace std;

int main(void)
{
    Livre livre = Livre("Physics", "A. Brian", 2017, 326);
    These these = These("A New Determination of Molecular Dimensions", "University of Zurich");

    these.setAuteur("A. Einstein");
    these.setAnnee(1905);
    these.setPage(24);
    these.setEncadreur("Alfred Kleiner");

    livre.decrire();
    these.decrire();
}