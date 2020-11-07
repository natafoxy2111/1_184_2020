#include <iostream>

int main()
{
	int k;
	std::cout << "Введите число" << std::endl;
	std::cin >> k;
	{
		for (int i = 0; i < k; i++)
		{
			for (int j = 0; j < k; j++)
			{
				std::cout << "*";
			}
			std::cout << std::endl;
		}
		return 0;
	}
}