#include <iostream>
#include <math.h>
#include "Circle.h"
#define PI 3.1415
using namespace std;

Circle::Circle(float r){
    radius = r;
}

Circle::~Circle(){

}

void Circle::changeRadius(float new_r){
    radius = new_r;
}

float Circle::circumference(){
    return 2 * PI * radius;
}

float Circle::area(){
    return PI * pow(radius,2);
}
