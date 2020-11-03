#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	double x;
	cout << "VVEDITE X=" ;
	cin>> x;
	double s = 0;
	for (int i = 4; i <= 20; i++)
	{
		
		double e = 2.72818;
		double num = (log(i * x) / log(e)) * (log(i * x) / log(e));
		double denum = i + x;
		double y = num / denum;
		 s = s + y;
		cout << "x=" << x << "|    " <<"i="<<i<<"|    "<< "y=" << y <<"|    "<<"s="<<s<< endl;
	}
	cout << "SUMMA=" << s << endl;
	return 0;
	
	
	
	
	}




