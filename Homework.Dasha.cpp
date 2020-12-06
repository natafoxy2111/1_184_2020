#include <iostream>
using namespace std;

class child {
private:
	bool pl = 0;
	bool sl = 0;
	bool ea = 0;
	bool err = 0;
public:
	void what_want() {
		if (pl) cout << "Ребенок хочет играть!\n";
		if (sl) cout << "Ребенок хочет спать!\n";
		if (ea) cout << "Ребенок хочет есть!\n";
		if (!ea & !sl & !pl) cout << "Ребенок ничего не хочет!\n";
	}
	void play() {
		if (!pl)  cout << "\x1b[31mРебенок не хочет играть, мы не можете поиграть с ним!\x1b[0m\n";
		else {
			pl = false;
			cout << "\x1b[32mВы поиграли с ребенком!\x1b[0m\n";
		}
	}
	void sleep() {
		if (!sl)  cout << "\x1b[31mРебенок не хочет спать, мы не можете уложить его!\x1b[0m\n";
		else {
			sl = false;
			cout << "\x1b[33mВы уложили ребенка!\x1b[0m\n";
		}
	}
	void eat() {
		if (!ea)  cout << "\x1b[31mРебенок не хочет есть, мы не можете накормить его!\x1b[0m\n";
		else {
			ea = false;
			cout << "\x1b[35mВы накормили ребенка!\x1b[0m\n";
		}
	}
	void wanna_eat() {
		if (pl && sl) {
			cout << "У ребенка уже есть 2 состояния вы не можете добавить ему 3\n";
		}
		else ea = true;
	}
	void wanna_sleep() {
		if (pl && ea) {
			cout << "У ребенка уже есть 2 состояния вы не можете добавить ему 3\n";
		}
		else sl = true;
	}
	void wanna_play() {
		if (ea && sl) {
			cout << "У ребенка уже есть 2 состояния вы не можете добавить ему 3\n";
		}
		else pl = true;
	}
};

int main() {
	setlocale(LC_ALL, "RU");
	child Dasha;
	// тесты
	Dasha.wanna_play();
	Dasha.what_want();
	Dasha.play();
	Dasha.what_want();
	cout << endl;
	Dasha.wanna_eat();
	Dasha.what_want();
	Dasha.eat();
	Dasha.what_want();
	cout << endl;
	Dasha.wanna_sleep();
	Dasha.what_want();
	Dasha.sleep();
	Dasha.what_want();
	cout << endl;
	Dasha.wanna_eat();
	Dasha.wanna_sleep();
	Dasha.what_want();
	Dasha.eat();
	Dasha.sleep();
	Dasha.what_want();
	cout << endl;
	Dasha.wanna_play();
	Dasha.wanna_eat();
	Dasha.wanna_sleep();
	Dasha.what_want();
}
