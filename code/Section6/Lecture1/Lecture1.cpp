#include <iostream>

using namespace std;

enum class StudentName
{
	A,
	B,
	C,
	D,
	E,
	NUM_STUDENTS,
};

struct Rectangle
{
	int length;
	int width;
};

int main(void)
{
	// int myArray[] = { 1, 2, 3, 4, 5 };
	int myArray[5] = { 1, 2, }; // 1 2 0 0 0


	int oneStudentScore;
	int studentScores[static_cast<int>(StudentName::NUM_STUDENTS)];

	cout << sizeof(oneStudentScore) << endl; // 4
	cout << sizeof(studentScores) << endl; // 20

	oneStudentScore = 100;

	studentScores[static_cast<int>(StudentName::A)] = 100;
	studentScores[static_cast<int>(StudentName::B)] = 80;
	studentScores[2] = 90;
	studentScores[3] = 50;
	studentScores[4] = 0;
	// studentScores[5] = 30; // Error

	cout << (studentScores[0] + studentScores[1]) / 2.0 << endl; // 90


	cout << sizeof(Rectangle) << endl; // 8

	Rectangle rectArr[10];

	cout << sizeof(rectArr) << endl; // 80

	return 0;
}