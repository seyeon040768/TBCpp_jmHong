#include <iostream>

using namespace std;

class Fruit
{
public:
	enum FruitType
	{
		APPLE,
		BANANA,
		CHERRY,
	};

	class InnerClass
	{

	};

	struct InnerStruct
	{

	};

private:
	FruitType mType;

public:
	Fruit(FruitType type)
		: mType(type)
	{

	}

	FruitType GetType()
	{
		return mType;
	}
};

int main(void)
{
	Fruit apple(Fruit::APPLE);

	if (apple.GetType() == Fruit::APPLE)
	{
		cout << "Apple" << endl;
	}

	return 0;
}