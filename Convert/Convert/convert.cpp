#include<iostream>

using std::cout;
using std::cin;
using std::endl;

float lbstokg(float);

int main()
{
	setlocale(LC_ALL, "");
	float lbs, kgs;
	cout << "\n������� ��� � ������: ";
	cin >> lbs;
	kgs = lbstokg(lbs);
	cout << "��� � ����������� ����� " << kgs << endl;
	return 0;
}

float lbstokg(float pounds)
{
	float killograms = 0.453592 * pounds;
	return killograms;
}