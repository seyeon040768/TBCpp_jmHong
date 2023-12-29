#include <iostream>

using namespace std;

int main(void)
{
	int length = 5;

	int* arr = new int[length]();

	arr[0] = 1;
	arr[1] = 2;

	for (int i = 0; i < length; ++i)
	{
		cout << arr[i] << endl;
	}

	delete[] arr;

	return 0;
}