#include <iostream>
#include <stdio.h>
#include <Windows.h>
using namespace std;

int array_check(int array[], int array_size) {
    int count = 0;
    for (int i = 0; i < array_size; i++) {
        if (array[i] > 0) {
            count++;
        } else {
            return count;
        }
    }
    return count;
}

int main()
{
    // Initializing arrays
    const int arrayX_size = 16;
    int arrayX[arrayX_size];
    const int arrayY_size = 20;
    int arrayY[arrayY_size];
    const int arrayZ_size = 25;
    int arrayZ[arrayZ_size];

    // Filling arrays with random numbers
    // Outputing arrays
    cout << "Array X:" << endl;
    for (int i = 0; i < arrayX_size; i++) {
        arrayX[i] = rand() % 20 - 10;
        cout << arrayX[i] << endl;
    }
    cout << endl;
    cout << "Array Y:" << endl;
    for (int i = 0; i < arrayY_size; i++) {
        arrayY[i] = rand() % 20 - 10;
        cout << arrayY[i] << endl;
    }
    cout << endl;
    cout << "Array Z:" << endl;
    for (int i = 0; i < arrayZ_size; i++) {
        arrayZ[i] = rand() % 20 - 10;
        cout << arrayZ[i] << endl;
    }
    cout << endl;

    // Change console color
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, (WORD)((4 << 4) | 15));
    // Check pozitive numbers
    cout << "Count of pozitive numbers before first negative number in arrays." << endl;
    cout << "In array X: " << array_check(arrayX, arrayX_size) << endl;
    cout << "In array Y: " << array_check(arrayY, arrayY_size) << endl;
    cout << "In array Z: " << array_check(arrayZ, arrayZ_size);
    // Change console color
    SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | 15));

    return 0;
}