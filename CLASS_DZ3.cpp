#include <iostream>
#include <string>
using namespace std;
class Cat {
private: 
	string name;
	string breed;
	int age;
	string gender;
public:
	Cat(string n, string b, string g, int a) {
		name = n;
		breed = b;
		age = a;
		gender = g;
	}
	void getView() {
		string view = R""""(
 /\_/\
( o.o )
 > ^ <
)"""";
		cout << view << endl;
	}
	void Name() {
		cout << "The cat's name is " << name << "." << endl;
	}
	void Breed() {
		cout << "Breed cat " << breed << "." << endl;
	}
	void Age() {
		cout << "The cat is " << age << " years old." << endl;
	}
	void Gender() {
		cout << "The cat's gender is " << gender << "." << endl;
	}
};
int main() {
	Cat cat("Musya", "Angora", "female", 6);
	cat.getView();
	cat.Name();
	cat.Breed();
	cat.Gender();
	cat.Age();
	return 0;
}