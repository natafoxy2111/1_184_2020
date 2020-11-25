
#include <iostream>
#include <string>
using namespace std;
class EMPLOYEE 
{
public:
	string name;
	string surname;
	string patronymic;
	int ident;
	string data;
	EMPLOYEE(string s,string n,string p, int a, string d)
	{
		surname = s; name = n; ident = a; data = d;   patronymic=p;
	}
	void display()
	{
		cout << "_____________________________" << endl;
		cout << "FULL NAME:  " << surname << " ";
		cout << name << " ";
		cout<< patronymic << endl;
		cout << "IDENT " << ident << endl;
		cout << "DATE: " << data << endl;
		cout << "_____________________________" << endl;
		cout << endl;
	}
	~EMPLOYEE() {};
};
int main()
{
	EMPLOYEE ONE = EMPLOYEE("LOPPY","D.","L.",22,"08/09/15");
	EMPLOYEE TWO = EMPLOYEE("HERRANY", "A.", "R.", 21, "18/10/14");
	EMPLOYEE THREE = EMPLOYEE("MILAN", "S.", "J.", 19, "06/07/19");
	EMPLOYEE FOUR = EMPLOYEE("POOL", "P.", "Q.", 41, "01/09/04");
	EMPLOYEE FIVE = EMPLOYEE("POTO", "E.", "O.", 28, "03/11/14");
	EMPLOYEE SIX = EMPLOYEE("OSSO", "O.", "L.", 32, "28/10/12");
	EMPLOYEE SEVEN = EMPLOYEE("ALEXEEV", "I.", "A.", 23, "21/03/10");
	EMPLOYEE EIGHT = EMPLOYEE("ROND", "T.", "E.", 24, "26/01/14");
	EMPLOYEE NINE = EMPLOYEE("LU", "P.", "K.", 36, "01/10/10");
	ONE.display();
	TWO.display();
	THREE.display();
	FOUR.display(); 
	FIVE.display(); 
	SIX.display(); 
	SEVEN.display();
	EIGHT.display();
	NINE.display();
	return 0;
}