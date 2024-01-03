#include <iostream>
#include <cstdarg>

using namespace std;

double FindAverage(int count, ...)
{
	double sum = 0;

	va_list list;
	
	va_start(list, count);

	for (int arg = 0; arg < count; ++arg)
	{
		sum += va_arg(list, int);
	}

	va_end(list);

	return sum / count;
}

int main(void)
{
	cout << FindAverage(1, 1, 2, 3) << endl; // 1
	cout << FindAverage(2, 1, 2, 3) << endl; // 1.5
	cout << FindAverage(3, 1, 2, 3) << endl; // 2
	cout << FindAverage(10, 1, 2, 3) << endl; // -3.00097e+08

	return 0;
}