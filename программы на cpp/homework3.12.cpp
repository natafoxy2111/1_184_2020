#include <iostream>
#include <string>
using namespace std;
class speedskaters {
private:
	string name;
	int age;
public:
	speedskaters(string n, int a) {
		this->name = n;
		this->age = a;
	}
	void he1() {
		cout << "my favorite skater " << name << ". He's " << age << " years old. ";
	}
	void she1() {
		cout << "my favorite skater " << name << ". She's " << age << " years old. ";
	}
	~speedskaters() {}
};
class Skater : public speedskaters {
private:
	string group;
	string rank;
public:
	Skater(string n, int a, string g, string p) : speedskaters(n, a) {
		this->group = g;
		this->rank = p;
	}
	void he2() {
		cout << "He's member of " << group << ". His rank is " << rank << "." << endl;
	}
	void she2() {
		cout << "She's member of " << group << ". Her rank is " << rank << "." << endl;
	}
	~Skater() {}
};
int main() {
	Skater Pavel("Pavel Kuliznikov", 26, "the Russian national team", "international master of sports");
	Skater Elena("Elena Sohryakova", 30, "the Russian national team", "international master of sports");
	Pavel.he1();
	Pavel.he2();
	Elena.she1();
	Elena.she2();
	return 0;
}