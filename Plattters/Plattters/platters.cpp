#include<iostream>

using std::cout;
using std::cin;

int main()
{
	setlocale(LC_ALL, "");
	int speed;
	cout << "\n������� ����� 33,45 ��� 78: ";
	cin >> speed;
	switch (speed)
	{
	case 33:
		cout << "������������� ������\n";
		break;
	case 45:
		cout << "������ ������\n";
		break;
	case 78:
		cout << "���������� ������\n";
		break;
	}
	return 0;
}