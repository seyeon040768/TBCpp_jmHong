#include <iostream>

using namespace std;

int main(void)
{
	const int numRows = 3;
	const int numColumns = 5;
	int arr[numRows][numColumns] = // row-major
	{
		{1, 2, 3, 4, 5},
		{6, 7, 8, 9, 10},
		{11, 12, 13, 14, 15}
	};

	for (int row = 0; row < numRows; ++row)
	{
		for (int col = 0; col < numColumns; ++col)
		{
			cout << arr[row][col] << "\t";
		}

		cout << endl;
	}

	return 0;
}