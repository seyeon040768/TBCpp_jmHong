#include <iostream>

using namespace std;

enum class Colors
{
	BLACK,
	WHITE,
	RED,
	GREEN,
	BLUE
};

void PrintColorName(Colors color)
{
	/*if (color == Colors::BLACK)
	{
		cout << "Black" << endl;
	}
	else if (color == Colors::WHITE)
	{
		cout << "White" << endl;
	}
	else if (color == Colors::RED)
	{
		cout << "Red" << endl;
	}
	else if (color == Colors::GREEN)
	{
		cout << "Green" << endl;
	}
	else if (color == Colors::BLUE)
	{
		cout << "Blue" << endl;
	}*/

	switch (color)
	{
	case Colors::BLACK:
		cout << "Black" << endl;
		break;

	case Colors::WHITE:
		cout << "White" << endl;
		break;

	case Colors::RED:
		cout << "Red" << endl;
		break;

	case Colors::GREEN:
		cout << "Green" << endl;
		break;

	case Colors::BLUE:
		cout << "Blue" << endl;
		break;

	default:
		cout << "?" << endl;
		break;
	}
}

int main(void)
{
	int x;
	cin >> x;

	switch (x)	// if (x == 0) output: ZeroOneTwo
	{
	case 0:
		cout << "Zero";
	case 1:
		cout << "One";
	case 2:
		cout << "Two";
	}

	cout << endl;


	PrintColorName(Colors::BLUE);

	return 0;
}