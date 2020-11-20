#include <iostream> 
#include "math.h" 

using namespace std;

int main()
{
	double array[2][21];
	int j = 0;
	double y = 0;
	for (double x = 0; x <= 1.05; x += 0.05)
	{
		y = ((tan(pow(x, 2)) + pow(x + 3, 0.5) + pow(exp(x), -1)) / (pow(x, 4) + 3 * pow(x, 2) - 2 * x - 3));
		array[0][j] = x;
		array[1][j] = y;
		j++;
	}
	for (int i = 0; i < 21; i++)
	{
		cout << "x = " << array[0][i] << " | " << "y = " << array[1][i] << endl;

	}
	return 0;
}
