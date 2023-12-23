#include <iostream>

using namespace std;

int main(void)
{
	double x;

	while (true)
	{
		for (int i = 0; i < 100; ++i)
		{
			if (i == 50)
			{
				goto breakLoop;
			}
			cout << i << " ";
		}
	}
breakLoop:

	return 0;
}