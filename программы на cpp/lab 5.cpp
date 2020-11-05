// lab 5 variant 18 
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	const double e = 2.71828;
	int xn = 1;
	int xk = 5;
	double dx = 0.2;
	cout << "x" << "\t" << "F(x)" << endl;
	for (double i = xn; i <= xk + 0.2; i += dx) {
		double F = (log(sqrt(abs(i))) / i) + (i*pow(e, i) / pow(sin(i), 2));
		cout << "x=" << i << "\t" << "F(" << i << ")=" << F << endl;
	}
	return 0;

	cout << endl << "task 2" << endl << endl;

	double sum = 0;
	int n;
	int a; int i;
	cin >> a; cin >> n;
	cin >> i;
	for (int k = 1; i <= n; i++) {
		sum *= (log(5 * k)) / (2 * k + a);
	}
	cout << "answer = " << sum << endl << endl;
}