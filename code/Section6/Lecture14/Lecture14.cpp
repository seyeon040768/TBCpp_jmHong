#include <iostream>

using namespace std;

struct In
{
	int a;
};

struct Out
{
	In in;
};

void Func(int& n)
{
	n = 10;
}

int main(void)
{
	int value = 5;

	int* ptr = &value;

	int& ref = value;
	cout << ref << endl; // 5

	ref = 10; // *ptr = 10;
	cout << ref << endl; // 10

	cout << &value << endl; // 000000F7736FFA64
	cout << &ref << endl; // 000000F7736FFA64
	cout << ptr << endl; // 000000F7736FFA64
	cout << &ptr << endl; // 000000F7736FFA88


	int x = 5;
	int& r1 = x;

	const int y = 8;
	// int& r2 = y; // Error
	const int& r2 = y;


	int n = 5;
	cout << n << endl; // 5
	
	Func(n);
	cout << n << endl; // 10


	Out out;
	out.in.a = 10;

	In& in = out.in;
	in.a = 5;
	
	cout << out.in.a << endl; // 5

	return 0;
}