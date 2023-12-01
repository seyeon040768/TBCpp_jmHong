#include <iostream>

bool IsEqual(int a, int b)
{
	bool result = (a == b);

	return result;
}

int main(void)
{
	using namespace std;

	bool b1 = true;
	bool b2(false);
	bool b3{ true };

	cout << b1 << endl;
	cout << b2 << endl;
	cout << b3 << endl;

	cout << boolalpha;
	cout << b1 << endl;
	cout << b2 << endl;
	cout << b3 << endl;


	cout << !true << endl;
	cout << !false << endl;

	
	cout << (true && true) << endl;
	cout << (true && false) << endl;
	cout << (false && true) << endl;
	cout << (false && false) << endl;

	cout << (true || true) << endl;
	cout << (true || false) << endl;
	cout << (false || true) << endl;
	cout << (false || false) << endl;


	if (true)
	{
		cout << "This is true." << endl;
	}

	if (false)
	{
		cout << "This is true." << endl;
	}
	else
	{
		cout << "This is false." << endl;
	}


	cout << IsEqual(1, 1) << endl;
	cout << IsEqual(0, 3) << endl;

	return 0;
}