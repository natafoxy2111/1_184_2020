#include <iostream>

int main()
{
	int n = 0;
	std::cin >> n;
	for (int i = 1; i < n + 1; i++)
	{
		for (int j = 1; j < n + 1; j++)
		{
			std::cout << "*";
		}

		std::cout << std::endl;
	}
	return 0;
}