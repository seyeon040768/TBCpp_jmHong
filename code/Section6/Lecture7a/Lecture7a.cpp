#include <iostream>
#include <cstddef>
using namespace std;

int main(void)
{
	// double* ptr = NULL; // c style
	double* ptr = nullptr; // modern c++

	if (ptr != nullptr)
	{
		// ...
	}

	return 0;
}