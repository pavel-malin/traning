#include<iostream>

using std::cout;
using std::cin;
using std::get;
using std::endl;

int main()
{
	const int MAX = 80;
	char str[MAX];

	cout << "\nEnter the string: ";
	cin.get(str, MAX);
	cout << "You the enter: " << str << endl;
	return 0;
}