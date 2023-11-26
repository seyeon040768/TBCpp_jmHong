#include <iostream>

using namespace std;

int AddTwoNumbers(int a, int b)
{
	return a + b;
}

void PrintHelloWorld()
{
	cout << "Hello World" << endl;
}

int main(void)
{
	cout << AddTwoNumbers(1, 2) << endl;
	cout << AddTwoNumbers(3, 4) << endl;
	cout << AddTwoNumbers(8, 13) << endl;

	PrintHelloWorld();

	return 0;
}