// демострирует передачу аргументов в функци
#include<iostream>

using std::cout;
using std::endl;

void repchar(char, int);

int main()
{
	setlocale(LC_ALL, "");
	repchar('-', 43);
	cout << "Тип данных Диапазон" << endl;
	repchar('=', 23);
	cout << "char -128...127" << endl
		<< "short -32,768...32,767" << endl
		<< "int Системно-зависимый" << endl
		<< "double -2,147,483,648...2,147,483,647" << endl;
	repchar('-', 43);
	return 0;
}
//---------------------------------------------------------
void repchar(char ch, int n)
{
	for (int j = 0; j < n; j++)
		cout << ch;
	cout << endl;
}