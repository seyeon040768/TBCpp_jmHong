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

	friend ostream& operator << (ostream& out, const Cents& c)
	{
		out << c.mCents;

		return out;
	}

	// prefix
	Cents& operator ++ ()
	{
		++mCents;
		return *this;
	}

	// postfix
	Cents operator ++ (int)
	{
		Cents temp(mCents);
		++(*this);

		return temp;
	}
};

int main(void)
{
	Cents c(10);

	cout << ++c << endl; // 11
	cout << c << endl; // 11

	cout << c++ << endl; // 11
	cout << c << endl; // 12

	return 0;
}