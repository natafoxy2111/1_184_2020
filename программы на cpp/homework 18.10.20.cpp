#include <iostream>
using namespace std;

void Buble(long[], long);
void Cout(long[], long);
void Random(long[], long);
void Shaker(long[], long);
void Swap(long[], long);

int main()
{
	int const x = 100;
	int size;
	cout << "Size: "; cin >> size;
	long a[x];
	cout << " BubleSort " << "\n\n" << endl;

	Random(a, size);
	Buble(a, size);
	/*for (int i = 0; i < size; i++)
	{
		cout << a[i] << endl;
	}
	*/
	Cout(a, size);
	cout << "  " << endl;
	cout << " ShakerSort " << "\n\n" << endl;
	long myint[x];
	Random(myint, size);
	Shaker(myint, size);
	Cout(myint, size);
	cout << "  " << endl;
}

void Buble(long a[], long size)
{
	long i;
	long j;
	long x;
	for (i = 0; i < size; i++)
	{
		for (j = size - 1; j > i; j--)
		{
			if ((a[j - 1]) > (a[j]))
			{
				x = a[j - 1];
				a[j - 1] = a[j];
				a[j] = x;
			}
		}
		Cout(a, size);
		cout << " " << "\n" << endl;
	}
}

void Random(long a[], long size)
{
	for (int i = 0; i < size; i++)
	{
		a[i] = 1.0 + 9 * rand() / (int)RAND_MAX;
	}
}

void Cout(long a[], long size)
{
	for (int i = 0; i < size; i++)
	{
		cout << a[i];
	}
}

void Swap(long myint[], long i, long j)
{
	long glass = myint[i];
	myint[i] = myint[j];
	myint[j] = glass;
}

void Shaker(long myint[], long size)
{
	long left = 0;
	long right = size - 1;
	long count = 0;
	while (left <= right)
	{
		for (int i = left; i < right; i++, count++)
		{
			if (myint[i] > myint[i + 1])
			{
				Swap(myint, i, i + 1);
			}
		}
		right--;

		for (int i = right; i > left; i--, count++)
		{
			if (myint[i - 1] > myint[i])
			{
				Swap(myint, i - 1, i);
			}
		}
		left++;
		Cout(myint, size);
		cout << "  " << "\n" << endl;
	}
	cout << "Number of comparisons: " << count << "\n" << endl;
}