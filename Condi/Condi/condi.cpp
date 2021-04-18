#include<iostream>

using std::cout;


int main()
{
	setlocale(LC_ALL, "");
	for (int j = 0; j < 80; j++)
	{
		char ch = (j % 8) ? ' ' : 'x';
		cout << ch; // ((j%8)?' ' : 'x');
	}
	return 0;
}