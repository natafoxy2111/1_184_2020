#include <iostream>
#include <cstring>
using namespace std;

class MyWorld
{
private:
	string NameofThing;
	string MaterialOfThing;
	string SizeOfThing;
public:
	MyWorld(string NameOfThing, string MaterialOfThing, string SizeOfThing)
	{
		this->NameofThing = NameOfThing;
		this->MaterialOfThing = MaterialOfThing;
		this->SizeOfThing = SizeOfThing;
	}

	void Display()
	{
		cout << "Thing >> " << NameofThing << endl << "Material of " << NameofThing << " >> " << MaterialOfThing << endl << "Size of " << NameofThing << " >> " << SizeOfThing;
	}

	~MyWorld()
	{
	}
};

int main()
{
	MyWorld Table("Table", "wood", "Medium");
	Table.Display();
	cout << endl;
	MyWorld Armchair("Armchair", "wood", "small");
	Armchair.Display();

	return 0;
}
