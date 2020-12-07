#include <iostream>
#include <string>
using namespace std;
class Person
{ 
private:
	string name;
	int age;
public:
	Person(string n, int a)
	{
		name = n; age = a;
	}
	
	void display()
	{
	cout << "__________________________________________" << endl;
	cout << "NAME: " << name << "\tAGE: " << age <<endl;
	cout << "__________________________________________" << endl;
	}

};
class Employee : public Person
{
public:
	Employee(std::string n, int a, std::string c) :Person(n, a)
	{
		company = c;
	}
	void showEmployeeNameCompany()
	{

	cout << "Employee Company: " << company << endl;
	
	}
	
private:
string company;
};
int main()
{
	Person tom("Tom", 23);
	tom.display();
	Employee bob("Bob", 31, "Microsoft");
	bob.display(); bob.showEmployeeNameCompany();
	
	return 0;
}