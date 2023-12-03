#include <iostream>

using namespace std;

int main(void)
{
	cout << boolalpha;


	bool x = true;
	cout << !x << endl;


	bool a = true;
	bool b = false;
	cout << (a && b) << endl;
	cout << (a || b) << endl;


	bool b1 = true;
	bool b2 = false;
	bool b3 = false;

	bool r1 = b1 || b2 && b3;
	bool r2 = (b1 || b2) && b3;

	cout << r1 << endl;
	cout << r2 << endl;

	return 0;
}