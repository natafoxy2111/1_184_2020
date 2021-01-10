#include <iostream>
#include <string>
using namespace std;

class Person
{
public:
    string name;
    int age;
    Person(string n, int a)
    {
        name = n;
        age = a;
    }
    Person(string n)
    {
        name = n;
        age = 18;
    }
    Person()
    {
        name = "Natasha";
        age = 18;
    }
    void move()
    {
        cout << name << " is moving" << endl;
    }
};
int main()
{
    Person Dasha("Dasha", 18);
    cout << "Name: " << Dasha.name << "\tAge: " << Dasha.age << endl;
    Person Masha("Masha", 20);
    cout << "Name: " << Masha.name << "\tAge: " << Masha.age << endl;
    Person Tata = Person();
    cout << "Name: " << Tata.name << "\tAge: " << Tata.age << endl;
    return 0;
}
