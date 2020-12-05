#include <iostream>
#include <string>
using namespace std;
class Koreans {
private:
	string name;
	int age;
public:
	Koreans(string n, int a) {
		this->name = n;
		this->age = a;
	}
	void he1 () {
		cout << "This is my bias " << name << ". He's " << age << " years old. ";
	}
	void she1() {
		cout << "This is my bias " << name << ". She's " << age << " years old. ";
	}
	~Koreans() {}
}; 
class Idol : public Koreans {
private:
	string group;
	string position;
public:
	Idol(string n, int a, string g, string p) : Koreans(n, a) {
		this->group =g;
		this->position = p;
	}
	void he2() {
		cout << "He's member of " << group << ". His position is " << position << "." << endl;
	}
	void she2() {
		cout << "She's member of " << group << ". Her position is " << position << "." << endl;
	}
	~Idol() {}
};
int main() {
	Idol RM("RM", 26, "BTS", "leader&rapper");
	Idol Lisa("Lisa", 23, "Blackpink", "dancer&rapper");
	RM.he1();
	RM.he2();
	Lisa.she1();
	Lisa.she2();
	return 0;
}