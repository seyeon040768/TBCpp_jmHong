#include <iostream>

#include "MyConstants.h"

using namespace std;

int value = 123;

void DoSomething()
{
	static int a = 1;

	++a;

	cout << a << endl;
}

extern void Hello(); // extern ¾ø¾îµµ µÊ
extern int a;

void PrintConstants();

int main(void)
{
	cout << value << endl; // 123

	int value = 1;

	cout << value << endl; // 1
	cout << ::value << endl; // 123


	DoSomething(); // 2
	DoSomething(); // 3


	Hello(); // Hello
	cout << a << endl; // 123


	/* MyConstants.h
	namespace Constants
	{
		const double pi = 3.141592;
		const double gravity = 9.8;
		// ...
	}
	*/
	cout << Constants::pi << " " << &Constants::pi << endl; // 3.14159 00007FF75E15ABC0
	PrintConstants(); // 3.14159 00007FF75E15ABB8


	/* MyConstants.h
	namespace Constants
	{
		extern const double pi;
		extern const double gravity;
		// ...
	}
	*/
	/* MyConstants.cpp
	namespace Constants
	{
		extern const double pi = 3.141592;
		extern const double gravity = 9.8;
		// ...
	}
	*/
	cout << Constants::pi << " " << &Constants::pi << endl; // 3.14159 00007FF721F4AC28
	PrintConstants(); // 3.14159 00007FF721F4AC28

	return 0;
}