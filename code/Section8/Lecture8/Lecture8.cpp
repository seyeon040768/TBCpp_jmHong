#include <iostream>

#include "Calc.h"

using namespace std;

int main(void)
{
	Calc cal(10);

	cal.Add(10).Sub(1).Mul(2);

	cal.Print(); // 38

	return 0;
}