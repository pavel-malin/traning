#include<iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	float rad;
	const float PI = 3.14159F;
	setlocale(LC_ALL, "");
	cout << "������� ������ ����������: ";
	cin >> rad;
	float area = PI * rad * rad;
	cout << "������� ����� ����� " << area << endl;
	return 0;
}