#include <iostream>

int main(void)
{
	using namespace std;

	int16_t i(5);
	int8_t myInt = 65;

	cout << myInt << endl;

	int_fast8_t fi(5);
	int_least64_t fl(5);

	return 0;
}