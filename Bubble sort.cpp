#include <iostream>

using namespace std;

int randBetween(double min, double max) 
{
    return rand() * ((max - min + 0.999) / RAND_MAX) + min;
}

void consoleOut(int *array, int size) 
{
    for (int i = 0; i < size; i++) 
{
        cout << *(array + i) << " ";
    }
    cout << endl;
}

void bubbleSort(int *a, int size) 
{
    int x;

    for (int i = 0; i < size; i++) 
{
        for (int j = size - 1; j > i; j--) 
{
            if (a[j-1] > a[j]) 
{
                x = a[j-1];
                a[j-1] = a[j];
                a[j] = x;
            }
        }
        consoleOut(a, size);
    }
}

void Swap(int *arrayI, int *arrayJ) 
{
    int glass = *arrayI;
    *arrayI = *arrayJ;
    *arrayJ = glass;
}

void ShakerSort(int *array, int size) 
{
    int left = 0;
    int right = size - 1;
    int count = 0;
    
    while (left <= right) 
{
        for (int i = left; i < right; i++) 
{
            count++;
            if (*(array + i) > *(array + i + 1)) 
{
                Swap(array + i, array + i + 1);
                consoleOut(&array[0], size);
            }
        }
        right--;
        
        for (int i = right; i > left; i--) 
{
            count++;
            if (*(array + i - 1) > *(array + i))
{
                Swap(array + i - 1, array + i);
                consoleOut(&array[0], size);
            }
        }
        left++;
    }
    cout << "lines compared : " << count << endl;
}

int main()
{
    int size = 6;
    cout << "enter size : ";
    cin >> size;
    int array1[size];
    int array2[size];
    for (int i = 0; i < size; i++)
    {
        int rand = randBetween(1, 10);
        array1[i] = rand;
        array2[i] = rand;
    }
    
    consoleOut(&array1[0], size);
    cout << endl;
    
    cout << "-ShakerSort-" << endl;;
    ShakerSort(array1, size);
    cout << endl;
    
    cout << "-BubbleSort-" << endl;;
    bubbleSort(&array2[0], size);
    cout << endl;
}