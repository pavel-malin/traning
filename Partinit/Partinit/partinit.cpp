// ������������� ����������� ����������
#include<iostream>

using std::cout;
using std::endl;

/////////////////////////////////////
struct part  // ���������� ���������
{
	int modelnumber; // ����� ������ �������
	int partnumber;  // ����� ������
	float cost;      // ���������� ������
};
/////////////////////////////////////

int main()
{				 // ������������� ����������
	setlocale(LC_ALL, "");
	part part1 = { 6244, 373, 217.55F };
	part part2;  // ���������� ����������
				 // ����� ����� ������ ����������
	cout << "������ " << part1.modelnumber;
	cout << ", ������ " << part1.partnumber;
	cout << ", ��������� $" << part1.cost << endl;
	part2 = part1; // ������������ ����������� ����������
	// ����� ����� ������ ���������
	cout << "������ " << part2.modelnumber;
	cout << ", ������ " << part2.partnumber;
	cout << ", ��������� $" << part2.cost << endl;
	return 0;
}