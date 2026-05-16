#include <string>
using namespace std;

class Person
{
private:
    string name;
    string firstName;
    int age;
    double weight;

public:
    Person();
    ~Person();
    void setName(string name);
    string getName();
    void setFirstName(string firstName);
    string getFirstName();
    void setAge(int age);
    int getAge();
    void setWeight(double weight);
    double getWeight();
    void introducing();
};
