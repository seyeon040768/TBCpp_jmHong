#include <iostream>
#include <typeinfo>

using namespace std;

int main(void)
{
	int x = 5;

	cout << x << endl;
	cout << &x << endl; // &: address-of operator
	cout << (unsigned long long)&x << endl;

	// de-reference operator (*)
	cout << *(&x) << endl;


	int* ptrX = &x;

	cout << ptrX << endl;
	cout << *ptrX << endl;

	cout << typeid(ptrX).name() << endl; // int * __ptr64


	double d = 123.0;
	double* ptrD = &d;

	cout << sizeof(x) << " " << sizeof(ptrX) << endl;
	cout << sizeof(d) << " " << sizeof(ptrD) << endl;

	return 0;
}