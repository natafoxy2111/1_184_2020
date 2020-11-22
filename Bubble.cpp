
#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

void bubbleSort(int*, int); 

int main(int argc, char* argv[])
{
    srand(time(NULL));
    setlocale(LC_ALL, "rus");
    cout << "Введите размер массива: ";
    int size_array; 
    cin >> size_array;

    int* sorted_array = new int[size_array]; 
    for (int counter = 0; counter < size_array; counter++)
    {
        sorted_array[counter] = rand() % 100; 
        cout << setw(2) << sorted_array[counter] << "  "; 
    }
    cout << "\n\n";

    bubbleSort(sorted_array, size_array); 

    for (int counter = 0; counter < size_array; counter++)
    {
        cout << setw(2) << sorted_array[counter] << "  "; 
    }
    cout << "\n";

    system("pause");
    return 0;
}

void bubbleSort(int* arrayPtr, int length_array) 
{
    int temp = 0; 
    bool exit = false;

    while (!exit) 
    {
        exit = true;
        for (int int_counter = 0; int_counter < (length_array - 1); int_counter++) 
          if (arrayPtr[int_counter] > arrayPtr[int_counter + 1]) 
            {
                temp = arrayPtr[int_counter];
                arrayPtr[int_counter] = arrayPtr[int_counter + 1];
                arrayPtr[int_counter + 1] = temp;
                exit = false; 
            }
    }
}
