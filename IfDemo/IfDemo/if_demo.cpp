#include<iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	setlocale(LC_ALL, "");
	int x;
	cout << "������� �����: ";
	cin >> x;
	if (x > 100)
		cout << "��� ����� ������, �e� 100\n ";
	return 0;
}