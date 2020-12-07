#include <iostream>
using namespace std;
void hanoi_towers(int quantity, int from, int to, int buf_peg) { //quantity-число колец, from - начальное(1) положение колец, to - конечное, buf_peg - второй колышек.
	if (quantity != 0) {
		hanoi_towers(quantity - 1, from, buf_peg, to);
		cout << from << " -> "<< to << endl;
		hanoi_towers(quantity - 1, buf_peg, to, from);
	}
}
int main(){
    setlocale(LC_ALL, "rus");
    int from=1, buf_peg=2, to=3, quantity;
    cout << "Количество дисков:" << endl;
    cin >> quantity;
    hanoi_towers(quantity, from, buf_peg, to);
    return 0;
}