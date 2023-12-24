#include <iostream>

using namespace std;

int GetInt()
{
	while (true)
	{
		cout << "Enter an integer number: ";

		int x;
		cin >> x;

		if (cin.fail())
		{
			cin.clear();
			cin.ignore(32767, '\n');

			cout << "Invalid number, please try again" << endl;
		}
		else
		{
			cin.ignore(32767, '\n');

			return x;
		}		
	}
}

char GetOperator()
{
	while (true)
	{
		cout << "Enter an operator (+, -): ";

		char op;
		cin >> op;
		cin.ignore(32767, '\n');

		if (op == '+' || op == '-')
		{
			return op;
		}
		
		cout << "Invalid operator, please try again" << endl;
	}
}

void PrintResult(int x, char op, int y)
{
	switch (op)
	{
	case '+':
		cout << x + y << endl;
		break;
	case '-':
		cout << x - y << endl;
		break;
	default:
		cout << "invalid operator" << endl;
	}
}

int main(void)
{
	int x = GetInt();
	char op = GetOperator();
	int y = GetInt();

	PrintResult(x, op, y);

	return 0;
}