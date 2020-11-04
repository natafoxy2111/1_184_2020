#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");
	while (!_kbhit()) { cout << "----Dmitrii----"; }
	return 0;
}
