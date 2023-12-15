#include <iostream>
#include <typeinfo>

int main(void)
{
	using namespace std;

	int a = 123;
	cout << typeid(a).name() << endl; // int


	// numeric promotion
	float f = 1.0f;
	double d = f;

	// numeric conversion
	short s = d;

	int i = 30000;
	char c = i;


	f = 3.14;
	i = f;
	cout << i << endl; // 3

	cout << 5u - 10 << endl; // 4294967291


	i = (int)4.0; // c style
	i = int(4.0);
	i = static_cast<int>(4.0);

	return 0;
}