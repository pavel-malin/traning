#include<iostream>
#include<iomanip> // setw

using std::cout;
using std::endl;
using std::setw;

int main()
{
	long pop1 = 8425785, pop2 = 47, pop3 = 9761;
	setlocale(LC_ALL, "");
	cout << setw(9) << "����� " << setw(12)
		<< "���������" << endl
		<< setw(9) << "������" << setw(12) << pop1 << endl
		<< setw(9) << "�����" << setw(12) << pop2 << endl
		<< setw(9) << "���������" << setw(12) << pop3 << endl;
	return 0;
}