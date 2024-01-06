#pragma once

#include <iostream>

class Calc
{
private:
	int mValue;

public:
	Calc(int value);

	Calc& Add(int value);
	Calc& Sub(int value);
	Calc& Mul(int value);
	void Print();
};