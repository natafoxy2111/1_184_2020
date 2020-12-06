#include <iostream>
#include <cmath>
#include <ctime>
using namespace std;

int s_n_el(int* a, int n) {
	int result = 0;
	for (int i = 0; i < n; i++) if (a[i] < 0) result += a[i];
	return result;
}

int c_n_el(int* a, int n) {
	int result = 0;
	for (int i = 0; i < n; i++) if (a[i] < 0) result++;
	return result;
}

void randomize_array_C(int a[][6]) {
	cout << "\nМассив С успешно сгенерирован! :)\n\n";
	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 6; j++) {
			a[i][j] = rand() % 21 - 10;
			cout << a[i][j] << "\t";
		}
		cout << endl << endl;
	}
}

void randomize_array_D(int a[][8]) {

	cout << "\nМассив D успешно сгенерирован! :)\n\n";

	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			a[i][j] = rand() % 21 - 10;
			cout << a[i][j] << "\t";
		}
		cout << endl << endl;
	}
}

int main() {

	setlocale(LC_ALL, "ru");
	srand(time(0));

	int C[6][6]{}, D[8][8]{}, s_c_c[2][6], s_c_d[2][8];

	randomize_array_C(C);
	randomize_array_D(D);

	cout << endl;
	for (int i = 0; i < 6; i++) {
		s_c_c[0][i] = s_n_el(C[i], 6);
		s_c_c[1][i] = c_n_el(C[i], 6);
	}


	for (int i = 0; i < 2; i++) {
		if (i == 0) cout << "Суммы отрицательных чисел в каждой строке C: \n";
		if (i == 1) cout << "Количество отрицательных чисел в каждой строке C: \n";
		for (int j = 0; j < 6; j++) {
			cout << s_c_c[i][j] << "\t";
		}
		cout << endl;
	}

	for (int i = 0; i < 8; i++) {
		s_c_d[0][i] = s_n_el(D[i], 8);
		s_c_d[1][i] = c_n_el(D[i], 8);
	}

	for (int i = 0; i < 2; i++) {
		if (i == 0) cout << "Суммы отрицательных чисел в каждой строке D: \n";
		if (i == 1) cout << "Количество отрицательных чисел в каждой строке D: \n";
		for (int j = 0; j < 8; j++) {
			cout << s_c_d[i][j] << "\t";
		}
		cout << endl;
	}

}

