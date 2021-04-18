#include<iostream>

using std::cout;
using std::cin;

int main()
{
	setlocale(LC_ALL, "");
	long dividen, divisor;
	char ch;
	do {
		cout << "Введите делимое: ";
		cin >> dividen;
		cout << "Введите делитель: ";
		cin >> divisor;
		if (divisor == 0)
		{
			cout << "Некорректный делитель!\n";
			continue;
		}
		cout << "Частное равно " << dividen / divisor;
		cout << ", остаток равен " << dividen % divisor;
		cout << "\nЕще раз?(y/n): ";
		cin >> ch;
	} while (ch != 'n');
	return 0;
}