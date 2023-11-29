#include <iostream>

int main(void)
{
	using namespace std;

	bool bValue = false;
	char chValue = 65;
	float fValue = 3.141592f;
	double dValue = 3.141592;

	cout << fValue << endl;
	cout << dValue << endl;


	auto aValue = 3.141592;
	auto aValue2 = 3.141592f;

	cout << sizeof(aValue) << endl;
	cout << sizeof(aValue2) << endl;

	return 0;
}