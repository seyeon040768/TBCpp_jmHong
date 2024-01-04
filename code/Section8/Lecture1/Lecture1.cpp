#include <iostream>
#include <string>

using namespace std;

class Friend
{
public: // access specifier (public, private, protected)
	string mName;
	string mAddress;
	int mAge;
	double mHeight;
	double mWeight;

	void Print()
	{
		cout << mName << " " << mAddress << " " << mAge << " " << mHeight << " " << mWeight << endl;
	}
};

int main(void)
{
	Friend kevin{ "Kevin", "Korea", 2, 30, 10 }; // instanciation

	kevin.Print(); // Kevin Korea 2 30 10

	return 0;
}