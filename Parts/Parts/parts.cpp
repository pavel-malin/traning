#include<iostream>
// ��������� ��� �������� ���������� � ������� �������
using std::cout;
using std::endl;

/////////////////////////////////////////////////////////
struct part  // ���������� ��������� 
{
	int modelnumber; // ����� ������ �������
	int partnumber;	 // ����� ������
	float cost;      // ��������� ������
};
/////////////////////////////////////////////////////////
int main()
{
	setlocale(LC_ALL, "");
	part part1;
	part1.modelnumber = 6244; // ����������� ����������� ����������
	part1.partnumber = 373;   // ������������� �����
	part1.cost = 217.55F;     // ���������� part1
	// ����� �������� ����� �� ������ 
	cout << "������ " << part1.modelnumber;
	cout << ", ������ " << part1.partnumber;
	cout << ". ��������� $" << part1.cost << endl;
	return 0;
}