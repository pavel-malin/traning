#include<iostream>

using std::cout;
using std::endl;

const int MAX = 5;

int main()
{
	void centimize(double*);
	double varray[MAX] = { 10.0, 43.1, 95.9, 58.7, 87.3 };

	centimize(varray);

	for (int i = 0; i < MAX; i++)
	{
		cout << "varray [ " << i << " ] = " << varray[i] << " centimize" << endl;
	}
	return 0;
}

void centimize(double* ptrd)
{
	for (int i = 0; i < MAX; i++)
	{
		*ptrd++ *= 2.54;
	}
}