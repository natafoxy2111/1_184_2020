#include<iostream>
using namespace std;

void hanoi(int n, int t1, int t2, int t3)
{
	if (n == 1)
	{
		cout << "Переместить диск №" << n << " с " << t1 << " на " << t2 << endl;
		return;
	}

	hanoi(n - 1, t1, t3, t2);
	cout << "Переместить диск №" << n << " с " << t1 << " на " << t2 << endl;
	hanoi(n - 1, t3, t2, t1);
}

int main()
{
	int n;
	setlocale(LC_ALL, "Russian");
	cout << "Введите количество дисков: ";
	cin >> n;
	hanoi(n, 1, 2, 3);

	return 0;
}