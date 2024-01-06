#include <iostream>

using namespace std;

class Student
{
private:
	int mId;

public:
	Student(int id)
	{
		this->SetId(id); // same as SetId(id);

		cout << this << endl;
	}

	void SetId(int id)
	{
		mId = id;
	}

	int GetId()
	{
		return mId;
	}
};

class Calc
{
private:
	int mValue;

public:
	Calc(int value)
		: mValue(value)
	{

	}

	Calc& Add(int value)
	{
		mValue += value;

		return *this;
	}

	Calc& Sub(int value)
	{
		mValue -= value;

		return *this;
	}

	Calc& Mul(int value)
	{
		mValue *= value;

		return *this;
	}

	void Print()
	{
		cout << mValue << endl;
	}
};

int main(void)
{
	Student s1(1); // 0000001DB22FF6D4

	cout << &s1 << endl; // 0000001DB22FF6D4

	s1.SetId(1); // think as Student::SetId(&s1, 1);


	Calc cal1(10), cal2(10);
	cal1.Add(10);
	cal1.Sub(1);
	cal1.Mul(2);

	cal2.Add(10).Sub(1).Mul(2);

	cal1.Print(); // 38
	cal2.Print(); // 38

	Calc(10).Add(10).Sub(1).Mul(2).Print(); // 38

	return 0;
}