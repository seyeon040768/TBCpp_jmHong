#include <iostream>

using namespace std;

int main(void)
{
	int x = 0;

	cout << x << " " << &x << endl;

	{
		int x = 1;

		cout << x << " " << &x << endl;
	}

	{
		x = 1;

		cout << x << " " << &x << endl;
	}

	return 0;
}