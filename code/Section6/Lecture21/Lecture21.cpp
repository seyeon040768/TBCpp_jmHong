#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
	vector<int> arr = { 1, 2, 3, };

	cout << arr.size() << endl; // 3

	arr = { 1, 2, 3, 4, 5 };

	cout << arr.size() << endl; // 5

	
	for (auto& element : arr)
	{
		cout << element << " "; // 1 2 3 4 5
	}
	cout << endl;

	arr.resize(10);

	for (auto& element : arr)
	{
		cout << element << " "; // 1 2 3 4 5 0 0 0 0 0
	}
	cout << endl;

	return 0;
}