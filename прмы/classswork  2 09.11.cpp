
#include <iostream>
using namespace std;
int fibonachi(int);

int main()
{
	int x;
	for (int i = 0; i < 10; i++)
	{
		x = fibonachi(i);
		std::cout << x << "\t";
	}
	std::cout << std::endl;
	return 0;
}
int fibonachi(int x)
{
	if (x == 0)
		return 0;
	if (x == 1)
		return 1;
	return fibonachi(x - 1) + fibonachi(x - 2);
}
