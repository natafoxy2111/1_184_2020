#include <iostream>
#include <cstdlib>

int sort(int A[], int col){
	int temp;
	for (int i = 0; i < col; i++)
		for (int j = 0; j < col - 1; j++){
		if (A[j] > A[j + 1]){
			temp = A[j];
			A[j] = A[j + 1];
			A[j + 1] = temp;
		}
		}
	return 0;
}

void initMas(int A[], int col) {
	for (int i = 0; i < col; i++)
		A[i] = rand() % 50;
}

void showMas(int A[], int col) {
	for (int i = 0; i < col; i++)
		std::cout << A[i] << " ";
	std::cout << std::endl;
}

int main()
{
	const size_t size = 10;
	int mas[size];
	initMas(mas, size);
	showMas(mas, size);
	sort(mas, size);
	showMas(mas, size);
	system("PAUSE>0");
	return 0;
}