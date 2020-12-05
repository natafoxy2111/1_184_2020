#include <iostream>
#include <string>
using namespace std; 
class Child {
private:
	string name;
	string sleep;
	string eat;
	string play;
public:
	Child(string n, string s, string e, string p) {
		name = n; sleep = s; eat = e, play = p;
	}
	void display () {
		cout << "************" << endl;
		cout << "Name: " << name << endl;
		cout << sleep << endl;
		cout << eat << endl;
		cout << play << endl;
		cout << endl;
	}

};
int main() {
	Child Nastya = Child ("Nastya", "want sleep", "", "");
	Child Andrey = Child("Andrey", "want sleep", "want eat", "");
	Nastya.display();
	Andrey.display();
	return 0;
}