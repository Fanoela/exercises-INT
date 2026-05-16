#include <iostream>
#include <string>
#include "Person.h"

using namespace std;

int main(void)
{
    Person p1 = Person();
    Person p2 = Person();
    Person *p3 = new Person();
    Person *p4 = new Person();

    p1.setName("Uchiwa");
    p1.setFirstName("Itachi");
    p1.setAge(27);
    p1.setWeight(62.25);

    p3->setName("Uzumaki");
    p3->setFirstName("Naruto");
    p3->setAge(17);
    p3->setWeight(56);

    p1.introducing();
    p3->introducing();
}