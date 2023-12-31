#include <iostream>

using namespace std;

void PrintAddress(int studentsScores[20]) // translated into int*
{
	cout << &studentsScores << endl; // 000000D858F2F700
	cout << &studentsScores[0] << endl; // 000000D858F2F750
	cout << &studentsScores[1] << endl; // 000000D858F2F754
	cout << &studentsScores[2] << endl; // 000000D858F2F758

	cout << sizeof(studentsScores) << endl; // 8
}

int main(void)
{
	const int numStudents = 20;

	int studentsScores[numStudents];

	cout << &studentsScores << endl; // 000000D858F2F750
	cout << &studentsScores[0] << endl; // 000000D858F2F750
	cout << &studentsScores[1] << endl; // 000000D858F2F754
	cout << &studentsScores[2] << endl; // 000000D858F2F758

	cout << sizeof(studentsScores) << endl; // 80

	PrintAddress(studentsScores);

	return 0;
}