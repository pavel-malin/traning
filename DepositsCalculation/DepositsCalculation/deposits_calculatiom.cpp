#include<iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	//setlocale(LC_ALL, "");
	double long a, b, d;
	float c;
	cout << "Enter initial contribution: ";
	cin >> a;
	cout << endl << "Enter the number of years: ";
	cin >> b;
	cout << endl << "Enter the interest rate: ";
	cin >> c;
	cout << endl << "Enter the amount of the desired savings: ";
	cin >> d;
	c = c / 100;
	for (int i = 1; i < (b+1); ++i)
	{
		a += a * c;
		cout << "In " << i << " years you will receive " << a
			<< " dollars" << endl;
		if (d < a)
		{
			cout << "The desired amount of " << a 
				<< " savings will be achieved in " <<
				i << " years " << endl;
			break;
			//a += a * c;
		}
		else
			b++;
			continue;
	}
	return 0;
}