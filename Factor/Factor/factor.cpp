#include<iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	unsigned int numb;
	unsigned long fact = 1;
	setlocale(LC_ALL, "");
	cout << "������� ����� �����: ";
	cin >> numb;
	for (int j = numb; j > 0; j--)
		fact *= j;
	cout << "��������� ����� ����� " << fact << endl;
	return 0;
}