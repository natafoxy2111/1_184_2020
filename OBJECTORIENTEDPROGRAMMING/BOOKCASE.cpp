//BOOKCASE AND FILLING
#include <iostream>
#include <string>
using namespace std;
class Book
{
private:
	string material;
	int high;
	int shelves;
	int width;
	int depth;
public:
	 Book(string m, int h, int s, int w, int d)
	{
		material = m; high = h; shelves = s; width = w; depth = d;
	}
	void display()
	{
		cout << "- - - - - BOOKCASE- - - - - -" << endl;
		cout <<"MATERIAL:" << material << endl<<"HIGH(sm):"<<high<<endl<<"WIDTH(sm):"<<width<<endl<<"DEPTH(sm):"<<depth<<endl<<"SHELVES:"<<shelves<<endl;
		
		cout << "- - - - - - - - - - - - - - -" << endl;
		cout << endl;
	}
	void bookcase()
	{
		cout << " _______________"<<width<<"sm________________" << endl;
		cout << " ____________________________________" << " " << endl;
		cout << " |                                  |" << "  |" << endl;
		cout << " |         4 BOOKS AND CLOCK        |" << "  |" << endl;
		cout << " ____________________________________" << "  |" << endl;
		cout << " |                                  |" << "  |" << endl;
		cout << " |        3 BOOKS AND JOURNAL       |" << "  |" << endl;
		cout << " ____________________________________" << "  |" << endl;
		cout << " |                                  |" << "  |" << endl;
		cout << " |     2 STATTUATE AND 3 JOURNALS   |" << "  |" << endl;
		cout << " ____________________________________" << "  |" << endl;
		cout << " |                                  |" << "  | "<<high<<"sm" << endl;
		cout << " |            7 BOOKS               |" << "  |" << endl;
		cout << " ____________________________________" << "  |" << endl;
		cout << " |                                  |" << "  |" << endl;
		cout << " |            7 BOOKS               |" << "  |" << endl;
		cout << " ____________________________________" << "  |" << endl;
		cout << " |                                  |" << "  |" << endl;
		cout << " |            2 BOOKS               |" << "  |" << endl;
		cout << " ____________________________________" << "  |" << endl;
	}
	~Book() {};
};
void shelve()
{
	int n;
	cout << "enter NUM of shelve(1-6) ----->"; cin >> n;
	if (n == 1)
	{n = 'z';}
	else if (n== 2)
	{n = 'a';}
	else if (n ==4||n==5)
	{n = 'b';}
	else if (n == 3)
	{n = 'c';}
	else if (n==6)
	{n = 'q';}
	switch (n)
	{
	case 'q':
		cout << "2 BOOKS" << endl;
		break;
	case 'z':
		cout << "4 BOOKS AND CLOCK" << endl;
		break;
	case 'a':
		cout << "3 BOOKS AND JOURNAL" << endl;
		break;
	case 'b':
		cout << "7 BOOKS" << endl;
		break;
	case 'c':
		cout << "2 STATTUATE AND 3 JOURNALS" << endl;
		break;
	}
}
int main()
{
	Book ONE = Book("WOOD", 180, 6, 100, 25);
	ONE.display();
	shelve();
	shelve();
	shelve();
	bookcase();
	return 0;
}