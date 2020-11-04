#include <iostream>
#include <math.h>
using namespace std;
double Calc(double a, double b, double x)

{   double numerator = a * pow(x, 1 / 2) - b * ((log(x) / log(4.0)));
	double denumerator= log10(abs(x - 1));
	return numerator/ denumerator;}



double ZADANIEOne(double a, double b, double nX, double kX, double dx)

{for (double x = nX; x <= kX; x += dx)
{       double y = Calc(a, b, x);
		cout <<"x="<< x << "\n" << "y="<<y <<"\n"<< endl;
		return y;}}



double ZADANIETwo(double a, double b, double x[], int size)

{for (int i = 0; i < size; i++)
{       double y = Calc(a, b, x[i]);
		char result[100]; sprintf_s(result, "x=%3.5f y=%2f \n", x[i], y);
		cout <<"\n"<< result << endl;
		return 0;}}



int main()

{cout << "ZADANIE A\n" << endl;
	ZADANIEOne(4.1, 2.7, 1.2, 5.2, 0.8);
	cout << "ZADANIE B\n" << endl;

	double x[] = { 1.9,2.15,2.34,2.73, 3.16 };
	ZADANIETwo(4.1, 2.7, x, (int)(sizeof(x) / sizeof(x[0])));}