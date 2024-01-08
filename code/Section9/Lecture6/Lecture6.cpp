#include <iostream>
#include <cassert>

using namespace std;

class IntList
{
private:
	int mList[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };

public:
	int& operator [] (const int index)
	{
		assert(index >= 0);
		assert(index < 10);

		return mList[index];
	}

	const int& operator [] (const int index) const
	{
		assert(index >= 0);
		assert(index < 10);

		return mList[index];
	}
};

int main(void)
{
	IntList arr;

	arr[3] = 10;

	cout << arr[3] << endl; // 10


	const IntList constArr;

	// constArr[3] = 10; // Error

	cout << constArr[3] << endl; // 3

	return 0;
}