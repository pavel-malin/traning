#include<iostream>
#include<iomanip>

using std::cout;
using std::endl;

using std::setw;
using std::setiosflags;
using std::ios;
using std::setfill;

int main()
{
	// setiosflags(ios::left)
	setlocale(LC_ALL, "");
	cout << setiosflags(ios::left) << setw(8) << "�������" << setw(10)
		<< "���" << setw(13) << "�����" << setw(15) << "�����" << endl
		<< endl << setw(8) << "������" << setw(10) << "�������"
		<< setw(13) << "�������� 16" << setw(15)
		<< "�����-���������" << endl
		<< setw(8) << "������" << setw(10) << "������"
		<< setw(13) << "�������� 13" << setw(15) << "�������" << endl
		<< setw(8) << "�������" << setw(10) << "����"
		<< setw(13) << "��������� 21" << setw(15) << "����������"
		<< endl;
	return 0;
}