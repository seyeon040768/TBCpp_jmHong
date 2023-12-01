#include <iostream>
#include <iomanip>
#include <limits>
#include <cmath>

int main(void)
{
	using namespace std;

	float f;
	double d;
	long double ld;

	cout << numeric_limits<float>::max() << endl;
	cout << numeric_limits<float>::min() << endl;
	cout << numeric_limits<float>::lowest() << endl;

	cout << numeric_limits<double>::max() << endl;
	cout << numeric_limits<double>::min() << endl;
	cout << numeric_limits<double>::lowest() << endl;

	cout << numeric_limits<long double>::max() << endl;
	cout << numeric_limits<long double>::min() << endl;
	cout << numeric_limits<long double>::lowest() << endl;


	cout << 3.14 << endl;
	cout << 31.4e-1 << endl;
	cout << 31.4e-2 << endl;
	cout << 31.4e1 << endl;
	cout << 31.24e2 << endl;


	f = 123456789.0f;

	cout << setprecision(10);
	cout << f << endl;


	double zero = 0.0;
	double posInf = 5.0 / zero;
	double negInf = -5.0 / zero;
	double nan = zero / zero;

	cout << posInf << " " << isinf(posInf) << endl; // inf 1
	cout << negInf << " " << isnan(negInf) << endl; // -inf 0
	cout << nan << " " << isnan(nan) << endl; // -nan(ind) 1

	return 0;
}