#include <iostream>
#include <cmath>

using namespace std;

double funct()
{
	double y = 1;

	for (int k = 3; k <= 15; k = k + 3)
	{
		y = y * (1 + exp(sin(k)));
	}

	cout << y;
	return 0;
}

int main()
{
	funct();
	return 0;
}