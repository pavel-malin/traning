#include<iostream>

using std::cout;
using std::cin;
using std::endl;

double powers(double n, int p = 2);

int main()
{
	int x;
	double number, r;
	char yes;
	cout << "Value input: ";
	cin >> number;
	cout << "\nDegree (y/n)?:  ";
	cin >> yes;
	if (yes == 'y')
	{
		cout << "Degree input: ";
		cin >> x;
		r = powers(number, x);
	}
	else
	{
		r = powers(number);
	}
	cout << "Result: " << r << endl;
	return 0;
}

double powers(double n, int p)
{
	double result = 1.0;
	for (int i = 0; i < p; i++)
		result *= n;
	return result;
}