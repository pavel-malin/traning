#include<iostream>

using std::cout;
using std::cin;
using std::endl;

#include<process.h> // exit()

int main()
{
	setlocale(LC_ALL, "");
	unsigned long n, j;
	cout << "������� �����: ";
	cin >> n;
	for (j=2; j<=n/2;j++)
		if (n % j == 0)
		{
			cout << "����� �� �������:������� ��  " << j << endl;
			exit(0);
		}
	cout << "����� �������� �������\n";
	return 0;
}