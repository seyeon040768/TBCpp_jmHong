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

	int GetCents() const
	{
		return mCents;
	}

	void SetCents(int cents)
	{
		mCents = cents;
	}

	Cents operator + (const Cents& c)
	{
		return Cents(this->mCents + c.mCents);
	}

	friend ostream& operator << (ostream& out, const Cents& c)
	{
		out << c.mCents;

		return out;
	}

	// unary operator -
	Cents operator - ()
	{
		return -mCents;
	}

	// binary operator -
	Cents operator - (const Cents& c)
	{
		return Cents(this->mCents - c.mCents);
	}

	bool operator ! ()
	{
		return mCents == 0;
	}
};

int main(void)
{
	Cents c(1);

	cout << -c << endl; // -1


	Cents c1(10);
	Cents c2(0);

	cout << !c1 << " " << !c2 << endl; // 0 1

	return 0;
}