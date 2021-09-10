#include<iostream>

using std::cout;
using std::endl;

int main()
{
	void centimize(double*);
	
	double var = 10.0;
	cout << "var = " << var << " inches" << endl;

	centimize(&var);
	cout << "var = " << var << " centimize" << endl;
	
	return 0;
}

void centimize(double* ptrd)
{
	*ptrd *= 2.54;
}