#include<iostream>
using namespace std;

void sdvig(char p1, char p2)
{
	cout << "Делаем сдвиг из стержня " << p1 << " в стержень " << p2 << endl;
}
void HANOI(int n, char p1, char p2, char p3)//n-количество дисков, p1- начальная точка,p2-конечная точка,p3-вспомогательный стержень
{
	if (n == 0) 
	{
		return;
	}
	HANOI(n - 1, p1, p3, p2);
	sdvig(p1, p2);
	HANOI(n - 1, p3, p2, p1);
}
int main()
{
	setlocale(0, "RUS");
	int n;
	cout << "Введите количество дисков ---->";
	cin >> n;
	cout << "Для выполнения задачи ---->" << endl;
	HANOI(n, 'A', 'B', 'C');
}