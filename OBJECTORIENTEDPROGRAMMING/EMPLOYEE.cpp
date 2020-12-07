
#include <iostream>
#include <string>
using namespace std;
class Baby 
{
private:
	string name;
	string eat;
	string sleep;
	string play;
	Baby(string n,string e,string s, string d)
	{
		name = n; eat = e; sleep = s; play = p;
	}
	void display()
	{
		cout << "_____________________________" << endl;
		cout << "NAME:  " << name << " ";
		cout << eat << endl;
		cout << sleep << endl;
		cout << play << endl;
		cout << "_____________________________" << endl;
		cout << endl;
	}
	~Baby() {};
};
int main()
{
	Baby ONE = Baby("PAUL","","want sleep","");
	Baby TWO = Baby("ALEX", "want eat", "want sleep", "");
	Baby THREE = Baby("RU", "want eat", "", "want play");
	Baby FOUR = Baby("DAN", "", "", "want play");
	
	ONE.display();
	TWO.display();
	THREE.display();
	FOUR.display(); 
	
	return 0;
}