#include <iostream>
#include <string>
using namespace std;
class Person
{
public:
	string name;
	int age;
	Person(string n, int a)
	{
		name = n; age = a;
		cout << "First constructor" << endl;
	}
	Person(string n) : Person(n, 18) 
	{
		cout << "Second constructor" << endl;
	}
	Person() : Person("Bob")    
	{
		cout << "Third constructor" << endl;
	}
	void move()
	{
		cout << name << " is moving" << endl;
	}
	void display()
	{
		cout << "__________________________________________" << endl;
		cout << "NAME: " << name << "\tAGE: " << age << endl;
		cout << "__________________________________________" << endl;
	}
};
class Point
{
public:
	Point(int x, int y)
	{
		this->x = x;
		this->y = y;
	}
	void showCoords()
	{
		cout << "Coords x: " << x << "\t y: " << y << endl;
	}
	Point &move(int x, int y)
	{
		this->x += x;
		this->y += y;
		return *this;
	}
private:
	int x;
	int y;
};
int main()
{
	Person tom("Tom", 22);
	cout << "Name: " << tom.name << "\tAge: " << tom.age << endl;
	Person sam("Sam");
	cout << "Name: " << sam.name << "\tAge: " << sam.age << endl;
	cout << endl;
	cout << "Coordinat of point A ---->" << endl;
	Point p1(20, 50);
	p1.move(10, 5).move(10, 10);
	p1.showCoords(); 
	cout << "Coordinat of point  B ---->" << endl;
	Point p2(-29, 4);
	p2.move(30, -6).move(23, 16).move(2,7);
	p2.showCoords();
	p2.move(-2, -17);
	p2.showCoords();

	return 0;
}
