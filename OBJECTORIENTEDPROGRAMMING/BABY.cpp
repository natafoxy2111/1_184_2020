#include <iostream>
#include <string>
using namespace std;
void randomize()
{
int e, s, p;
	e = rand() % 2;
	s = rand() % 2;
	p = rand() % 2;
}
class Baby
{
private:
	string name;
	int eat;
	int sleep;
	int play;
public:
	Baby(string n, int e, int s, int p)
	{
		name = n; eat = e; sleep = s; play = p;
	}
	void display()
	{
		cout << "___________________________________" << endl;
		cout << "NAME:  " << name <<endl;
		if (eat == 1)
		{
			cout << "baby is hungry, feed the baby" << endl;
		}	
		else cout << "well-fed baby, it's ok" << endl;
		if (sleep == 1)
		{
			cout << "baby is tired, put the baby to bed" << endl;
		}
		else cout << "cheerful baby, it's ok" << endl;
		if (play == 1) 
		{
			cout << "play with baby,please " << endl;
		}
		else cout << "baby doesn't want to play, it's ok" << endl;
		cout << "___________________________________" << endl;
		cout << endl;
	}
	~Baby() {};
};
int main()
{
	int e, s, p;
	e = rand() % 2;
	s = rand() % 2;
	p = rand() % 2;
	Baby ONE = Baby("PAUL", e, s, p);

	e = rand() % 2;
	s = rand() % 2;
	p = rand() % 2;
	Baby TWO = Baby("ALEX", e, s,p);
	
	e = rand() % 2;
	s = rand() % 2;
	p = rand() % 2;
	Baby THREE = Baby("RU", e, s, p);
	
	e = rand() % 2;
	s = rand() % 2;
	p = rand() % 2;
	Baby FOUR = Baby("MARY", e, s, p);

	e = rand() % 2;
	s = rand() % 2;
	p = rand() % 2;
	Baby FIVE = Baby("LIZABET", e, s, p);

	e = rand() % 2;
	s = rand() % 2;
	p = rand() % 2;
	Baby SIX = Baby("TOM", e, s, p);


	ONE.display();
	TWO.display();
	THREE.display();
	FOUR.display();
	FIVE.display();
	SIX.display();

	return 0;
}