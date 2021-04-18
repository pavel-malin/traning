#include<iostream>

using std::cout;
using std::cin;

int main()
{
	int ftemp;
	setlocale(LC_ALL, "");
	cout << "Введите температуру в Фаренгейту: ";
	cin >> ftemp;
	int ctemp = (ftemp - 32) * 5 / 9;
	cout << "Температура по Цельсию равна " << ctemp << '\n';
	return 0;
}