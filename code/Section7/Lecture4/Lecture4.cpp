#include <iostream>

using namespace std;

void PrintPointer(const int* ptr)
{
	cout << *ptr << " " << ptr << " " << &ptr << endl;
}

bool TryDivide(const int& x, const int& y, int* out)
{
	if (y == 0)
	{
		return false;
	}

	*out = x / y;
	return true;
}

int main(void)
{
	int value = 5;

	cout << value << " " << &value << endl;

	int* ptr = &value;

	PrintPointer(ptr);


	int x = 2;
	int y = 0;
	int out = 0;

	if (TryDivide(x, y, &out))
	{
		cout << out << endl;
	}
	else
	{
		// ...
	}

	return 0;
}