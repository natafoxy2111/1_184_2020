#include <iostream>
#include <cmath>
using namespace std;

double function(double x) {
    double F;

    F = (exp(2*pow(x, 2)-3)-exp(x))*sin(pow(x, 2));

    return F;
}

int main()
{
    // Change console color
    system("color F0");

    // Initializing var
    const double startX = 0;
    const double endX = 3;
    const double step = 0.1;

    // Call function
    for (double i = startX; i <= endX+step; i = i + step) {
        cout << "X = " << i << " F(X) = " << function(i) << endl;
    }

    return 0;
}
