#include <iostream>
using namespace std;
void out(int a[], int size) {
    for (int i = 0; i < size; i++) {
        cout << a[i] << " ";
    }
}
void enter(int a[], int size) {
    for (int i = 0; i < size; i++) {
        cin >> a[i];
    }
}
void Swap(int myint[], int i, int j) {
    int glass = myint[i];
    myint[i] = myint[j];
    myint[j] = glass;
}
void ShakerSort(int myint[], int size) {
    int left = 0; 
    int right = size - 1; 
    int count = 0;
    while (left <= right) {
        for (int i = left; i < right; i++) { 
            count++;
            if (myint[i] > myint[i + 1])
                Swap(myint, i, i + 1); 
        }
        right--; 
        for (int i = right; i > left; i--) { 
            count++; 
            if (myint[i - 1] > myint[i])
                Swap(myint, i - 1, i);
        }
        left++; 
    }
    cout << "Количество сравнений = " << count << endl;
}
int main()
{
    setlocale(LC_ALL, "Russian");
    int const x = 100;
    int a[x];
    int size;
    cout << "Введите размер массива:";
    cin >> size;
    enter(a, size);
    cout << "Массив " << endl;
    out(a, size);
    ShakerSort(a, size);
    cout << "Массив после сортировки: " << endl;
    out(a, size);
}