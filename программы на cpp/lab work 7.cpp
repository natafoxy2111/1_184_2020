// lab work 7, var 18, number 2.

#include <iostream>
#include <stdio.h>
#include <conio.h>
# include <windows.h>

using namespace std;

void random(int(*matrix)[N], int a, int b)
{
	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < b; j++)
		{
			matrix[i][j] = rand() % (-20) - 10; 
			cout << matrix[i][j] << " ";
		}
		cout << "\n";
	}
}

void random(int(*matrix)[M], int a, int b)
{
	int k = 0, s = 0;
	for (int j = 0; j < b; j++) {
		for (int i = 0; i < a; i++) {
			if (matrix[i][j] < 0) {
				k++;
				s = s + matrix[i][j];
			}
		}
		cout << "Количество отрицательных элементов в " << j + 1 << " столбце равно " << k << ", а их сумма равна " << s << endl;
		k = 0;
		s = 0;
	}

}

void random(int(*matrix)[K], int a, int b)
{
	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < b; j++)
		{
			matrix[i][j] = rand() % (-20) - 10;
			cout << matrix[i][j] << " ";
		}
		cout << "\n";
	}
}




int main() {
	setlocale(LC_ALL, "Russian");
	const int N, M, K;
	int X[N];
	int Y[M];
	int Z[K]
	cout << "X" << endl;
	random(X, N);
	cout << "@@@@@@@@@@" << endl;
	k_s(X, N);

	cout << "??????????????" << endl;
	cout << "Y" << endl;
	random(Y, M);
	cout << "$$$$$$$$$$$$" << endl;
	k_s(Y, M);

	cout << "Z" << endl;
	random(Z, K);
	cout << "\|/\|/\|/\|/" << endl;
	k_s(Z, K);
	return 0;
}