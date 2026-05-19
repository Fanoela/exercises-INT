#pragma once
#include <iostream>
#include <string>
using namespace std;

class Machine
{
    Machine();
    ~Machine();
    virtual void demarrer() = 0;
    virtual void arreter() = 0;
    virtual void redemarrer() = 0;
    virtual void utiliser() = 0;
};