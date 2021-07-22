#include<iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	const int SIZE = 6;
	double sales[SIZE];

	cout << "Enter the sales volume for each of the six days\n";
	for (int j = 0; j < SIZE; j++)
		cin >> sales[j];
	double total = 0;
	for (int j = 0; j < SIZE; j)
		total += sales[j];
	double average = total / SIZE;
	cout << "Average volume: " << average << endl;
	return 0;
}