#include<iostream>

using namespace std;

int main()
{
	int number;
	int const num = 10;
	number = 10;
	cout << num << endl;
	number += num;
	cout << number << endl;
	cout << --number << endl;
	return 0;
}