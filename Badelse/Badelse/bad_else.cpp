#include<iostream>

using std::cout;
using std::cin;

int main()
{
	int a, b, c;
	setlocale(LC_ALL, "");
	cout << "������� ����� a, b � c: \n";
	cin >> a >> b >> c;
	if (a == b)
	{
		if (b == c)
			cout << "a, b � � �����\n";
	}
	else
		cout << "a � b �� �����\n";
	return 0;
}