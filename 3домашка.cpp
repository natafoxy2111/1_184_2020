#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <windows.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
	int c = 0;
	char z;
	while (!_kbhit()) { cout << " * "; }

	cout << endl;

	char a;
	a = _getch();
	if (strchr("0123456789", a))
	{
		cout << "Вы ввели число " << a << endl;
	}
	else
	{
		cout << "" << a << "  - это не число." << endl;
	}
	system("pause");
	return 0;
}