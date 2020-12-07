#include <iostream>
#include <string>
using namespace std;
class Child
{
private:
	string name;
	string sleep;
	string eat;
	string play;
public:
	Child(string n, string s, string e, string p)
	{
		name = n;
		sleep = s;
		eat = e;
		play = p;
	}
	void display()
	{
		cout << "Child in kindergarden " << name << " wants to" << endl;
		cout << sleep << endl;
		cout << eat << endl;
		cout << play << endl;
		cout << endl;
	}

};
int main()
{
	Child Alina = Child("Alina", "sleep", "", "");
	Child Danila = Child("Danila", "play", "eat", "");
	Alina.display();
	Danila.display();
	return 0;
}