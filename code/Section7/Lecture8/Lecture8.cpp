#include <iostream>

using namespace std;

// void Print(int x = 0, int y) // Error
void Print(int x, int y = 0)
{
	cout << x << " " << y << endl;
}

int main(void)
{
	Print(5, 10); // 5 10
	Print(1); // 1 0

	return 0;
}