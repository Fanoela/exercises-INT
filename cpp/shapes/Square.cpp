#include <iostream>
#include <math.h>
#include "Square.h"
using namespace std;

float Square::perimeter(){

    return 4*side;
};

float Square::area(){
    return pow(side,2);
};

void Square::changeSide(float new_side){
    side = new_side;
};