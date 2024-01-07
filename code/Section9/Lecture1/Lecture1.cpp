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
};

/*Cents operator + (const Cents& c1, const Cents& c2)
{
	return Cents(c1.GetCents() + c2.GetCents());
}*/

void AddCents(const Cents& c1, const Cents& c2, Cents& cOut)
{
	cOut.SetCents(c1.GetCents() + c2.GetCents());
}

int main(void)
{
	Cents c1(1);
	Cents c2(2);

	Cents sum;
	AddCents(c1, c2, sum);

	cout << sum.GetCents() << endl; // 3

	cout << (c1 + c2).GetCents() << endl; // 3

	return 0;
}