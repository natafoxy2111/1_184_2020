#include <iostream>
using namespace std;
 
int main()
{
	int n;
	cout << "Количество элементов массива: ";
	cin >> n; 
	int mass[n];
	for(int i = 0; i < n; ++i)
	{
		cout << i+1 << "-ый элемент: ";
		cin >> mass[i]; 
	} 
	cout << "Исходный массив: ";
	for(int i = 0; i < n; ++i)
	{
		cout << mass[i] << " ";
	}
	cout << endl;
	for(int i = 1; i < n; ++i)
	{
		for(int r = 0; r < n-i; r++)
		{
			if(mass[r] > mass[r+1])
			{
				int temp = mass[r];
				mass[r] = mass[r+1];
				mass[r+1] = temp;
			}
		}
	}
	cout << "Отсортированный массив: ";
	for(int i = 0; i < n; ++i)
	{
		cout << mass[i] << " ";
	}
	cout << endl;
	return 0;
}