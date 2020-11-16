﻿#include <iostream>
using namespace std;
int power(long int x, unsigned int y);

int main()
{
	int x, y;
	cin >> x;
	cin >> y;
	cout << power(x, y) << endl;
	return 0;

}

int power(long int x, unsigned int y)
{
	int d = 0;
	if (y == 0)
		d = 1;
	else if (y == 1)
		d = x;
	else if (y % 2 == 0)
		d = power(x*x, y / 2);
	else d = x * power(x*x, y / 2);
	return d;
}