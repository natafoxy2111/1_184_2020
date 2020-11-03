#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");
	int a = 0;
	int b = 0;
	cout << "Ведите 2 числа, ширину и высоту: ";
	cin >> b >> a;
	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < b; j++)
		{
			cout << "*";
		}
		cout << endl;

	}
	return 0;
}