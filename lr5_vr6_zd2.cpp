#include <iostream>
#include <math.h>
using namespace std;
double funct(int x) {
	double y = pow(x, 3) * cos(x / 3);
	return y;
 }
int main() {
	double s = 0;
	for (int i = 2; i <= 15; i++) {
		s = s + funct(i);
	}
	cout << "Summa=" << s << endl;
	return 0;
}