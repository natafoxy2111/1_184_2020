#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");
	int a = 0;
	char n;

	cout << "ВВЕДИТЕ ЧИСЛО ---->  ";
	cin >> a;
	if (a==0)
	{n = 'z';}
	else if (a % 3 == 0)
	{n = 'a';}
	else if (a % 4 == 0)
	{n = 'b';}
	else if (a % 5 == 0)
	{n = 'c';}
	else if (a != 0)
	{n = 'q';}
	switch (n)
	{
	case 'q':
		cout << "ОШИБКА А ОЙ" << endl;
		break;
	case 'z':
		cout << "РАВНО НУЛЮ" << endl;
		break;
	case 'a':
		cout << "КРАТНО 3" << endl;
		break;
	case 'b':
		cout << "КРАТНО 4" << endl;
		break;
	case 'c':
		cout << a + 7 << endl;
		break;
	}

}