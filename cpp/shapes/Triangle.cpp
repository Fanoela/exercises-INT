#include <iostream>
#include <math.h>
#include "Triangle.h"
#define PI 3.1415
using namespace std;


float Triangle::perimeter (){
    float c;
    c = sqrt(pow(a,2) + pow(b,2) - 2*a*b*cos(alpha * PI / 180));
    return a + b + c;
}

float Triangle::area(){
    return 0.5 * a * b * sin(alpha);
}

void Triangle::changeDimension(float x, float y, float theta){
    a = x;
    b = y;
    alpha = theta;
}