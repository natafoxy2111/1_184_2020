#include <iostream>
using namespace std;

void hanoi(int, int, int, int);

int main()
{
	int n;
	setlocale(LC_ALL, "RUS");
	cout << "Введите n:";
	cin >> n;
	hanoi(n, 1, 2, 3);
	return 0;
}
void hanoi(int n, int t1, int t2, int t3)
{
if (n == 1)
{
cout << "Переместить диск по номером " << n << " на диск под номером " << t2 << endl;
return;
}
hanoi(n - 1, t1, t2, t3);
cout << "Переместить диск под номером " << n << " на диск под номером " << t2 << endl;
hanoi(n - 1, t3, t2, t1);
}