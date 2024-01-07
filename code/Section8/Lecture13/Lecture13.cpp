#include <iostream>

using namespace std;

class A
{
public:
	int mValue;

public:
	A(const int& value)
	{
		cout << "Constructor" << endl;

		mValue = value;
	}

	~A()
	{
		cout << "Destructor" << endl;
	}

	void Print()
	{
		cout << "Hello" << endl;
	}

	void PrintValue()
	{
		cout << mValue << endl;
	}

	int GetValue() const
	{
		return mValue;
	}
};

A Add(const A& a1, const A& a2)
{
	return A(a1.GetValue() + a2.GetValue());
}

int main(void)
{
	A(0).Print();
	/*
	output:
	Constructor
	Hello
	Destructor
	*/

	A(1).PrintValue();
	/*
	output:
	Constructor
	1
	Destructor
	*/


	cout << Add(A(5), A(7)).GetValue() << endl; // 12

	return 0;
}