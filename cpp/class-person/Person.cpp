#include <iostream>
#include <string>
#include "Person.h"

using namespace std;

void Person::setName(string name)
{
    this->name = name;
}

void Person::setFirstName(string firstName)
{
    this->firstName = firstName;
}

void Person::setAge(int age)
{
    this->age = age;
}

void Person::setWeight(double weight)
{
    this->weight = weight;
}

string Person::getName()
{
    return name;
}

string Person::getFirstName()
{
    return firstName;
}

int Person::getAge()
{
    return age;
}

double Person::getWeight()
{
    return weight;
}

void Person::introducing()
{
    cout << "My name is " << firstName << " " << name << endl;
    cout << "I'm " << age << " years old" << endl;
    cout << "I'm happy to be with you all!\n";
}

Person::Person()
{
    cout << "The instance is constructed\n";
}

Person::~Person()
{
}