#include <iostream>

using namespace std;

class Something
{
public:
	static int mValue;

public:
	Something()
		// : mValue(1) // Error
	{
		mValue = 1; // ok
	}

	static int GetValue()
	{
		return mValue;
	}
};

int Something::mValue = 10;

int main(void)
{
	// cout << Something::mValue << endl; // Error

	cout << Something::GetValue() << endl; // 10


	Something s;

	cout << Something::GetValue() << endl; // 1

	return 0;
}