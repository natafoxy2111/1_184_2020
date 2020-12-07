#include <iostream>
#include <string>
using namespace std;

class Computer
{
private:
	int price;
	string formfactor;
	string brand;

public:
	Computer(string f, int p, string b)
	{
		price = p;
		brand = b;
		formfactor = f;
	}
	void display()
	{
		cout << "Brand: " << brand << " price: " << price << endl;
	
	}
};

class PC : public Computer
{
private:
	string processor;
	string storage;
public:
	PC(string b, int p, string f, string pr, string s) : Computer(f, p, b)
	{
		processor = pr;
		storage = s;
	}
	void display2()
	{

		cout << "Processor: " << processor << " storage: " << storage << endl;
	}
};

int main()
{
	Computer honor("notebook", 43000, "honor");
	honor.display();

	PC LG("PC", 90000, "LG", "Intel", "1 TB");
	LG.display();
	LG.display2();

	return 0;
}
