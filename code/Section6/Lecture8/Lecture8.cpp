#include <iostream>

using namespace std;

int main(void)
{
	int arr[5] = { 9, 7, 5, 3, 1 };

	cout << arr[0] << " " << arr[1] << endl;
	cout << arr << endl;
	cout << &arr[0] << endl;

	cout << *arr << endl; // 9


	int* ptr = arr;
	cout << ptr << endl;
	cout << *ptr << endl; // 9

	cout << sizeof(arr) << " " << sizeof(ptr) << endl; // 4 8


	char name[] = "Kevin";
	cout << *name << endl; // K

	return 0;
}