#include <iostream>

using namespace std;

int main(void)
{
	int scores[] = { 84, 92, 76, 81, 56 };

	const int numStudents = sizeof(scores) / sizeof(int);

	int totalScore = 0;

	for (int i = 0; i < numStudents; ++i)
	{
		totalScore += scores[i];
	}


	int maxScore = 0;

	for (int i = 0; i < numStudents; ++i)
	{
		if (scores[i] > maxScore)
		{
			maxScore = scores[i];
		}
	}

	return 0;
}