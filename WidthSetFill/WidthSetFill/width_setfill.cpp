#include<iostream>
#include<iomanip>

using std::cout;
using std::cin;
using std::endl;

using std::setfill;
using std::setw;


int main()
{
	setlocale(LC_ALL, "");
	long pop1 = 8425785, pop2 = 47, pop3 = 9761;
	cout << setw(9) << "�����"
		<< setw(10) << "���������" << endl
		<< setw(9) << "������" << setw(10)
		<< setfill('.') << pop1 << endl
		<< setw(9) << "�����" << setw(10)
		 << pop2 << endl
		<< setw(9) << "���������" << setw(10)
		 << pop3 << endl;
	return 0;
}