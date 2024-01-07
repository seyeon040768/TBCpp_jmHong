#include <iostream>

using namespace std;

class B; // forward declaration

class A
{
private:
	int mValue = 1;

	friend void Print(A& a, B& b);

	friend class B;
};

class B
{
private:
	int mValue = 2;

	friend void Print(A& a, B& b);

public:
	void PrintA(A& a)
	{
		cout << a.mValue << endl;
	}
};

void Print(A& a, B& b)
{
	cout << a.mValue << " " << b.mValue << endl;
}

int main(void)
{
	A a;
	B b;
	Print(a, b); // 1 2

	b.PrintA(a); // 1

	return 0;
}