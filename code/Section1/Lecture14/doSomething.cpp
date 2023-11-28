#include <iostream>

void DoSomething()
{
	using namespace std;

#ifdef LIKE_APPLE
	cout << "Apple" << endl;
#else
	cout << "Orange" << endl;
#endif
}