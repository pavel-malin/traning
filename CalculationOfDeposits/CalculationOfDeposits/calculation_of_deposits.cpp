#include<iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	setlocale(LC_ALL, "");
	double long a, b;
	float c;

	cout << "������� ��������� �����: ";
	cin >> a;
	cout << endl << "������ ����� ���: ";
	cin >> b;
	cout << endl << "������� ���������� ������: ";
	cin >> c;
	c = c / 100;
	for (int i=1; i < (b + 1); ++i)
	{	
		a += a * c;
		cout << "����� " << i << " ��� �� �������� " << a 
			<< " �������" << endl;
	
	}
	return 0;
}