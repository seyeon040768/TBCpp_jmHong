#include <iostream>

using namespace std;

/*
enum Color
{
	RED,
	BLUE,
};

enum Fruit
{
	BANANA,
	APPLE,
};
*/


enum class Color
{
	RED,
	BLUE,
};

enum class Fruit
{
	BANANA,
	APPLE,
};

int main(void)
{
	/*
	Color color = RED;
	Fruit fruit = BANANA;

	cout << (color == fruit) << endl; // 1
	*/


	Color color = Color::RED;
	Fruit fruit = Fruit::BANANA;

	// cout << (color == fruit) << endl; // Error

	return 0;
}