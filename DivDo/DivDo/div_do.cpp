#include<iostream>

using std::cout;
using std::cin;
using std::endl;


int main()
{
	setlocale(LC_ALL, "");
	long dividend, divisor;
	char ch;
	do
	{
		cout << "������� �������: ";
		cin >> dividend;
		cout << "������� ��������: ";
		cin >> divisor;
		cout << "������� �������� " << dividend / divisor;
		cout << ", ������� ����� " << dividend % divisor;
		cout << "\n��� ���?(y/n): ";
		cin >> ch;
	} 	while (ch != 'n');
	return 0;
}