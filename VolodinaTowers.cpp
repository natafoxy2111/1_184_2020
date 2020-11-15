#include <iostream>
using namespace std;

void hanoy(int m, int a, int b, int c)
{
    if (m == 0) return;
    hanoy(m - 1, a, c, b);
    cout << a << " => " << b << endl;
    hanoy(m - 1, c, b, a);
}

void main()
{
    int n = 3, x = 1, y = 2, z = 3;
    hanoy(n, x, z, y);
    cin.get();
    return ;
}
