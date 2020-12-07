#include <iostream>
#include <string>
using namespace std;
class Child {
private:
 string name;
 string sleep;
 string eat;
 string play;
 int age;


public:
	Child(string a, string b, string c, string d, int e) {
 name = a;  
 sleep = b;
 eat = c;
 play = d;
 age = e;
	}
	void display() {
 cout << "Name: " << name << endl;
 cout << sleep << endl;
 cout << eat<< endl;
 cout << play << endl;
 cout << age << endl;
 cout << endl;
	}

};
int main() {
	Child Nikita ("Nikita", "sleep", "eat",2);
 Nikita.display();
	Child Alice ("Alice", "play", 3);
 Alice.display();
	return 0;

}