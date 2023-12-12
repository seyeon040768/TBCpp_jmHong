#include <iostream>

using namespace std;

int Add(int x, int y)
{
	return x + y;
}

auto Sub(int x, int y)
{
	return x - y;
}

auto Mul(int x, int y) -> int
{
	return x * y;
}

int main(void)
{
	auto a = 123;
	// auto b; // Error

	auto d = 123.0;
	auto c = 1 + 2;

	auto result1 = Add(1, 2);
	auto result2 = Sub(1, 2);
	auto result3 = Mul(1, 2);

	return 0;
}