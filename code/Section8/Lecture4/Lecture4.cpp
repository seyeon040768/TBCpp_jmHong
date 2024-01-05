#include <iostream>

using namespace std;

class Something
{
private:
	int mI;
	double mD;
	char mC;
	int mArr[5];

public:
	Something()
		: mI(1), mD(3.14), mC('a'), mArr{ 1, 2, 3, 4, 5 }
	{

	}

	void Print()
	{
		cout << mI << " " << mD << " " << mC << endl;
		for (auto& element : mArr)
		{
			cout << element << " ";
		}
		cout << endl;
	}
};

int main(void)
{
	Something something;
	something.Print();
	// 1 3.14 a
	// 1 2 3 4 5

	return 0;
}

