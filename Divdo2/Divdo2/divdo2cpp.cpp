#include<iostream>

using std::cout;
using std::cin;

int main()
{
	setlocale(LC_ALL, "");
	long dividen, divisor;
	char ch;
	do {
		cout << "������� �������: ";
		cin >> dividen;
		cout << "������� ��������: ";
		cin >> divisor;
		if (divisor == 0)
		{
			cout << "������������ ��������!\n";
			continue;
		}
		cout << "������� ����� " << dividen / divisor;
		cout << ", ������� ����� " << dividen % divisor;
		cout << "\n��� ���?(y/n): ";
		cin >> ch;
	} while (ch != 'n');
	return 0;
}