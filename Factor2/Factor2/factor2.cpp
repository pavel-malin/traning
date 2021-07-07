#include<iostream>

using std::cout;
using std::cin;
using std::endl;

unsigned long factfunc(unsigned long);

int main()
{
	setlocale(LC_ALL, "");
	int n;
	unsigned long fact;
	cout << "������� ����� �����: ";
	cin >> n;
	fact = factfunc(n);
	cout << "��������� ����� " << n << " ����� " << fact << endl;
	return 0;
}

unsigned long factfunc(unsigned long n)
{
	if (n > 1)
		return n * factfunc(n - 1);
	else
		return 1;
}