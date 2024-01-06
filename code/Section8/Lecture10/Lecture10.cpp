#include <iostream>

using namespace std;

class Something
{
public:
	// static int mValue = 1; // Error
	// static const int mValue = 1; // Ok
	static int mValue;
};

int Something::mValue = 1;

int main(void)
{
	Something st1;
	Something st2;

	st1.mValue = 2;

	cout << &st1.mValue << " " << st1.mValue << endl; // 00007FF6E5CAD000 2
	cout << &st2.mValue << " " << st2.mValue << endl; // 00007FF6E5CAD000 2

	cout << Something::mValue << endl; // 2

	return 0;
}