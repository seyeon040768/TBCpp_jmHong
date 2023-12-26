#include <iostream>

using namespace std;

void PrintArray(const int array[], const int length)
{
	for (int i = 0; i < length; ++i)
	{
		cout << array[i] << " ";
	}

	cout << endl;
}

int main(void)
{
	int arr[5] = { 3, 5, 2, 1, 4 };
	const int length = sizeof(arr) / sizeof(int);

	int minIndex = 0;

	PrintArray(arr, length);

	for (int i = 0; i < length - 1; ++i)
	{
		minIndex = i;
		for (int j = i + 1; j < length; ++j)
		{
			if (arr[j] < arr[minIndex])
			{
				minIndex = j;
			}
		}

		int temp = arr[i];
		arr[i] = arr[minIndex];
		arr[minIndex] = temp;
	}

	PrintArray(arr, length);

	return 0;
}