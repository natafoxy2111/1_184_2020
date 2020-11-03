#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	cout << "please enter a and b for `ax + b = 0 ";
	int a = 0;
	int b = 0;
	cin >> a >> b;
	if (a == 0)
	{
		cout << "Error, na 0 delit nelza";
	}
	else
	{
		int x = -b / a;
		cout << "Solution:" << x;
	}
	return 0;
}