#include <iostream>
using namespace std;

void maxmin(int a[], int n, int& min, int& max)
{
	min = max = a[0];
	for (int i = 1; i < n; i++)
	{
		if (a[i] < min)
		{
			min = a[i];
		}
		else if (a[i] > max)
		{
			max = a[i];
		}
	}
}


void arrays(int a[], int n)

{

	for (int i = 0; i < n; i++)

	{
		a[i] = rand() % 199 - 98; 
		cout << a[i] << " ";
	}
	cout << endl;
}


int main()

{
	const int i = 20;
	const int j= 30;
	int x[i];
	int y[j];
	cout << "Array x[i]: ";
	arrays(x,i);
	cout << "Array y[j]: ";
	arrays(y, j);
	int xmin, xmax, ymin, ymax;
	double z1, z2;
	maxmin(x, i, xmin, xmax);
	maxmin(y, j, ymin, ymax);
	z1 = (xmax + ymin) / 2.0;
	z2 = (xmin + ymax) / 2.0;
	cout << "z1 = " << z1 << ", z2 = " << z2;
	return 0;
}