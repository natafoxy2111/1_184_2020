// Addational.Task.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <math.h>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	float a = 0;
	float b = 0;
	float c = 0;
	float d = 0;
    float  G = 0;
	cout << "Введите четыре числа, среднее арифметическое которых вы хотите посчитать: ";
	cin >> a >> b >> c >> d;
	G = (a + b + c + d) / 4;
	cout << G << endl;
	return 0;
}
