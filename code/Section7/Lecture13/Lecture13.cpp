#include <iostream>

using namespace std;

int main(void)
{
	// semantic error
	int x;
	cin >> x;

	if (x >= 5) // "x is greater than 5" is x > 5
	{
		cout << "x is greater than 5" << endl;
	}


	// violated assumption
	int arr[5] = { 0, 1, 2, 3, 4 };
	int i;
	cin >> i;

	cout << arr[i] << endl;

	return 0;
}