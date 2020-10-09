﻿#include <iostream>
#include <math.h>

#define RESET "\033[0m"
#define RED "\033[31m"

/*
В одной программе я реализовал вывод таблицы умножения через два цикла: 'For' и 'Do while'
Я бы хотел сделать эту программу используя три цикла, но зачем мне делать while, когда у меня сделан do while, этот цикл труднее,
чем обычный while. А если я сделал это, значит, обычный while мне не доставит проблем.
*/


using namespace std;

int main()
//First Task
{
	cout << RED << "First Task \n \n " << RESET;
	for (int i = 1; i < 10; i++)
	{
		for ( int j = 1; j < 10; j++)
		{
			cout << i * j << "\t";
		}
		cout << endl;
	}

	//Secons Task
	cout << RED << "\n Second Task \n \n" << RESET;
	int i = 1;
	int j = 1;
	do
	{
		do {
			cout << i * j << "\t";
			j++; 
		} while (j < 10);
		i++;
		j = 1;
		cout << endl;
	} while (i < 10);
		
	
	return 0;
}

