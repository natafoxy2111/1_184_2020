#include <iostream>
#include <cstring>
using namespace std;

class MyEnvironment
{
private:
	string NameofThing;
	string MaterialOfThing;
	string ShapeOfThing;
public:
	MyEnvironment(string NameOfThing, string MaterialOfThing, string ShapeOfThing)
	{
		this->NameofThing = NameOfThing;
		this->MaterialOfThing = MaterialOfThing;
		this->ShapeOfThing = ShapeOfThing;
	}

	void Display()
	{
		cout << "Thing >> " << NameofThing << endl << "Material of " << NameofThing << " >> " << MaterialOfThing << endl << "Shape of " << NameofThing << " >> " << ShapeOfThing;
	}

	~MyEnvironment()
	{
	}
};

int main()
{
	MyEnvironment Dish("Dish", "Ceramics", "Seashells");
	Dish.Display();
	cout << endl;
	MyEnvironment SportBag("Sport bag", "Fabric", "Rectangular");
	SportBag.Display();

	return 0;
}