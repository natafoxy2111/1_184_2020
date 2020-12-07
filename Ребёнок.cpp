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
	    cout << "------------" << endl;
		cout << "Имя ребёнка: " << name << endl;
		cout << sleep << endl;
		cout << eat << endl;
		cout << play << endl;
		cout << endl;
	}

};
int main() {
	Child Anton = Child ("Антон", "Хочет спать", "", "");
	Child Marina = Child("Марина", "Хочет есть", "Хочет играть", "");
	Anton.display();
	Marina.display();
	return 0;
}