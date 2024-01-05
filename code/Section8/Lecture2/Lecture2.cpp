#include <iostream>

using namespace std;

class Date
{
private: // access specifier
	int mMonth;
	int mDay;
	int mYear;

public:
	void SetDate(const int& month, const int& day, const int& year)
	{
		mMonth = month;
		mDay = day;
		mYear = year;
	}

	void SetMonth(const int& month)
	{
		mMonth = month;
	}

	int GetMonth()
	{
		return mMonth;
	}

	void CopyFrom(const Date& original)
	{
		// 같은 클래스라면 다른 인스턴스라도 private에 접근 가능
		mMonth = original.mMonth;
		mDay = original.mDay;
		mYear = original.mYear;
	}
};

int main(void)
{
	Date today;
	today.SetDate(1, 5, 2024);

	// today.mMonth = 1; // Error
	today.SetMonth(1);
	
	cout << today.GetMonth() << endl;


	Date copy;
	copy.CopyFrom(today);

	return 0;
}