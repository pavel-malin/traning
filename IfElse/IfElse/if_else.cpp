#include<iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	setlocale(LC_ALL, "");
	int x;
	cout << "\n������� �����: ";
	cin >> x;
	if (x > 100)
		cout << "��� ����� ������, ��� 100\n";
	else
		cout << "��� ����� �� ������, ��� 100\n";
	return 0;
}
