#include <iostream>
#include <string>

using namespace std;

class Student
{
private:
	int mId;
	string mName;

public:
	Student(const string& name)
		: Student(0, name)
	{

	}

	Student(const int& id, const string& name)
		: mId(id), mName(name)
	{

	}

	void Print()
	{
		cout << mId << " " << mName << endl;
	}
};

int main(void)
{
	Student kevin("Kevin");
	kevin.Print(); // 0 Kevin

	return 0;
}