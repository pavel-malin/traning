#include<iostream>

using std::cout;
using std::cin;
using std::endl;


int main()
{
	setlocale(LC_ALL, "");
	long dividend, divisor;
	char ch;
	do
	{
		cout << "¬ведите делемое: ";
		cin >> dividend;
		cout << "¬ведите делитель: ";
		cin >> divisor;
		cout << "„астное делитель " << dividend / divisor;
		cout << ", остаток равен " << dividend % divisor;
		cout << "\n≈ще раз?(y/n): ";
		cin >> ch;
	} 	while (ch != 'n');
	return 0;
}