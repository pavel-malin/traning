#include<iostream>

using std::cout;
using std::endl;

int main()
{
	int intarray[5] = { 31,54,77,52,93 };
	int* ptrint;
	ptrint = intarray;

	for (int i = 0; i < 5; i++)
	{
		cout << *(ptrint++) << endl;
	}

	return 0;
}