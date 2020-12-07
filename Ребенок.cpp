#include <iostream>
#include <string>
using namespace std;
class Child {
private:
	string name;
	int age;
	string sleep;
	string eat;
	string play;

public:
	Child(string a, int b, string c, string d, string e)
	{
		name = a;
		age = b;
		sleep = c;
		eat = d;
		play = e;
	}
	void display() {
		cout << "Name: " << name << "\tAge:" << age << endl;
		cout << sleep << endl;
		cout << eat << endl;
		cout << play << endl;
	}

};
int main() {
	Child Alice("Alice", "want play");
	Alice.display();
	Employee Sasha("Sasha", "want sleep", "want eat");
	Sasha.display();
	return 0;
}
