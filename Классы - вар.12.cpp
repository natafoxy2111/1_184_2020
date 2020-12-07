#include <iostream>
#include <string>
using namespace std;

class Person
{
public:
	string name;
	string city;
	int age;

	Person(string name, string city, int age) 
	{
		this->name = name;
		this->city = city;
		this->age = age;
	}

	void Display() {
		cout << name << " " << city << " " << age << endl;
	}

	~Person(){
		cout << "Destraction position" << endl;
	}

	void SetAge(int age) {
		if (age > 0 && age <= 100) {
			this->age = age;
		}

	}

};


int main()
{
	Person my_pers("Artem", "Ivanovo", 18);
	my_pers.Display();
	return 0;
}