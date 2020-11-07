#include <iostream>
#include <cmath>
using namespace std;


int main()

{
    double F, x = 1.0, k = 0.1,  j=3.1;
    while (x <= j)
    {
        F = (log(fabs(x * exp(-1)))) / pow(x, 2);
        cout << "For x = " << x << "   \t   " << " F= " << F << endl;
        x = x + k;
    }
    return 0;
}