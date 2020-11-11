#include <iostream>

using namespace std;

void hanoi_towers(int quantity, int from, int to, int buf_peg)  //quantity-число колец, from-начальное положение колец(1-3),to-конечное положение колец(1-3)
{                               //buf_peg - промежуточный колышек(1-3)
    if (quantity != 0)
    {
        hanoi_towers(quantity - 1, from, buf_peg, to);
        cout << "{0} -> {1} " << from << " " << to << endl;
        hanoi_towers(quantity - 1, buf_peg, to, from);
    }
}

int main()
{
    int quantity, from, to, buf_peg;
    cout << "Кол-во колец = "; cin >> quantity;
    cout << "Начальное положение колец = "; cin >> from;
    cout << "Конечное положение колец = "; cin >> to;
    cout << "Промежуточный колышек = "; cin >> buf_peg;
    hanoi_towers(quantity, from, to, buf_peg);
    return 0;
}