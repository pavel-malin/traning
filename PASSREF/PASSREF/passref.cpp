#include<iostream>

using std::cout;
using std::endl;

int main()
{
	void centimize(double&);
	
	double var = 10.0;

	cout << "var = " << var << " inches" << endl;

	centimize(var);
	cout << "var = " << var << " centimize" << endl;
	return 0;
}

void centimize(double& v)
{
	v *= 2.54;
}