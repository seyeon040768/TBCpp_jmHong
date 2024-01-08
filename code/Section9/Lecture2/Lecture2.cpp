#include <iostream>
#include <fstream>

using namespace std;

class Point
{
private:
	double mX, mY, mZ;

public:
	Point(double x = 0.0, double y = 0.0, double z = 0.0)
		: mX(x), mY(y), mZ(z)
	{

	}

	double GetX()
	{
		return mX;
	}

	double GetY()
	{
		return mY;
	}

	double GetZ()
	{
		return mZ;
	}

	void Print()
	{
		cout << "(" << mX << " " << mY << " " << mZ << ")" << endl;
	}

	friend ostream& operator << (ostream& out, const Point& point)
	{
		out << "(" << point.mX << " " << point.mY << " " << point.mZ << ")";

		return out;
	}

	friend istream& operator >> (istream& in, Point& point)
	{
		in >> point.mX >> point.mY >> point.mZ;

		return in;
	}
};

int main(void)
{
	Point p1(0.0, 0.1, 0.2);
	
	p1.Print(); // (0 0.1 0.2)

	cout << p1 << endl; // (0 0.1 0.2)


	ofstream of("out.txt");

	of << p1 << endl; // (0 0.1 0.2)

	of.close();


	cin >> p1; // 1.1 2.2 3.3

	cout << p1 << endl; // (1.1 2.2 3.3)

	return 0;
}