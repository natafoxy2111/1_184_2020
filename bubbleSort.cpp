#include <iostream>
using namespace std;
void bubbleSort(int* a, int size) {
    int x;
    for (int i = 0; i < size; i++) {
        for (int j = size - 1; j > i; j--) {
            if (a[j - 1] > a[j]) {
                x = a[j - 1];
                a[j - 1] = a[j];
                a[j] = x;
            }
        }
    }
}
int main() {
    int* a;
    int size;
    cout << "n = ";
    cin >> size;
    a = new int[size];
    for (int i = 0; i < size; i++) {
        cout << "a[" << i << "] = ";
        cin >> a[i];
    }
    bubbleSort(&a[0], size);
    for (int i = 0; i < size; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    delete[] a;
    return 0; 
}