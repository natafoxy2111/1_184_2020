#include <iostream>
using namespace std;

void han(int, int, int, int);

int main()
{
	int x;
	setlocale(LC_ALL, "RUS");
	cout << "Введите число:";
	cin >> x;
	han(x, 1, 2, 3);
	return 0;
}

void han(int x, int t1, int t2, int t3)
{
	if (x == 1)
	{
		cout << "Переместить кольцо с номером " << x << " на  кольцо с номером " << t2 << endl;
		return;
	}
	han(x - 1, t1, t2, t3);
	cout << "Переместить  кольцо с номером " << x << " на кольцо с номером " << t2 << endl;
	han(x - 1, t3, t2, t1);
}