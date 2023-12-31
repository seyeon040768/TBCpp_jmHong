#include <iostream>
#include <array>
#include <algorithm>

using namespace std;

int main(void)
{
	array<int, 5> arr = { 1, 2, 3, 4, 5 };
	arr = { 0, 1, 2, 3, 4 };
	arr = { 0, 1, 2 };
	// arr = { 1, 2, 3, 4, 5, 6 }; // Error

	cout << arr.size() << endl; // 5

	arr = { 4, 6, 2, 10, 5 };
	
	for (auto& element : arr)
	{
		cout << element << " "; // 4 6 2 10 5
	}
	cout << endl;

	sort(arr.begin(), arr.end());

	for (auto& element : arr)
	{
		cout << element << " "; // 2 4 5 6 10
	}
	cout << endl;

	return 0;
}