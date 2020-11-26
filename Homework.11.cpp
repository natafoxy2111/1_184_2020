// Игровой персонаж (классы, уровень)
#include <iostream>
#include <string>
using namespace std;

class Position
{
public:
	string NameHero;
	string GameClass;
	int level;

	Position(string NameHero, string GameClass, int level) {
		this->NameHero = NameHero;
		this->GameClass = GameClass;
		this->level = level;
	}

	void Display() {
		cout << NameHero << " " << GameClass << " " << level << endl;
	}

	~Position() {
		cout << "Destruction position" << endl;
	}

	void SetPopulation(int level) {
		if (level >= 0 && level <= 99) {
			this->level = level;
		}

	}

};


int main()
{
	Position my_loc("Stiv", "magician", 69);
	my_loc.Display();
	Position my_had("Reiden", "archer", 38);
	my_had.Display();
	return 0;
}