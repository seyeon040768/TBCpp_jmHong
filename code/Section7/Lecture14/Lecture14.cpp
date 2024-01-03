#include <iostream>
#include <array>
#include <cassert>

using namespace std;

void PrintElement(const array<int, 5>& arr, int i)
{
	assert(i >= 0);
	assert(i <= arr.size() - 1);

	cout << arr[i] << endl;
}

int main(void)
{
	// assert(false); // Error(ignored in release mode)


	int number = 5;

	assert(number == 5);

	const int x = 5;
	static_assert(x == 5, "x should be 5"); // constant expression

	return 0;
}