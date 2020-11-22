#include <iostream>
using namespace std;
void out(long a[], long size) {
	for (int i = 0; i < size; i++) {
		cout << a[i] << " ";
	}
	cout << endl;
}
void bubbleSort(long a[], long size) {
	long i, j;
	long x;
	for (i = 0; i < size; i++) {
		for (j = size - 1; j > i; j--) {
			if (a[j - 1] > a[j]) {
				x = a[j - 1];
				a[j - 1] = a[j];
				a[j] = x;

			}
		}
		out(a, size);
	}
}
void random(long a[], long size) {
	for (int i = 0; i < size; i++) {
		a[i] = rand() % (-20) - 10;
	}
}

int main() {
	int const x = 100;
	int size;
	cin >> size;
	long a[x];
	random(a, size);
	out(a, size);
	bubbleSort(a, size);
	out(a, size);
	return 0;
}