// 10вариант.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <math.h>
using namespace std;

double funct(double a, double b, double x)
{
	double t = acos(x * x - b * b);
	double d = asin(x * x * -a * a);
	return t / d;
}


void zdA(double a, double b, double xn, double xk, double dx)
{
	for (double x = xn; x <= xk; x += dx) {
		double y = funct(a, b, x);
		cout << x << "\t" << y << endl;
	}
}

void zdB(double a, double b, double* x, int size)
{
	for (int i = 0; i < size; i++)
	{
		double y = funct(a, b, x[i]);
		char result[80];
		sprintf_s(result, "x = %3.5f y = %.2f \n", x[i], y);
		cout << result << endl;
	}
}
int main()
{
	cout << "Solving task A" << endl;
	zdA(0.05, 0.06, 0.2, 0.96, 0.15);

	cout << "Solving task B" << endl;
	double x[] = { 0.15,0.26,0.37,0.48, 0.56 };
	zdB(0.05, 0.06, x, (int)(sizeof(x) / sizeof(x[0])));
	return 0;
}

/*
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	double x, y, a, b;
	cout << "Эта программа решает эту функцию y = (acos( x**2 - b**2 )) / (asin( x**2 - a**2 ))\n";
	cout << "Введите коэффициенты: \n";
	cout << "Коэффициент a: \n"; cin >> a;
	cout << "Коэффициент b: \n"; cin >> b;
	cout << "Коэффициент x: \n"; cin >> x;
	for (x = 0, 2; x < 0, 2; x + 0, 15);
	{
		y = (acos(pow(x, 2) - pow(b, 2))) / (asin(pow(x, 2) - pow(a, 2)));
		cout << "x =" << x << "y =" << y << endl;
	}
	cout << "Результат функции при заданных результатах : " << y;

}
*/