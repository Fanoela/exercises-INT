#include <string>
using namespace std;

class Person
{
protected:
    string nom;
    int age;
    string profession;

public:
    Person();
    ~Person();
    void sePresenter();
    string getNom();
    void setNom(string nom);
    string getNom();
    void setAge(int age);
    int getAge();
    void setProfession(string Profession);
    string getProfession();
};