// mean

#include<iostream>
using namespace std;

int main()
{
	int number1;
	int number2;
	int number3;
	int numberAttempts = 3;
	int result;
	cout << "Plaese, number point 3 enter \n";
	cout << "Number 1: ";
	cin >> number1;
	cout << "\nNumber 2: ";
	cin >> number2;
	cout << "\nNumber 3: ";
	cin >> number3;
	result = (number1 + number2 + number3) / numberAttempts;
	cout << "Result: " << result;

	return 0;
}