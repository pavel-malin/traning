#include<iostream>

using std::cout;
using std::cin;
using std::endl;

#include<conio.h> // _getche()

int main()
{
	setlocale(LC_ALL, "");
	int chcount = 0;
	int wdcount = 1;
	char ch;
	while ((ch = _getche()) != '\r')
	{
		if (ch == ' ')
			wdcount++;
		else
			chcount++;
	}
	cout << "\nСлов: " << wdcount << endl
		<< "Букв: " << chcount << endl;
	return 0;
}