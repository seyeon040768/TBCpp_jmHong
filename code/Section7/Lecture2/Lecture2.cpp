#include <iostream>

using namespace std;

int Add(int x, int y) // pass by value(copy value to another variable)
{
	return x + y;
}

int main(void)
{
	int x = 1;
	int y = 2;
	int z = Add(x, y);

	cout << x << " " << y << " " << z << endl; // 1 2 3

	return 0;
}