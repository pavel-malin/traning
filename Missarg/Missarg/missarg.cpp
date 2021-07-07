#include<iostream>

using std::cout;
using std::endl;

void repchar(char = '*', int = 45);

int main()
{
	repchar();
	repchar('=');
	repchar('+', 30);
	return 0;
}

void repchar(char ch, int n)
{
	for (int j = 0; j < n; j++)
		cout << ch;
	cout << endl;
}