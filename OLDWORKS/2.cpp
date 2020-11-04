#include <iostream>

using namespace std;

#define RED "\033[31m"
#define RESET "\033[0m"

void Procedure()
{
	for (int i = 1; i < 10; i++)
	{
		for (int j = 1; j < 10; j++)
		{
			cout << i * j << "\t";
		}
		cout << endl;
	}
}

int main()
{
	cout << RED << " Multiplication table \n \n " << RESET;
	Procedure();
		return 0;
}