#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int f = 1;
	int m = 0;
	int a, b;
	cout << "Чтобы вычислить значение произведения введите числа m, a, b " << endl;
	cout << " m = "; cin >> m;
	cout << " a = "; cin >> a;
	cout << " b = "; cin >> b;
	for (int i = 1; i <= m; i++)
	{
		f = f * ( a + (sin(b)));
	}
	cout << "Произведение = " << f << endl;
	return 0;
}
