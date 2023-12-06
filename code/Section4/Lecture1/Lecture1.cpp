#include <iostream>

using namespace std;

int a = 1;

// int a = 1; // Error

int main(void)
{
	// apple = 1; // Error

	int apple = 5;

	{
		int apple = 1;
		cout << apple << endl;
	}

	cout << apple << endl;

	return 0;
}

// apple = 3; // Error