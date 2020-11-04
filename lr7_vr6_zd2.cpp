//laboratornay rabota 7, variant 6, zadanie 2
#include <iostream>
using namespace std;
void random(int(*matrix)[8], int a, int b) {
    for (int i = 0; i <a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            matrix[i][j] = rand() % (-20) - 10; //массив заполняется числами в диапозоне [-10;10]
            cout << matrix[i][j] << " ";
        }
        cout << "\n";
    }
}
void k_s(int(*matrix)[8], int a, int b) {
    int k = 0, s = 0;
    for (int j = 0; j < b; j++) {
        for (int i = 0; i < a; i++) {
            if (matrix[i][j] < 0) {
                k++;
                s = s + matrix[i][j];
            }
        }
        cout << "Количество отрицательных элементов в " << j+1 << " столбце равно " << k << ", а их сумма равна " << s << endl;
        k = 0;
        s = 0;
    }
    
}




int main() {
    setlocale(LC_ALL, "Rus");
    const int a = 8, b = 6, c = 10;
	int X[c][a];
	int Y[b][a];
    cout << "X" << endl;
    random(X, c, a);
    cout << "********************************" << endl;
    k_s(X, c, a);
    cout << "##################################################################################################" << endl;
    cout << "Y" << endl;
    random(Y, b, a);
    cout << "********************************" << endl;
    k_s(Y, b, a);
    return 0;
}
