#include <iostream>

using namespace std;

inline int Min(int x, int y)
{
	return x < y ? x : y;
}

int main(void)
{
	cout << Min(5, 6) << endl; // 5
	cout << Min(3, 2) << endl; // 2

	cout << (5 < 6 ? 5 : 6) << endl; // 5
	cout << (3 < 2 ? 3 : 2) << endl; // 2

	return 0;
}