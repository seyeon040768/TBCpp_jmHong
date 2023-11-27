#include <iostream>

using namespace std;

int Add(int a, int b);
int Multiply(int a, int b);
int Subtrace(int a, int b);

int main(void)
{
	cout << Add(1, 2) << endl;

	return 0;
}

int Add(int a, int b)
{
	return a + b;
}

int Multiply(int a, int b)
{
	return a * b;
}

int Subtrace(int a, int b)
{
	return a - b;
}