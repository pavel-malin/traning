#include<iostream>

using std::cout;
using std::cin;

int main()
{
	int intvar;
	float floavar;

	int* ptrint;
	float* ptrflo;
	void* ptrvoid;

	ptrint = &intvar;
	// ptrint = &flovar // ERROR
	ptrint = reinterpret_cast<int*>(&floavar); // NOT ERROR
	// ptrflo = &intvar // ERROR
	ptrflo = reinterpret_cast<float*>(&intvar); // NOT ERROR
	ptrflo = &floavar;

	ptrvoid = &intvar;
	ptrvoid = &floavar;

	return 0;
}