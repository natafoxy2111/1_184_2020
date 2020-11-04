#include <stdio.h>
#include <conio.h>

using namespace std;

int main()

{
	int summa = 0;
	const int n = 4, m = 4;
	int a[n][m];
	int i = 0, j = 0;
	for (i = 0; i<n; i++)
	{
		for (j = 0; j<m; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	for (i = 0; i<n; i++)
		for (j = 0; j<m; j++)
			if (i < j)
				summa = summa + a[i][j];
	printf("summa = %d");
	return 0;
}

