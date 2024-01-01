#include <iostream>

using namespace std;

int Add(int x, int y)
{
	return x + y;
}

double Add(double x, double y)
{
	return x + y;
}

int main(void)
{
	cout << Add(1, 2) << endl; // 3
	cout << Add(1.1, 2.2) << endl; // 3.3
	// cout << Add(unsigned int(1), unsigned int(2)) << endl; // Error

	return 0;
}