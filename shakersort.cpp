#include <iostream>
using namespace std;

void ShakerSort(int [], int); //"Шейкер-сортировка"
void Swap(int [], int, int); //поменять элементы местами 
void out(int [],int);
void random(int [], int);
int main() {
	setlocale(LC_ALL, "Russian");
	int const x = 100;
	int a[x];
	int size;
	cout << "Введите размер массива:";
	cin >> size;
	random(a, size);
	cout << "Массив до сортировки:" << endl;
	out(a, size);
	ShakerSort(a, size);
	cout << "Массив после сортировки:" << endl;
	out(a, size);
}
void ShakerSort(int myint[], int size) {
	int left = 0; //левая граница
	int rigth = size - 1; //правая граница
	int count = 0;
	while (left <= rigth) {
		for (int i = left; i < rigth; i++) { //сдвигаем к концу массива "тяжелые элементы"
			count++;
				if (myint[i] > myint[i + 1]) Swap(myint, i, i + 1); //swap функция обмена
		}
		rigth--; //уменьшаем правую границу 
		for (int i = rigth; i > left; i--) { //сдвигаем к началау массива "легкие элементы"
			count++;
			if (myint[i - 1] > myint[i]) Swap(myint, i - 1, i);
		}
		left++; //увеличиваем левую границу 
	}
	cout << "\nКоличество сравнение = " << count << endl;
}
void Swap(int myint[],int const i, int const j) {
	int glass = myint[i];
	myint[i] = myint[j];
	myint[j] = glass;
}
void out(int a[], int size) {
	for (int i = 0; i < size; i++) {
		cout << a[i] << " ";
	}
}
void random(int a[], int size) {
	for (int i = 0; i < size; i++) {
		a[i] = rand() % (50) - 0;
	}
}