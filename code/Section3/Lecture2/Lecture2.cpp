#include <iostream>

using namespace std;

int main(void)
{
	int x = 7;
	int y = 2;
	int z = x % y;

	cout << x / y << " " << z << endl;

	cout << x / y << endl;
	cout << float(x) / y << endl;
	cout << x / float(y) << endl;
	cout << float(x) / float(y) << endl;


	z += y; // z = z + y;

	return 0;
}