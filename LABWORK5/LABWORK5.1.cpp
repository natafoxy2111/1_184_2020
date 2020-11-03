#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	double  x;
	

	

	for (double x = 0; x<= 5  ; x=x+0.2)
	{
		double e=2.712828;

		double num = (x * x) + cbrt(x + 1) + pow(e, -x);
		double denum = sin(x + 2 * x + 3);
		double y = num / denum;
		cout << "x=" << x << "|   " << "y=" << y << endl;
	}
	return 0;
}

