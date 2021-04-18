#include<iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	int p;
	double t = 3.3157894911;
	cout << "Press 1 to convert Celsius to Fahrenheit \n" <<
			 "2 to conert Fahrenheit to Celsius: ";
	cin >> p;
	if (p == 1)
	{
		cout << "Enter the temperature in Fahrenheit: ";
		cin >> p;
		cout << endl << "Celsius value : " << p / t << endl;
	}
	else
	{
		cout << "Enter the temperature in Celsius: ";
		cin >> p;
		cout << endl << "Faregate value: " << p * t;
	}
	return 0;
}