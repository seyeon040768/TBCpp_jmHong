#include <iostream>

using namespace std;

int main(void)
{
	int count = 0;

	while (true)
	{
		cout << count << endl;

		if (count == 10)
		{
			break;
		}

		++count;
	}

	while (true)
	{
		char ch;
		cin >> ch;

		cout << ch << endl;

		if (ch == 'q')
		{
			break;
		}
	}


	for (int i = 0; i < 10; ++i)
	{
		if (i % 2 == 0)
		{
			continue;
		}

		cout << i << endl;
	}

	return 0;
}