#pragma once
#include <iostream>
#include <string>
#include "Matiere.h"

using namespace std;

class Eau : public Matiere
{
public:
    Eau();
    ~Eau();
    void utilite();
};