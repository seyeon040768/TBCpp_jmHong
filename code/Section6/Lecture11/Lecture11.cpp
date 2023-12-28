#include <iostream>

using namespace std;

int main(void)
{
	int* ptr = new (nothrow)int{ 7 };

	if (ptr)
	{
		cout << ptr << endl;
		cout << *ptr << endl;
	}
	else
	{
		cout << "allocate failed" << endl;
	}

	delete ptr;
	ptr = nullptr;

	cout << "After delete" << endl;
	if (ptr)
	{
		cout << ptr << endl;
		cout << *ptr << endl;
	}


	// memory leak
	while (true)
	{
		int* ptr = new int;
		cout << ptr << endl;
	}

	return 0;
}