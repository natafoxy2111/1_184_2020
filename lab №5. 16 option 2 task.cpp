#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    const int startI = 1;
    const int endI = 10;
    double answer = 1 + exp(startI);
    for (int i = startI+1; i <= endI; i++) {
        answer *= 1 + exp(startI);
    }
    cout << "Answer = " << answer;

    return 0;
}