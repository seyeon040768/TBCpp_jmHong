#include <iostream>

using namespace std;

#define MY_NUMBER "Hello, World"
#define MAX(a, b) ((a > b) ? a : b)

#define LIKE_APPLE

void DoSomething();

int main(void)
{
	cout << MY_NUMBER << endl;
	cout << MAX(1, 2) << endl;

#ifdef LIKE_APPLE
	cout << "Apple" << endl;
#endif

#ifndef LIKE_APPLE
	cout << "Orange" << endl;
#endif

	DoSomething(); // Orange

	return 0;
}