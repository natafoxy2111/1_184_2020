/* Блюдо в меню (Пицца) */
#include <iostream>
#include <cstring>
using namespace std;

class Dish
{
private:
	int Price;
	string Title;
	string Size;
	int Ingredient = 0;
	int Cheese = 0;
	int Onion = 0;
	int Tomato = 0;
	int Cucumber = 0;
	int Mushrooms = 0;
	int Greens = 0;
public:
	Dish()
	{
		this->Title = Title;
		this->Price = Price;
		this->Size = Size;
	}

	void Display()
	{
		cout << "Ingredients:" << endl << "1 - Cheese;" << endl << "2 - Onion;" << endl << "3 - Tomato;" << endl << "4 - Cucumber;" << endl << "5 - Mushrooms;" << endl << "6 - Greens;" << endl;
	}

	void Input()
	{
		cout << "What's title of your pizza? "; cin >> Title; cout << endl;
		cout << "The price of " << Title << "? (in $) "; cin >> Price; cout << endl;
		cout << "The size of " << Title << "? "; cin >> Size; cout << endl;
	}

	void Compare()
	{
		cout << "What you want to add in your '" << Title << "' pizza?" << endl;
		cin >> Ingredient;
		if (Ingredient == 1) {
			Cheese++;
		} else if (Ingredient == 2) {
			Onion++;
		} else if (Ingredient == 3) {
			Tomato++;
		} else if (Ingredient == 4) {
			Cucumber++;
		} else if (Ingredient == 5) {
			Mushrooms++;
		} else if (Ingredient == 6) {
			Greens++;
		} else {
			cout << "Ingredient with this number is out of stock." << endl;
		}

		cout << "Your " << Size << " pizza with title '" << Title << "' cost " << Price << "$ and consist is:" << endl;
		if (Cheese != 0) {
			cout << Cheese << " of Cheese" << endl;
		}
		if (Onion != 0) {
			cout << Onion << " of Onion" << endl;
		}
		if (Tomato != 0) {
			cout << Tomato << " of Tomato" << endl;
		}
		if (Cucumber != 0) {
			cout << Cucumber << " of Cucumber" << endl;
		}
		if (Mushrooms != 0) {
			cout << Mushrooms << " of Mushrooms" << endl;
		}
		if (Greens != 0) {
			cout << Greens << " of Greens";
		}
	}

	~Dish()
	{
		cout << endl;
	}
};

int main()
{
	Dish pizza;
	pizza.Display();
	pizza.Input();
	while (true)
	{
		pizza.Compare();
	}
	return 0;
}