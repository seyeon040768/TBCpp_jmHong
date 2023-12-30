#include <iostream>

using namespace std;

enum class Type
{
	INT,
	FLOAT,
	CHAR,
};

int main(void)
{
	char c = 'a';
	int i = 5;
	float f = 3.0f;

	void* ptr = nullptr;

	ptr = &c;
	ptr = &i;
	ptr = &f;

	cout << &f << " " << ptr << endl;
	// cout << *ptr << endl; // Error
	cout << *static_cast<float*>(ptr) << endl;

	Type type = Type::FLOAT;

	switch (type)
	{
	case Type::INT:
		cout << *static_cast<int*>(ptr) << endl;
		break;
	case Type::FLOAT:
		cout << *static_cast<float*>(ptr) << endl;
		break;
	case Type::CHAR:
		cout << *static_cast<char*>(ptr) << endl;
		break;
	}

	return 0;
}