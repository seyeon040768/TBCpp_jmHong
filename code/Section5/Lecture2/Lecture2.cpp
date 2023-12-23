#include <iostream>

using namespace std;

int Min(int x, int y)
{
	if (x > y)
	{
		return y;
	}
	else
	{
		return x;
	}
}

int main(void)
{
	int x;
	cin >> x;

	if (x > 10)
	{
		cout << "x is greater than 10" << endl;
	}
	else if (x < 10)
	{
		cout << "x is less than 10" << endl;
	}
	else
	{
		cout << "x is 10" << endl;
	}


	int y;
	cin >> x >> y;

	if (x > 0 && y > 0)
	{
		cout << "both numbers are positive" << endl;
	}
	else if (x > 0 || y > 0)
	{
		cout << "one of the numbers is positive" << endl;
	}
	else
	{
		cout << "neither number is positive" << endl;
	}


	cout << Min(x, y) << endl;


	// null statement
	if (x > 10);
	{
		x = 1;
	}

	if (x = 0)
	{
		cout << "always false" << endl;
	}

	return 0;
}