//
//  main.cpp
//  task 7
//
//  Created by Никита on 04.20.2021.
//

#include <iostream>
#include <math.h>

using namespace std;

int main() {
    cout << "---Lab 5---" << endl;
    cout << "task 1" << endl << endl;
    
    cout << " x   ||  f(x)\t\t x   ||  f(x)\t\t x   ||  f(x)" << endl;
    for (double x = 0; x <= 10; x ++) {
        for (int j = 0; j <= 2; j++) {
            double fx = (exp(2*pow(x/10 + j, 2) - 3) - exp(x/10 + j)) * sin(pow(x/10 + j, 2));
            double apprFx = (ceil(fx*10)) / 10;
            
            cout << x/10 + j;
            if (x == 0 || x == 10) {
                cout << ".0";
            }
            cout << "  ||  " << apprFx;
            if (apprFx == 0) {
                cout << ".0";
            }
            if (j == 0 || j == 1) {
                cout << "\t\t";
            }
        }
        cout << endl;
    }
    
    cout << endl << "task 2" << endl << endl;
    
    double sum = 0;
    for (int i = 1; i <= 40; i++) {
        sum += cos(i);
    }
    cout << "answer = " << sum << endl << endl;
}
