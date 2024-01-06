#include <iostream>

using namespace std;

class Something
{
public:
	int mValue;

public:
	Something(const Something& st)
	{
		mValue = st.mValue;

		cout << "Copy Constructer" << endl;
	}

	Something()
		:mValue(0)
	{

	}

	void SetValue(int value)
	{
		mValue = value;
	}

	int GetValue()
	{
		cout << "non-const version" << endl;

		return mValue;
	}

	int GetValue() const
	{
		cout << "const version" << endl;

		return mValue;
	}
};

void PrintAddress(Something something)
{
	cout << &something << endl;
}

int main(void)
{
	const Something something;
	// something.SetValue(3); // Error

	cout << something.GetValue() << endl;


	Something nonConstSt;
	const Something constSt;

	nonConstSt.GetValue(); // non-const version
	constSt.GetValue(); // const version


	Something st;
	cout << &st << endl; // 00000053437BF7D4

	PrintAddress(st);
	// Copy Constructer
	// 00000053437BF8B4

	return 0;
}