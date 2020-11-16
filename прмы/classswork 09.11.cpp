#include <iostream>
using namespace std;
int factorial(int);

int main()

{
	int x = 7;
	int result = factorial(x);
	std::cout << "factorial ot" << x << "=" << result << std::endl;
	return 0;
}
int factorial(int x)

{
	if (x > 1)
		return x * factorial(x - 1);
	return 1;
}