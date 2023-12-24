#include <iostream>
#include <cstdlib>
#include <random>

using namespace std;

unsigned int PRNG() // Pseudo Random Number Generator
{
	static unsigned int seed = 5523; // seed number

	seed = 8253729 * seed + 2396403;

	return seed % 32768;
}

int GetRandomNumber(int min, int max)
{
	static const double fraction = 1 / (RAND_MAX + 1.0);

	return min + static_cast<int>((max - min + 1) * rand() * fraction);
}

int main(void)
{
	// srand(5323); // always same
	srand(static_cast<unsigned int>(time(0)));

	for (int i = 1; i <= 100; ++i)
	{
		// cout << PRNG() << "\t";
		// cout << rand() % 4 + 5 << "\t";
		cout << GetRandomNumber(5, 8) << "\t";

		if (i % 5 == 0)
		{
			cout << endl;
		}
	}


	random_device rd;
	mt19937_64 mersenne(rd()); // create a mesenne twister
	uniform_int_distribution<> dice(1, 6);

	for (int i = 1; i <= 20; ++i)
	{
		cout << dice(mersenne) << endl;
	}

	return 0;
}