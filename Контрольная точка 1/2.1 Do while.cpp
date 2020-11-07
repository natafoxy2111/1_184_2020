#include <iostream>

int main()
{
    int i = 1;
    int j = 1;
    do
    {
        do
        {
          std::cout << i << " * " << j << " = " << j * i << std::endl;
          j++;
        }
        while (j < 10);
        i++;
        j = 1;
    }
    while (i < 10);
    return 0;
}