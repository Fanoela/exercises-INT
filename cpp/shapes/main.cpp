#include <iostream>
#include <math.h>
#include "Circle.h"
using namespace std;

int main(void){

    Circle c1(5);
    // cout << "the radius is : " << c1.radius<< endl;
    cout << "the circumference is : "<< c1.circumference()<< endl;
    cout << "the area is : "<< c1.area()<< endl;
    c1.changeRadius(10);
    cout << "the new circumference is : "<< c1.circumference()<< endl;
    cout << "the new area is : "<< c1.area()<< endl;
}
