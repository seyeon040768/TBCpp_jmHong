#include <iostream>

using namespace std;

class Cents
{
private:
	int mCents;

public:
	Cents(int cents = 0)
		:mCents(cents)
	{

	}

	operator int()
	{
		return mCents;
	}
};

class Dollar
{
private:
	int mDollar;

public:
	Dollar(int dollar)
		: mDollar(dollar)
	{

	}

	operator Cents()
	{
		return Cents(mDollar * 100);
	}
};

void PrintInt(const int& value)
{
	cout << value << endl;
}

int main(void)
{
	Cents c(7);

	PrintInt(c); // 7


	Dollar d(3);

	c = d;

	PrintInt(c); // 300

	return 0;
}