#include<iostream>

using std::cout;
using std::cin;
using std::get;
using std::endl;

const int MAX = 2000;
char str[MAX];


int main()
{
	cout << "\nEnter the string:\n";
	cin.get(str, MAX, '$');
	cout << "You the enter: " << str << endl;
	return 0;
}