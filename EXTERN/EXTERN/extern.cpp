#include<iostream>

using std::cout;
using std::endl;

#include<conio.h> // _getch()

char ch = 'a';

void getachar();
void putachar();

int main()
{
	while (ch != '\r')
	{
		getachar();
		putachar();
	}
	cout << endl;
	return 0;
}

void getachar()
{
	ch = _getch();
}

void putachar()
{
	cout << ch;
}