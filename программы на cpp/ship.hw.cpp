#include <iostream>
#include <string>
using namespace std;
class Ship {
private:
	string name;
	string length;
	long long displacement;
public:
	Ship(string n, string r, long long p) {
		this->name = n;
		this->length = r;
		this->displacement = p;
	}
	Ship(string n, long  long p) {
		this->name = n;
		this->length = "34";
		this->displacement = p;
	}
	void vessel() {
		cout << "This ship's name is " << name << ". The length of this ship " << length << ". Its displacement " << displacement << "." << endl;
	}
	void  Picture() {
		string picture = R""""(
     /""""""""\
|||||||||||||||||||
 \               /
  """""""""""""""
)"""";
		cout << picture << endl;
	}
	void Change(long long p) {
		this->displacement = p;
	}
	~Ship() {}
};
int main() {
	Ship one("Titanik", "269", 52310);
	Ship two("Kevin Mary", "311", 78638);
	one.vessel();
	two.vessel();
	two.Change(114147);
	two.vessel();
	two.Picture();
	return 0;
}