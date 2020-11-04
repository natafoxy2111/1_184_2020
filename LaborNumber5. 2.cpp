#include <iostream>
#include <string>
#include <cmath>
using namespace std;
const double pi = 3.14;
int main() {
	double pi = 1;
	for (double i = 1; i <= 10; i = i++) {
		pi = pi * log(abs(cos(i)));
	}
	cout << "F= " << pi;
	return 0;
}

