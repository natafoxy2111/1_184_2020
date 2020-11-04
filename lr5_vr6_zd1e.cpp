//laboratornay rabota ¹5, variant 6, zadanie 1
#include <iostream>
#include <math.h>
using namespace std; 
const double pi = 3.14;
const double e = 2.71828;
double funct(double x) {
	double f = (x * pow(e, x)) / (pow(cos(x), 3)) + (pow(sin(x), 2)) / (2 * pi);
	return f;
 }
int main ()
{

int xn = -5;
int xk = -1;
double dx = 0.4;
cout << "x" << "\t" << "F(x)" << endl;
for (double i = xn; i <= xk+0.1; i += dx) {
	double F = funct(i);
	cout << "x="<<i << "\t"<< "F("<<i<<")="<<F<<endl;
}
return 0;
}