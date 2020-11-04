// ConsoleApplication4.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	double sum = 0;

	for (int i = 1; i <= 10; i++)
	{
		double n = pow((sin(i) + cos(i)), 2);

		sum = sum + n;
		std::cout << "sum =" << sum << endl;
	}
	return 0;
}
