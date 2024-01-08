#include <iostream>

using namespace std;

class Accumulator
{
private:
	int mCounter = 0;

public:
	int operator () (int i)
	{
		mCounter += i;
		return mCounter;
	}
};

int main(void)
{
	Accumulator acc;
	cout << acc(10) << endl; // 10
	cout << acc(20) << endl; // 30

	return 0;
}