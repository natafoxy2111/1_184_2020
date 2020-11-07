#include <iostream>

int main()
{
    int k, f;
    std::cout << "Введите длину прямоугльника" << std::endl;
    std::cin >> k;
    std::cout << "Введите ширину прямоугльника" << std::endl;
    std::cin >> f;
    for (int i = 0; i < k; i++)
    {
        for (int j = 0; j < f; j++)
        {
            std::cout << "*";
        }
        std::cout << std::endl;
    }

    return 0;
}