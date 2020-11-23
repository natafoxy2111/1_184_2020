#include <iostream>
using namespace std;
void random(int*a, int size)
{
	for (int i = 0; i < size; i++)
	{
		a[i] = rand() % 100;
		cout << "a[" << i << "]= " << a[i] << endl;
	}
}

void BubbleSort(int* a, int size) 
{
	int x;
	for (int i = 0; i < size; i++)
	{
		for (int j = size - 1; j > i; j--) 
		{
			if (a[j - 1] > a[j]) 
			{
				x = a[j - 1];
				a[j - 1] = a[j];
				a[j] = x;
			}
		}
	}
}

void Swipe(int* a, int i, int j)
{
	int swipe = a[i];
	a[i] = a[j];
	a[j] = swipe;
}

void ShakerSort(int* a, int size)
{
	int left = 0;
	int right = size - 1;
	int count = 0;
	while (left <= right)
	{
		for (int i = left; i < right; i++, count++)
		{
			if (a[i] > a[i + 1])
			{
				Swipe(a, i, i + 1);
			}
		}
		right--;

		for (int i = right; i > left; i--, count++)
		{
			if (a[i - 1] > a[i])
			{
				Swipe(a, i - 1, i);
			}
		}
		left++;
	}
}

int main()
{
	int* a;
	int size;
	cout << "n = ";
	cin >> size;
	a = new int[size];
	random(&a[0], size);
	cout << "BUBBLESORT:" << endl;
	BubbleSort(&a[0], size);
	for (int i = 0; i < size; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
	cout << "SHAKERSORT:" << endl;
	random(&a[0], size);
	ShakerSort(&a[0], size);
	for (int i = 0; i < size; i++)
	{
		cout << a[i] << " ";
	}
	delete[] a;
	return 0;
}