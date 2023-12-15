#include <iostream>

using namespace std;

struct Person
{
	double height;
	double weight;
	int age;

	void Print()
	{
		cout << height << " " << weight << " " << age << endl;
	}
};

/*
void PrintPerson(Person person)
{
	cout << person.height << " " << person.weight << " " << person.age << endl;
}
*/

int main(void)
{
	Person me = { 180.0, 100.0, 20 };
	me.height = 180.0;
	me.weight = 100.0;
	me.age = 20;

	// PrintPerson(me); // 180 100 20
	me.Print(); // 180 100 20

	return 0;
}