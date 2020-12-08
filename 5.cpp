
#include <conio.h>
#include <iostream>
#pragma warning(disable:4996)
using namespace std;

int main()
{

	int i = 0;
	while (1)
	{
		cout << i;
		if (kbhit() != 0) break; //press any button to stop
	}
	return 0;
}