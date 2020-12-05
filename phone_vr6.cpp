#include <iostream>
#include <string>
using namespace std; 
class Phone {
private:
	string name;
	string region;
	long long number;
public:
	Phone(string n, string r, long long p) {
		this->name = n;
		this->region = r;
		this->number = p;
	}
	Phone(string n, long  long p) {
		this->name = n;
		this->region = "Russia";
		this->number = p;
	}
	void Subscriber() {
		cout << "This subscriber's name is " << name << ". He's from " << region << ". His phone nember is " << number << "." << endl;
	}
	void  Picture() {
		string picture = R""""(
#####
#   #
#   #
#   #
# * #
#####
)"""";
		cout << picture << endl;
	}
	void Change(long long p) {
	this->number = p; 
	}
	~Phone() {}
};
int main() {
	Phone one("Sam", "USA", 569425);
	Phone two("Ivan", 89156871842);
	one.Subscriber();
	two.Subscriber();
	two.Change(89204568475);
	two.Subscriber();
	two.Picture();
	return 0;
}