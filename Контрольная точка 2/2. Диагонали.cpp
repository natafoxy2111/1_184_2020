#include <iostream>

int main()
{
	int k;
	std::cout << "Введите число" << std::endl;
	std::cin >> k;
	{
		for (int i = 1; i < k; i++)
		{
			for (int j = 1; j < k; j++)
			{
				if (i == j || i + j == k)
				{
					std::cout << "0";
				}
				else
				{
					std::cout << "*";
				}

			}
			std::cout << std::endl;
		}
		return 0;
	}
}