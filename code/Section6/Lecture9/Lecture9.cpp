#include <iostream>

using namespace std;

int main(void)
{
	int value = 7;
	int* ptr = &value;

	cout << uintptr_t(ptr) << endl;
	cout << uintptr_t(ptr + 1) << endl; // if int +4, if double +8
	cout << uintptr_t(ptr + 2) << endl;


	int arr[] = { 9, 7, 5, 3, 1 };
	ptr = arr;

	for (int i = 0; i < 5; ++i)
	{
		// cout << arr[i] << endl;
		cout << *(ptr + i) << endl;
	}

	return 0;
}