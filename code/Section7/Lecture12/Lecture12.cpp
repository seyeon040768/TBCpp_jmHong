#include <iostream>

using namespace std;

void CountDown(int count)
{
	cout << count << endl;

	if (count > 0)
	{
		CountDown(count - 1);
	}
}

int SumTo(int num)
{
	if (num <= 0)
	{
		return 0;
	}

	return num + SumTo(num - 1);
}

int Fibo(int num)
{
	if (num <= 1)
	{
		return 0;
	}
	else if (num == 2)
	{
		return 1;
	}

	return Fibo(num - 2) + Fibo(num - 1);
}

int main(void)
{
	CountDown(5);

	cout << SumTo(10) << endl;

	cout << Fibo(10) << endl;

	return 0;
}