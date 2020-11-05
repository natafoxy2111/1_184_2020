// лаб.ном5вар10(1).cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cmath>

double function(double xmin, double xmax, double dx)
{

	for (double x = xmin; x <= xmax + dx; x += dx)
	{
		double y = ( cos ( x ) + sin ( x * x )) / (pow(x, 3) +exp(x));

		std::cout << " X = " << x << ", Y = " << y << std::endl;
	}
	return 0;
}

int main()
{
	function(1, 3, 0.1);
	return 0;
}