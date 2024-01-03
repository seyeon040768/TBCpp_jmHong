#include <iostream>
#include <vector>

using namespace std;

void PrintStack(vector<int>& stack)
{
	for (auto e : stack)
	{
		cout << e << " ";
	}
	cout << endl;
}

int main(void)
{
	vector<int> v = { 1, 2, 3 };
	cout << v.size() << " " << v.capacity() << endl; // 3 3

	v.resize(2);
	cout << v.size() << " " << v.capacity() << endl; // 2 3

	v.reserve(1024);
	cout << v.size() << " " << v.capacity() << endl; // 2 1024


	vector<int> stack;

	stack.push_back(3);
	PrintStack(stack); // 3

	stack.push_back(5);
	PrintStack(stack); // 3 5

	stack.push_back(7);
	PrintStack(stack); // 3 5 7

	stack.pop_back();
	PrintStack(stack); // 3 5

	stack.pop_back();
	PrintStack(stack); // 3

	stack.pop_back();
	PrintStack(stack); //

	return 0;
}