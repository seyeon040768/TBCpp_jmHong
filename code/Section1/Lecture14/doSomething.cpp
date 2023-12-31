#include <iostream>

void PrintAppleOrOrange()
{
	using namespace std;

#ifdef LIKE_APPLE
	cout << "Apple" << endl;
#else
	cout << "Orange" << endl;
#endif
}