#include <iostream>

using namespace std;

int main(void)
{
	int* ptr = nullptr;
	int** ptrptr = nullptr;

	int value = 5;
	
	ptr = &value;
	ptrptr = &ptr;

	cout << value << " " << *ptr << " " << **ptrptr << endl;


	const int row = 3;
	const int col = 5;

	const int arr2d[row][col] =
	{
		{1, 2, 3, 4, 5},
		{6, 7, 8, 9, 10},
		{11, 12, 13, 14, 15}
	};

	/*int* r1 = new int[col] {1, 2, 3, 4, 5};
	int* r2 = new int[col] {6, 7, 8, 9, 10};
	int* r3 = new int[col] {11, 12, 13, 14, 15};

	int** rows = new int* [row] {r1, r2, r3};*/

	int** rows = new int* [row];

	for (int r = 0; r < row; ++r)
	{
		rows[r] = new int[col];
		for (int c = 0; c < col; ++c)
		{
			rows[r][c] = r * col + c;
		}
	}

	for (int r = 0; r < row; ++r)
	{
		for (int c = 0; c < col; ++c)
		{
			cout << rows[r][c] << " ";
		}
		cout << endl;
	}

	/*delete[] rows[0];
	delete[] rows[1];
	delete[] rows[2];
	delete[] rows;*/

	for (int r = 0; r < row; ++r)
	{
		delete[] rows[r];
	}
	delete[] rows;


	int* matrix = new int[row * col];

	for (int r = 0; r < row; ++r)
	{
		for (int c = 0; c < col; ++c)
		{
			matrix[r * col + c] = r * col + c;
		}
	}

	for (int r = 0; r < row; ++r)
	{
		for (int c = 0; c < col; ++c)
		{
			cout << matrix[r * col + c] << " ";
		}
		cout << endl;
	}

	delete[] matrix;

	return 0;
}