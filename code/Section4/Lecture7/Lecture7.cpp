#include <iostream>
#include <typeinfo>

using namespace std;

/*int ComputeDamage(int weaponId)
{
	if (weaponId == 0)
	{
		return 1;
	}

	if (weaponId == 1)
	{
		return 2;
	}

	// ...
}*/

enum Color
{
	COLOR_BLACK,
	COLOR_RED,
	COLOR_BLUE,
	COLOR_GREEN,
};

int main(void)
{
	Color paint = COLOR_BLACK;

	cout << paint << " " << COLOR_BLACK << endl; // 0 0


	// Color myColor = 1; // Error


	switch (paint)
	{
	case COLOR_BLACK:

		break;
	case COLOR_RED:

		break;
	case COLOR_BLUE:

		break;
	case COLOR_GREEN:

		break;
	}

	return 0;
}