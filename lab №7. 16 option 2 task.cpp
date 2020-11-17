#include <iostream>
using namespace std;

void random(int(*matrix)[10], int a, int b) 
{
    for (int i = 0; i <a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            matrix[i][j] = rand() % (-20) - 10;
            cout << matrix[i][j] << "\t";
        }
        cout << "\n";
    }
}

void random_(int(*matrix)[6], int a, int b)
{
    for (int i = 0; i <a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            matrix[i][j] = rand() % (-20) - 10;
            cout << matrix[i][j] << "\t";
        }
        cout << "\n";
    }
}

void Account(int(*matrix)[10], int a, int b)
{
    float k = 0,  d=0;
    double e=0;
    for (int i = 0; i < a; i++)
    {
        d = matrix[i][i] + matrix[i][9-i];

        e = d/2;
        cout<< "сумма диагональных элементов  строки: " << d << " " << "среднее значение диагональных элементов строки: " << e << endl;
    }
}

void Account_(int(*matrix)[6], int a, int b)
{
    float k = 0,  d=0;
    double e=0;
    for (int i = 0; i < a; i++)
    {
            
         d = matrix[i][i] + matrix[i][5-i];

         e = d/2;
        cout<< "сумма диагональных элементов  строки: " << d << " " << "среднее значение диагональных элементов строки: " << e << endl;
    }
}

int main()
{
    srand(time(0));
    setlocale(LC_ALL, "Russian");
    const int M = 10, N = 6;
    int A[M][M];
    int B[N][N];
    cout << "A" << endl;
    random(A, M, M);
    cout << "********************************" << endl;
    Account(A, M, M);
    cout << "##################################################################################################" << endl;
    cout << "B" << endl;
    random_(B, N, N);
    cout << "********************************" << endl;
    Account_(B, N, N);
    return 0;
}