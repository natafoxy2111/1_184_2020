#include <iostream>
using namespace std;


void random(int(*matrix)[15], int n, int m)
{
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			matrix[i][j] = rand() % 130 - 80;
			cout << matrix[i][j] << "\t";
		}
		cout << "\n";
	}
}
void summa(int(*matrix)[15], int n, int m)
{
	int sum = 0;
	for (int j = 0; j < m; j++)
	{

		for (int i = 0; i < n; i++) {
			if (matrix[i][j] > 0) {
				sum= sum + matrix[i][j];
			}

		}
		cout << "s=" << sum << " ";
		sum = 0;
	}

}
void random1(int(*matrix)[8], int n, int m)
{
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			matrix[i][j] = rand() % 130 - 80;
			cout << matrix[i][j] << "   ";
		}
		cout << "\n";
	}
}
void summa1(int(*matrix)[8], int n, int m)
{
	int sum = 0;
	for (int j = 0; j < m; j++)
	{

		for (int i = 0; i < n; i++) {
			if (matrix[i][j] > 0) {
				sum = sum + matrix[i][j];
			}

		}
		cout << "s=" << sum << "\t";
		sum = 0;
	}

}
int main()
{
	const int b = 8;
	const int a = 6;
	const int n = 10;
	const int m= 15;
	int B[a][b];
	int A[n][m];
	
	cout << "MATRICA A" << endl;
	random(A, n, m);
	cout << "SUMMA > 0" << endl;
	summa(A, n, m);
	cout << "\n";
	cout << "---------------------------------------------------------------" << endl;
	cout << "MATRICA B" << endl;
	random1(B, a, b);
	cout << "SUMMA > 0" << endl;
	summa1(B, a, b);

	
	return 0;
}
