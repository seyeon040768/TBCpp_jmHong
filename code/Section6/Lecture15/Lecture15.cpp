#include <iostream>

using namespace std;

int main(void)
{
	/*
	int x = 5;
	const int& ref = x;
	// ref = 10; // Error
	x = 10;
	*/

	/*
	const int x = 5;
	// int& ref = x; // Error
	const int& ref = x;
	*/

	// int& ref = 3; // Error
	const int& ref = 3;

	return 0;
}