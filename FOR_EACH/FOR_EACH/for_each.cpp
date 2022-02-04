// uses for_each() to output inches array elements as centimeters
#include<iostream>
#include<algorithm>

using namespace std;

void in_to_cm(double);   // declaration

int main()
{				//  array of inches values
	double inches[] = { 3.5, 6.2, 12.75, 4.33 };
	// out[ut as centimeters
	for_each(inches, inches + 5, in_to_cm);
	cout << endl;
	return 0;
}

void in_to_cm(double in)   // convert display as centimeters
{
	cout << (in * 2.54) << ' ';
}