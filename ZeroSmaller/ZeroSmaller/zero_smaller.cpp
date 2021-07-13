#include<iostream>

using std::cout;
using std::endl;

void zeroSmaller(int&, int&);

int main()
{
	int a = 1, b = 2, c = 5, e = 3;
	zeroSmaller(a, b);
	zeroSmaller(c, e);
	cout << "a== " << a << " b== " << b << " c== " << c << " e== " << e << endl;
	return 0;
}

void zeroSmaller(int& a, int& b)
{
	if (a < b)
		a = 0;
	else
		b = 0;
}