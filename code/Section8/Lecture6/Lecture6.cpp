#include <iostream>

using namespace std;

class Something
{
private:
	int mId;

public:
	Something(const int& id)
		: mId(id)
	{
		cout << "Constructor " << mId << endl;
	}

	~Something()
	{
		cout << "Destructor " << mId << endl;
	}
};

class IntArray
{
private:
	int* mArr = nullptr;
	int mLength = 0;

public:
	IntArray(const int length)
	{
		mLength = length;
		mArr = new int[mLength];
	}

	~IntArray()
	{
		if (mArr != nullptr)
		{
			delete[] mArr;
		}
	}
};

int main(void)
{
	Something s1(0);
	Something s2(1);
	/* output:
	output:
	Constructor 0
	Constructor 1
	Destructor 1
	Destructor 0
	*/


	IntArray intArray(5);

	return 0;
}