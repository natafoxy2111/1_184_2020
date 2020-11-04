#include <iostream>
#include <cmath>
#include <string>
using namespace std;
int main() {
	double p = 1;
	for (double i = 1; i < 15; i = i + 2) {
		p = p * (1 + exp(-cos(i)));
	}
	cout << "P = " << p;
	return 0;
}
