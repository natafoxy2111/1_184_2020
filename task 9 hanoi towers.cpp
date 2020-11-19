//
//  main.cpp
//

#include <iostream>

using namespace std;


void hanoi_towers(int quantity, char from, char to, char buf_peg) {
    if (quantity != 0) {
        hanoi_towers(quantity - 1, from, buf_peg, to);
        cout << from << " -> " << to << endl;
        hanoi_towers(quantity-1, buf_peg, to, from);
    }
}

int main() {
    int quantity;
    cout << "enter quantity: ";
    cin >> quantity;
    hanoi_towers(quantity, 'A', 'C', 'B');
}
