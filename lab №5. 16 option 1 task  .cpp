#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;

double function(double x) {
    double F;
    F = (sin(pow(x, 3)) + pow((pow(x, 2) + 1), 1/3.0))/(2*log(abs(x+3)));
    return F;
}

int main() {
    const double startX = 0;
    const double endX = 1;
    const double step = 0.05;
    for (double i = startX; i <= endX + step; i = i + step) {
        cout << "X = " << i << " F(X) = " << function(i) << endl;
    }
    return 0;
}