#include<iostream>

using std::cout;
using std::cin;

int main()
{
	int ftemp;
	setlocale(LC_ALL, "");
	cout << "������� ����������� � ����������: ";
	cin >> ftemp;
	int ctemp = (ftemp - 32) * 5 / 9;
	cout << "����������� �� ������� ����� " << ctemp << '\n';
	return 0;
}