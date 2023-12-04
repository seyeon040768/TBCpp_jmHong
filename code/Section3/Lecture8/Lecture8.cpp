#include <iostream>
#include <bitset>

using namespace std;

int main(void)
{
	unsigned int a = 3;

	cout << bitset<8>(a) << endl;

	cout << bitset<8>(a << 1) << " " << (a << 1) << endl;
	cout << bitset<8>(a << 2) << " " << (a << 2) << endl;
	cout << bitset<8>(a << 3) << " " << (a << 3) << endl;
	cout << bitset<8>(a << 4) << " " << (a << 4) << endl;

	
	a = 128;

	cout << bitset<8>(a) << endl;

	cout << bitset<8>(a >> 1) << " " << (a >> 1) << endl;
	cout << bitset<8>(a >> 2) << " " << (a >> 2) << endl;
	cout << bitset<8>(a >> 3) << " " << (a >> 3) << endl;
	cout << bitset<8>(a >> 4) << " " << (a >> 4) << endl;


	a = 0b1100;
	unsigned int b = 0b0110;

	cout << bitset<4>(~a) << " " << bitset<4>(~b) << endl;
	cout << bitset<4>(a & b) << endl;
	cout << bitset<4>(a | b) << endl;
	cout << bitset<4>(a ^ b) << endl;

	return 0;
}