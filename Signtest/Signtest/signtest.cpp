#include<iostream>

using std::cout;
using std::endl;

int main()
{
	int signedVar = 1500000000;
	unsigned int unsignVar = 1500000000;
	signedVar = (signedVar * 2) / 3;
	unsignVar = (unsignVar * 2) / 3;
	setlocale(LC_ALL, "");
	cout << "�������� ���������� ����� " << signedVar << endl;
	cout << "����������� ���������� ����� " << unsignVar << endl;
	return 0;
}