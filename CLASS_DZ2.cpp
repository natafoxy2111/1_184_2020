#include <iostream>
#include <string>
using namespace std;
class child {
private:
	string name;
	string play;
	string eat;
	string sleep;
public:
	child(string n, string p, string e, string s) {
		name = n;
		play = p;
		eat = e;
		sleep = s;
	}
	child(string n, string p, string e) {
		name = n;
		play = p;
		eat = e;
		sleep = "want to sleep.";
	}
	child(string n, string p) {
		name = n;
		play = p;
		eat = "want to eat.";
		sleep = "want to sleep.";
	}
	void Play() {
		cout << name << " " << play << endl;
	}
	void Eat() {
		cout << name << " " << eat << endl;
	}
	void Sleep() {
		cout << name << " " << sleep << endl;
	}
};
int main() {
	child one("Masha", "want to play.", "want to eat.", "doesn't want to sleep.");
	child two("Dasha", "doesn't want to play.", "want to eat.");
	child three("Sasha", "doesn't want to play.");
	one.Play();
	one.Eat();
	one.Sleep();
	two.Play();
	two.Eat();
	two.Sleep();
	three.Play();
	three.Eat();
	three.Sleep();
}