#include <iostream>

using namespace std;

int Pow(int base, int exponent)
{
	int result = 1;

	for (int count = 0; count < exponent; ++count)
	{
		result *= base;
	}

	return result;
}

int main(void)
{
	for (int count = 0; count < 10; ++count)
	{
		cout << count << endl;
	}

	cout << Pow(2, 10) << endl;

	for (int i = 0, j = 0; i < 5; ++i, j += 2)
	{
		cout << i << " " << j << endl;
	}

	return 0;
}