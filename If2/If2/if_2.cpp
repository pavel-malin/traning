#include<iostream>

using std::cout;
using std::cin;

int main()
{
	setlocale(LC_ALL, "");
	int x;
	cout << "������� �����: ";
	cin >> x;
	if (x > 100)
	{
		cout << "����� " << x;
		cout << " ������, ��� 100\n";
	}
	return 0;
}