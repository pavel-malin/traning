#include<iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	int numb;
	setlocale(LC_ALL, "");
	cout << "������� �����: ";
	cin >> numb;
	cout << "numb<10 ����� " << (numb < 10) << endl;
	cout << "numb>10 ����� " << (numb > 10) << endl;
	cout << "numb==10 ����� " << (numb == 10) << endl;
	return 0;
}