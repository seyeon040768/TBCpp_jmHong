#include <iostream>
#include <array>

using namespace std;

void AddOne(int& x)
{
	++x;
}

void PrintInt(const int& x)
{
	cout << x << endl;
}

void PrintArray(const array<int, 5>& arr)
{
	for (auto& element : arr)
	{
		cout << element << " ";
	}
	cout << endl;
}

int main(void)
{
	int x = 5;
	PrintInt(x); // 5

	AddOne(x);
	PrintInt(x); // 6


	array<int, 5> arr = { 1, 2, 3, 4, 5 };
	PrintArray(arr); // 1 2 3 4 5

	return 0;
}