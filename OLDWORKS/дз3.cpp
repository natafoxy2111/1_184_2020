#include<iostream>
using namespace std;
int main()
{
	int n;
	int m;
	setlocale(LC_ALL, "rus");
	cout << "Программа рисует прямоугольник звездочками со сторонами\n";
	cout << " Введите высоту прямоугольника\n";
	cin >> n;
	cout << "Введите ширину прямоугольника \n";
	cin >> m;
	for (int i = 1; i <= n; i++)
	{	for (int j = 1; j <= m; j++)
	{
		if (i == 1 || i == n || j == 1 || j == m)
		
			cout << "*";
		else cout << " ";
	}
	cout << endl;
	}
	return 0;
}
