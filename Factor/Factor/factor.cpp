#include<iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	unsigned int numb;
	unsigned long fact = 1;
	setlocale(LC_ALL, "");
	cout << "Введите целое число: ";
	cin >> numb;
	for (int j = numb; j > 0; j--)
		fact *= j;
	cout << "Факториал числа равен " << fact << endl;
	return 0;
}