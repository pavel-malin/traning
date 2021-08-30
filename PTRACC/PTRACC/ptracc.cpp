#include<iostream>

using std::cout;
using std::endl;

int main()
{
	int var1 = 11;
	int var2 = 22;
	int* prt;

	prt = &var1;
	cout << *prt << endl;

	prt = &var2;
	cout << *prt << endl;

	return 0;
}