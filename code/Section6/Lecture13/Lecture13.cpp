#include <iostream>

using namespace std;

int main(void)
{
	int value = 5;
	const int* ptr = &value;
	// *ptr = 6; // Error
	value = 6;

	int value2 = 7;
	ptr = &value2;
	// *ptr = 8; // Error


	int* const ptr2 = &value;
	*ptr2 = 5;
	// ptr2 = &value2; // Error


	const int* const ptr3 = &value;
	// *ptr3 = 5; // Error
	// ptr3 = &value2; // Error

	return 0;
}