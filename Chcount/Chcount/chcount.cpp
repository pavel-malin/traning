#include<iostream>

using std::cout;
using std::cin;
using std::endl;

#include<conio.h> // getche()

int main()
{
	setlocale(LC_ALL, "");
	int chcount = 0;
	int wdcount = 1;
	char ch = 'a';
	cout << "Введите строку: ";
	while (ch != '\r')
	{
		ch = _getche();
		if (ch == ' ')
			wdcount++;
		else
			chcount++;
	}
	cout << "\nСлов: " << wdcount << endl;
	cout << "Букв: " << (chcount - 1) << endl;
	return 0;
}