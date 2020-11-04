#include <iostream>
#include <cmath>
using namespace std;

double function(int a, int x) {
    double y = pow(log10(a+x), 2)/pow((a+x), 2);

    return y;
}

int main() {
    const int a = 2;
    const double xStart = 1.2;
    const double xEnd = 4.2;
    const double delta = 0.6;
    const int valuesCount = 5;
    const double values[valuesCount] = {1.16, 1.32, 1.47, 1.65, 1.93};

    cout << "Task A." << endl << endl;
    for (double i = xStart; i <= xEnd; i = i + delta) {
        cout << "x = " << i << "; y = " << function(a, i) << endl;
    }

    cout << endl << "Task B." << endl << endl;
    for (int i = 0; i < valuesCount; i++) {
        cout << "x = " << values[i] << "; y = " << function(a, values[i]) << endl;
    }

    return 0;
}