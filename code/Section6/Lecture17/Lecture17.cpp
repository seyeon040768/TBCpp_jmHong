#include <iostream>

using namespace std;

int main(void)
{
	int fibonacci[] = { 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89 };

	for (auto& number : fibonacci)
	{
		number = 10;
	}

	for (const int number : fibonacci)
	{
		cout << number << " ";
	}

	return 0;
}