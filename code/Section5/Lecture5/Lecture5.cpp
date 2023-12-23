#include <iostream>

using namespace std;

int main(void)
{
	int count = 0;

	while (true)
	{
		cout << count << endl;
		++count;

		if (count == 10)
		{
			break;
		}
	}

	return 0;
}