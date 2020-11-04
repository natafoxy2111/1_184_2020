#include <iostream>
#include <math.h>
using namespace std;

double funct(double x) {
	double f = pow (cos(3*x), 2) / 2*x + pow (tan(5*x), 1/5);
	return f;
}
int main()
{
	int xn = 1;
	int xk = 2;
	double dx = 0.1;
	cout << "x" << "\n" << "F(x)" << endl;
	for (double t = xn; t <= xk + 0.1; t += dx) {
		double F = funct(t);
		cout << "x=" << t << "\n" << "F(" << t << ")=" << F << endl;
	}
	return 0;
}
