#include <iostream>

using namespace std;

int main(void)
{
	float a;

	cout << sizeof(float) << " " << sizeof(a) << " " << sizeof a << endl;


	int x = 3;
	int y = 10;
	int z = (++x, ++y);

	cout << x << " " << y << " " << z << endl;

	
	bool onSale = true;
	const int price = (onSale == true) ? 10 : 100;

	/*if (onSale)
	{
		price = 10; // Error (price is const)
	}
	else
	{
		price = 100; // Error (price is const)
	}*/

	cout << price << endl;

	return 0;
}