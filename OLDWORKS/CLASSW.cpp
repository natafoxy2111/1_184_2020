#include <iostream>
#include <string>
using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
	int a = 0;
	string value = " ";
	cout << "ВВЕДИТЕ ЛЮБОЕ ЧИСЛО ---> ";
	cin >> a;
	value = (a % 2 == 0) ? "делится на 2 без остатка" : "не делится на 2 без остатка";
	cout << "Value: " << value << endl;
}