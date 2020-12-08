#include <iostream>
int main()
{
	int l = 0;
	int w = 0;
	std::printf("write length: ");
	std::cin >> l;
	std::printf("write width: ");
	std::cin >> w;

	for (int i = 1; i < l + 1; i++)
	 {
		for (int j = 1; j < w + 1; j++)
		 {
			std::cout << "*";
		}
		std::cout << std::endl;
}
	return 0;
}