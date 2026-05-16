#include <iostream>
#include <math.h>
#include "Parallelogram.h"
#define PI 3.1415
using namespace std;

float Parallelogram::perimeter(){
    return 2* (base + side);
}


float Parallelogram::area(){
    return base * side * sin(alpha * PI / 180);
}


void Parallelogram::changeDimension(float x, float y, float theta){
    base = x;
    side = y;
    alpha = theta;
}