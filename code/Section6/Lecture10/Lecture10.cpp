#include <iostream>

using namespace std;

int main(void)
{
	// char* name = "Kevin";
	const char* name = "Kevin";
	const char* name2 = "Kevin";

	cout << uintptr_t(name) << endl; // 140702769257392
	cout << uintptr_t(name2) << endl; // 140702769257392


	int intArr[] = { 1, 2, 3, 4, 5 };
	char charArr[] = "Hello, World!";

	cout << intArr << endl; // (address)
	cout << charArr << endl; // Hello, World!
	cout << name << endl; // Kevin


	char c = 'Q';
	cout << &c << endl; // Q面面面面面面面面面面面面面?��

	return 0;
}