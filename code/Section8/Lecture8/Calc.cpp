#include "Calc.h"

using namespace std;

Calc::Calc(int value)
	: mValue(value)
{

}

Calc& Calc::Add(int value)
{
	mValue += value;

	return *this;
}

Calc& Calc::Sub(int value)
{
	mValue -= value;

	return *this;
}

Calc& Calc::Mul(int value)
{
	mValue *= value;

	return *this;
}

void Calc::Print()
{
	cout << mValue << endl;
}
