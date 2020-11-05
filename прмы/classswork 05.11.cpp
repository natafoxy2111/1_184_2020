  //classwork
#include <iostream>

using namespace std;

void hello();
void goodbye();

int main()
{
	void(*message)();

	message = hello;
	message();
	message = goodbye;
	message();

	return 0;
}

void hello() {
	cout << "hello, world" << endl;
}


void goodbye() {

	cout << "Good bye, world" << endl;
}