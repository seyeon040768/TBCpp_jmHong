#include <iostream>

#include "MyConstants.h"

using namespace std;

int a = 123;

void Hello()
{
	cout << "Hello" << endl;
}

void PrintConstants()
{
	cout << Constants::pi << " " << &Constants::pi << endl;
}