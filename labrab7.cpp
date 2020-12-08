#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

void random(double a[], int const size1, int const size2)
{
	srand(time(0));
	for (int i = 0; i < size1; i++)
	{
		a[i] = 1.0 + 9 * rand() / (int)RAND_MAX / (double)RAND_MAX;
	}
}

int main()
{
	setlocale(LC_ALL, "RUS");
	double a[5][5];
	double b[6][6];
	int size1 = 5;
	int size2 = size1;
	int size3 = 6;
	int size4 = size3;
	cout << "A" << endl;
	random(*a, 5, 5);
	for (int i = 0; i < size1; i++)
	{
		for (int j = 0; j < size2; j++)
		{
			if (i >= j) {
				if ((float)((int)a[i][j]) == (a[i][j]))
				{
					cout << "Ёлемент целочисленный. јдресс: " << i << j << ". «начение: " << a[i][j] << endl;
				}
			}
		}
	}
	cout << "##################################################################################################" << endl;
	cout << "B" << endl;
	random(*b, 6, 6);
	for (int i = 0; i < size3; i++)
	{
		for (int j = 0; j < size4; j++)
		{
			if (i >= j) {
				if ((float)((int)b[i][j]) == (b[i][j]))
				{
					cout << "Ёлемент целочисленный. јдресс: " << i << j << ". «начение: " << b[i][j] << endl;
				}
			}
		}
	}
	return 0;
}