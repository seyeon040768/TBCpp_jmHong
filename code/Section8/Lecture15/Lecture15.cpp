#include <iostream>
#include <vector>
#include <algorithm>
#include <random>
#include <chrono>

using namespace std;

class Timer
{
	using clock_t = chrono::high_resolution_clock;
	using second_t = chrono::duration<double, ratio<1>>;

	chrono::time_point<clock_t> startTime = clock_t::now();

public:
	void Elapsed()
	{
		chrono::time_point<clock_t> endTime = clock_t::now();

		cout << chrono::duration_cast<second_t>(endTime - startTime).count() << endl;
	}
};

int main(void)
{
	random_device randomDevice;
	mt19937 mersenneEngine{ randomDevice() };

	vector<int> vec(10);
	for (int i = 0; i < vec.size(); ++i)
	{
		vec[i] = i;
	}

	shuffle(begin(vec), end(vec), mersenneEngine);

	for (auto& e : vec)
	{
		cout << e << " "; // 1 9 7 4 8 2 3 6 0 5
	}
	cout << endl;

	Timer timer;

	sort(begin(vec), end(vec));

	timer.Elapsed(); // 2.5e-06

	for (auto& e : vec)
	{
		cout << e << " "; // 0 1 2 3 4 5 6 7 8 9
	}
	cout << endl;

	return 0;
}