#include <iostream>
#include <bitset>

using namespace std;

int main(void)
{
	bool item1Flag = false;
	bool item2Flag = false;
	bool item3Flag = false;
	bool item4Flag = false;

	// event
	item1Flag = true;

	// event
	item2Flag = false;

	if (item3Flag && !item4Flag)
	{
		// event
	}


	unsigned char itemsFlag = 0;

	cout << "No item " << bitset<8>(itemsFlag) << endl;

	const unsigned char opt0 = 1 << 0;
	const unsigned char opt1 = 1 << 1;
	const unsigned char opt2 = 1 << 2;
	const unsigned char opt3 = 1 << 3;
	const unsigned char opt4 = 1 << 4;
	const unsigned char opt5 = 1 << 5;
	const unsigned char opt6 = 1 << 6;
	const unsigned char opt7 = 1 << 7;

	cout << bitset<8>(opt0) << endl;
	cout << bitset<8>(opt1) << endl;
	cout << bitset<8>(opt2) << endl;
	cout << bitset<8>(opt3) << endl;
	cout << bitset<8>(opt4) << endl;
	cout << bitset<8>(opt5) << endl;
	cout << bitset<8>(opt6) << endl;
	cout << bitset<8>(opt7) << endl;

	// obtained item0
	itemsFlag |= opt0;
	cout << "Item0 obtained " << bitset<8>(itemsFlag) << endl;

	// obtained item3
	itemsFlag |= opt3;
	cout << "Item3 obtained " << bitset<8>(itemsFlag) << endl;

	// lost item3
	itemsFlag &= ~opt3;
	cout << "Item3 lost " << bitset<8>(itemsFlag) << endl;

	// check item1
	if (itemsFlag & opt1)
	{
		cout << "Has item1" << endl;
	}

	// check item0
	if (itemsFlag & opt0)
	{
		cout << "Has item0" << endl;
	}

	// obtained item 2, 3
	itemsFlag |= (opt2 | opt3);
	cout << bitset<8>(opt2 | opt3) << endl;
	cout << "Item2, 3 obtained " << bitset<8>(itemsFlag) << endl;

	// toggle item2, 1
	if ((itemsFlag & opt2) && !(itemsFlag & opt1))
	{
		// itemsFlag ^= opt2;
		// itemsFlag ^= opt1;
		itemsFlag ^= (opt2 | opt1);
	}
	cout << bitset<8>(itemsFlag) << endl;


	unsigned int pixelColor = 0xDAA520;

	cout << bitset<32>(pixelColor) << endl;

	const unsigned int redMask = 0xFF0000;
	const unsigned int greenMask = 0x00FF00;
	const unsigned int blueMask = 0x0000FF;

	cout << bitset<32>(redMask) << endl;
	cout << bitset<32>(greenMask) << endl;
	cout << bitset<32>(blueMask) << endl;

	unsigned char red, green, blue;

	red = (pixelColor & redMask) >> 16;
	green = (pixelColor & greenMask) >> 8;
	blue = (pixelColor & blueMask) >> 0;

	cout << "red " << bitset<8>(red) << " " << int(red) << endl;
	cout << "green " << bitset<8>(green) << " " << int(green) << endl;
	cout << "blue " << bitset<8>(blue) << " " << int(blue) << endl;

	return 0;
}