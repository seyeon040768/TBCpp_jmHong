#include <iostream>
#include <cassert>

using namespace std;

class Fraction
{
private:
	int mNumerator;
	int mDenominator;

	/* prohibit a copy
	Fraction(const Fraction& fraction)
		: mNumerator(fraction.mNumerator), mDenominator(fraction.mDenominator)
	{
		cout << "copy" << endl;
	}
	*/

public:
	Fraction(const int& numerator, const int& denominator)
		: mNumerator(numerator), mDenominator(denominator)
	{
		assert(denominator != 0);
	}

	Fraction(const Fraction& fraction)
		: mNumerator(fraction.mNumerator), mDenominator(fraction.mDenominator)
	{
		cout << "copy" << endl;
	}

	Fraction()
	{
		mNumerator = 1;
		mDenominator = 1;
	}

	friend ostream& operator << (ostream& out, const Fraction& f)
	{
		out << f.mNumerator << " / " << f.mDenominator;

		return out;
	}
};

Fraction MakeFrac()
{
	Fraction temp(1, 2);

	cout << &temp << endl;

	return temp;
}

int main(void)
{
	Fraction frac(3, 5);

	// Fraction frCopy(frac); // copy
	Fraction frCopy = frac; // copy

	cout << frac << endl; // 3 / 5
	cout << frCopy << endl; // 3 / 5


	// RVO(Return Value Optimization)
	Fraction f = MakeFrac(); // 000000CEE2CFF718

	cout << &f << endl; // 000000CEE2CFF718

	return 0;
}