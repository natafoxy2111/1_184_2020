#include <iostream>
#include <cmath>
#include <string>
using namespace std;
double help(double xn, double xk, double dx) {
	for (double x = xn; x <= xk + dx; x += dx) {
		double y = (1 + cos(x) + x * x) / exp(x);
		cout << "x = " << x << ' ' << "y = " << y << endl;
	}
	return 0;
}
int main() {
	help(1, 4, 0.2);
	return 0;
}
