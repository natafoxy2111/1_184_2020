#include <iostream>
#include <cmath>
using namespace std;
int main() {
	setlocale(LC_ALL, "ru");
	double summ = 0;
	for (int i = 1; i <= 15; i++) summ += exp(-1 * i) * sin(i);
	cout << "Ответ: " << summ;
}
