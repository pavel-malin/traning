#include<iostream>

using std::cout;
using std::cin;
using std::endl;

float lbstokg(float);

int main()
{
	setlocale(LC_ALL, "");
	float lbs;
	cout << "\n������� ��� ������: ";
	cin >> lbs;
	cout << "��� � ����������� ����� " << lbstokg(lbs) << endl;
	return 0;
}


float lbstokg(float pounds)
{
	return 0.453592 * pounds;
}