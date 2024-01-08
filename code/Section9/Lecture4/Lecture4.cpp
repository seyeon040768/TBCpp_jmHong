#include <iostream>
#include <vector>
#include <random>
#include <algorithm>

using namespace std;

class Cents
{
private:
	int mCents;

public:
	Cents(int cents = 0)
		:mCents(cents)
	{

	}

	int GetCents() const
	{
		return mCents;
	}

	void SetCents(int cents)
	{
		mCents = cents;
	}

	friend ostream& operator << (ostream& out, const Cents& c)
	{
		out << c.mCents;

		return out;
	}

	bool operator == (const Cents& c)
	{
		return this->mCents == c.mCents;
	}

	bool operator > (const Cents& c)
	{
		return this->mCents > c.mCents;
	}

	bool operator < (const Cents& c)
	{
		return this->mCents < c.mCents;
	}
};

int main(void)
{
	Cents c1(10);
	Cents c2(0);

	cout << (c1 == c2) << endl; // 0


	vector<Cents> arr(5);
	for (int i = 0; i < arr.size(); ++i)
	{
		arr[i].SetCents(i);
	}

	random_shuffle(begin(arr), end(arr));

	for (auto& e : arr)
	{
		cout << e << " "; // 4 1 3 2 0
	}
	cout << endl;

	sort(begin(arr), end(arr));

	for (auto& e : arr)
	{
		cout << e << " "; // 0 1 2 3 4
	}
	cout << endl;

	return 0;
}