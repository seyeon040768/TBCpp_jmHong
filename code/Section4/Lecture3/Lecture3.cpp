#include <iostream>

namespace a
{
	int var = 10;
}

namespace b
{
	int var = 10;
}

int main(void)
{
	using std::cout;

	cout << "Hello" << std::endl;


	using namespace std;

	using namespace a;
	using namespace b;

	// cout << var << endl; // Error
	cout << a::var << endl;

	return 0;
}