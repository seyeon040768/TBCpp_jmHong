#include <iostream>
#include <string>
#include <limits>

using namespace std;

int main(void)
{
	const string myHello = "Hello, World";
	// string a = 123; // Error

	cout << myHello << endl; // Hello, World


	string name;

	cout << "Your name: ";
	getline(cin, name); // read line

	cout << name << endl;


	int age;
	cout << "Your age: ";
	cin >> age;

	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	getline(cin, name);


	string a = "Hello, ";
	string b = "World";
	string ab = a + b;
	ab += "!!!";
	
	cout << ab << endl; // Hello, World!!!


	cout << a.length() << endl; // 7

	return 0;
}