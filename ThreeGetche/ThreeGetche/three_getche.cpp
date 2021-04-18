#include<iostream>
#include<conio.h> // _getche()

using std::cout;
using std::endl;

int main()
{
	char ch;
	unsigned long lon = 0;
	cout << "Say number: ";
	while ((ch = _getche()) != '\r')
	{
	lon = lon * 10 + ch - '0';
	cout << lon << endl;
	}
	return 0;
}