#include <iostream>
#include <cstring>

using namespace std;

int main(void)
{
	char myString[] = "string";

	for (int i = 0; i < 7; ++i)
	{
		cout << (int)myString[i] << endl;
	}

	cout << sizeof(myString) / sizeof(myString[0]) << endl; // 7


	char input[255];

	cin >> input;

	cout << input << endl;

	cin.ignore(255, '\n');


	cin.getline(input, 255);

	cout << input << endl;


	int i = 0;
	while (input[i] != '\0')
	{
		cout << input[i];

		++i;
	}
	cout << endl;


	char dest[255];
	strcpy_s(dest, input);
	// strcat(dest, input); // concat input to dest
	// strcmp(dest, input); // if dest == input return 0

	cout << input << endl;
	cout << dest << endl;

	return 0;
}