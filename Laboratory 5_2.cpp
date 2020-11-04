#include <iostream>
using namespace std;

int main()
{
    // Change console color
    system("color F0");

    // Initializing var
    const int startI = 1;
    const int endI = 40;
    double answer = 0;

    // Calculation
    for (int i = startI; i <= endI; i++) {
        answer += sin(i);
    }

    cout << "Answer = " << answer;

    return 0;
}