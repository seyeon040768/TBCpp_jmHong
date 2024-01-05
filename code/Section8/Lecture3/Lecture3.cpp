#include <iostream>

using namespace std;

class Fraction
{
private:
	int mNumerator;
	int mDenominator;

public:
	Fraction(const int& numerator, const int& denominator)
	{
		mNumerator = numerator;
		mDenominator = denominator;
	}

	Fraction()
	{
		mNumerator = 1;
		mDenominator = 1;
	}

	void Print()
	{
		cout << mNumerator << " / " << mDenominator << endl;
	}
};

class Second
{
public:
	Second()
	{
		cout << "class Second constructor()" << endl;
	}
};

class First
{
	Second sec;

public:
	First()
	{
		cout << "class First constructor()" << endl;
	}
};

int main(void)
{
	Fraction frac(1, 2);
	// Fraction frac{ 1, 2 };
	frac.Print(); // 1 / 2

	Fraction frac2;
	frac2.Print(); // 1 / 1


	First fir;
	// class Second constructor()
	// class First constructor()

	return 0;
}