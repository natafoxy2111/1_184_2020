#include <iostream>
#include <string>
using namespace std;
class Child {
private:
	string name;
	string play;
	string sleep;
	string eat;
public:
	Child(string n, string s, string e, string p) {
		name = n; sleep = s; eat = e, play = p;
	}
	void display() {
		cout << "Name: " << name << endl;
		cout << eat << endl;
		cout << sleep << endl;
		cout << play << endl;
		cout << endl;
	}

};
int main() {
	Child Misha = Child("Misha", "want eat", "", "");
	Misha.display();
	Child Roma = Child("Roma", "want sleep", "", "");
	Roma.display();
	return 0;

}
