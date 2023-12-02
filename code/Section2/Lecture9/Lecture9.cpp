#include <iostream>
#include "MY_CONSTANTS.h"

using namespace std;

void PrintNumber(const int num)
{
	cout << num << endl;
}

int main(void)
{
	const double gravity = 9.8;
	// gravity = 1.2; // Error

	int number;
	cin >> number;

	const int specialNumber1 = number;
	// constexpr int specialNumber2 = number; // Error


	double radius;
	cin >> radius;

	double circumference = 2.0 * radius * constants::pi;

	return 0;
}