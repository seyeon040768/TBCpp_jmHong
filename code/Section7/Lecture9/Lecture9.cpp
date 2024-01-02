#include <iostream>
#include <array>
#include <functional>

using namespace std;

int Func()
{
	return 1;
}

bool IsEven(const int number)
{
	return number % 2 == 0;
}

bool IsOdd(const int number)
{
	return number % 2 != 0;
}

void PrintArray(const array<int, 10>& arr, bool(*checkFunc)(const int))
{
	for (auto element : arr)
	{
		if (checkFunc(element))
		{
			cout << element << " ";
		}
	}
	cout << endl;
}

void PrintArray(const array<int, 10>& arr, function<bool(const int)> checkFunc)
{
	for (auto element : arr)
	{
		if (checkFunc(element))
		{
			cout << element << " ";
		}
	}
	cout << endl;
}

int main(void)
{
	cout << Func() << " " << Func << endl; // 1 00007FF68E7E12FD

	int(*funcPtr)() = Func;
	cout << funcPtr() << endl; // 1


	array<int, 10> arr = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };

	PrintArray(arr, IsEven); // 0 2 4 6 8
	PrintArray(arr, IsOdd); // 1 3 5 7 9


	function<bool(const int)> fncPtr = IsEven;
	PrintArray(arr, fncPtr); // 0 2 4 6 8

	fncPtr = IsOdd;
	PrintArray(arr, fncPtr); // 1 3 5 7 9

	return 0;
}