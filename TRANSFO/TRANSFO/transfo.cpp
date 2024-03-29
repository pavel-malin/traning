// uses transform() to change array of inches values to cm
#include<iostream>
#include<algorithm>

using namespace std;

int main()
{			// array of inches values
	double inches[] = { 3.5,6.2,1.0, 12.75, 4.33 };
	double centi[5];
	double int_to_cm(double);   // prototype
			// transform into array centi[]
	transform(inches, inches + 5, centi, int_to_cm);

	// display array centi[]
	for (int j = 0; j < 5; j++)
		cout << centi[j] << ' ';
	cout << endl;
	return 0;
}

double int_to_cm(double in)   // convert inches to centimeters
{
	return (in * 2.54);   // return result
}