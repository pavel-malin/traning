#include<iostream>
#include<iomanip>

using std::cout;
using std::cin;
using std::endl;

using std::setw;


int main()
{
	const int MAX = 20;
	char str[MAX];

	cout << "Enter the string: ";
	cin >> setw(MAX) >> str;
	cout << "You the enter: " << str << endl;
	return 0;
}