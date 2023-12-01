#include <iostream>

void MyFunction(void)
{

}

int main(void)
{
	// void v;
	int i = 123;
	float f = 123.456f;

	void* pVoid;

	pVoid = (void*)&i;
	pVoid = (void*)&f;

	return 0;
}