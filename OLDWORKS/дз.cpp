#include<iostream>
using namespace std;
int main()
{
	int n;
	setlocale(LC_ALL, "rus");
	cout << "Программа рисует квадрат звездочками со стороной\n";
	cout << " Введите сторону квадрата\n";

	cin >> n;
	for (int i = 1; i <= n; i++)
	{	for (int j = 1; j <= n; j++)
	{
		if (i == 1 || i == n || j == 1 || j == n)
		
			cout << "*";
		else cout << " ";
	}
	cout << endl;
	}
	return 0;
}
