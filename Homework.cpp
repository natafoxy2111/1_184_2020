#include<iostream> 
using namespace std;
void hanoi_towers(int n, int f, int t, int b); //n-количество колец, f-начальное положение колец(1-3), t - конечное положение колец (1-3), b-промежуточный колышек (1-3) 
int main() {
	int n, f, t, b;
	cin >> n >> f >> t >> b;
	hanoi_towers(n, f, t, b);
	return 0;
}
void hanoi_towers(int n, int f, int t, int b) {
	if (n != 0) {
		hanoi_towers(n - 1, f, b, t);
		cout << "{0}->{1}" << f << " " << t;
		hanoi_towers(n - 1, b, t, f);
	}
}