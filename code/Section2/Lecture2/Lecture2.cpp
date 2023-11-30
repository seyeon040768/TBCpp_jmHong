#include <iostream>

int main(void)
{
	using namespace std;

	short s = 1;
	int i = 1;
	long l = 1;
	long long ll = 1;

	cout << sizeof(short) << endl;
	cout << pow(2, sizeof(short) * 8) << endl;
	cout << numeric_limits<short>::max() << endl;
	cout << numeric_limits<short>::min() << endl;

	cout << sizeof(int) << endl;
	cout << pow(2, sizeof(int) * 8) << endl;
	cout << numeric_limits<int>::max() << endl;
	cout << numeric_limits<int>::min() << endl;

	cout << sizeof(long) << endl;
	cout << pow(2, sizeof(long) * 8) << endl;
	cout << numeric_limits<long>::max() << endl;
	cout << numeric_limits<long>::min() << endl;

	cout << sizeof(long long) << endl;
	cout << pow(2, sizeof(long long) * 8) << endl;
	cout << numeric_limits<long long>::max() << endl;
	cout << numeric_limits<long long>::min() << endl;


	cout << numeric_limits<int>::min() << endl;
	cout << numeric_limits<int>::min() - 1 << endl;
	cout << numeric_limits<int>::max() << endl;
	cout << numeric_limits<int>::max() + 1 << endl;
	
	return 0;
}