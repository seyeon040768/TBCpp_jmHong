#include <iostream>
#include <array>
#include <tuple>

using namespace std;

int ReturnByValue(int x)
{
	int value = x * 2;

	return value;
}

int* ReturnByAddress(int x)
{
	int value = x * 2;

	return &value;
}

int& ReturnByReference(int x)
{
	int value = x * 2;

	return value;
}

int& GetElement(array<int, 10>& arr, int index)
{
	return arr[index - 1];
}

tuple<int, double> GetTuple()
{
	int a = 10;
	double d = 3.14;

	return make_tuple(a, d);
}

int main(void)
{
	int value = 0;
	int* ptr = nullptr;
	
	value = ReturnByValue(3); // ok

	value = *ReturnByAddress(3); // not good
	ptr = ReturnByAddress(3); // not good

	value = ReturnByReference(3); // ok
	int& ref = ReturnByReference(3); // not good


	// first index 1
	array<int, 10> arr;
	GetElement(arr, 10) = 10;
	cout << GetElement(arr, 10) << endl; // 10


	tuple<int, double> tp = GetTuple();
	cout << get<0>(tp) << endl; // 10
	cout << get<1>(tp) << endl; // 3.14

	// C++17
	auto [a, d] = GetTuple();
	cout << a << endl; // 10
	cout << d << endl; // 3.14

	return 0;
}