#include <iostream>
#include <cstdio>

int main(void)
{
	using namespace std;
	int x = 1024;
	double pi = 3.141592;

	cout << "Hello, World!\n"; // << std::endl;
	cout << "x is " << x << " pi is " << pi << endl;

	cout << "abc" << "\t" << "def" << endl;
	cout << "ab" << "\t" << "cdef" << endl;


	cout << "Before your input is " << x << endl;

	cin >> x;

	cout << "Your input is " << x << endl;

	return 0;
}