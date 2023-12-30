#include <iostream>

struct Person
{
	int age;
	double weight;
};

int main(void)
{
	Person person;

	person.age = 5;
	person.weight = 30;

	Person& ref = person;
	ref.age = 15;

	Person* ptr = &person;
	ptr->age = 30;
	(*ptr).age = 20;

	return 0;
}