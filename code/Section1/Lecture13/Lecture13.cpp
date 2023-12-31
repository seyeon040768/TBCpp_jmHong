#include <iostream>

namespace MySpace1
{
	namespace InnerSpace
	{
		int MyFunction()
		{
			return 0;
		}
	}

	int Add(int a, int b)
	{
		return a + b;
	}
}

namespace MySpace2
{
	int Add(int a, int b)
	{
		return a + b;
	}
}

using namespace std;

int main(void)
{
	using namespace MySpace1::InnerSpace;

	cout << MyFunction() << endl;

	cout << MySpace1::Add(3, 4) << endl;
	cout << MySpace2::Add(3, 4) << endl;

	return 0;
}