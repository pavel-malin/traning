// определение функции без предварительного использования
// прототипа
#include<iostream>

using std::cout;
using std::endl;

//----------------------------------------------
// определение функции starlne()
void starline()
{
	for (int j = 0; j < 45; j++)
		cout << '*';
	cout << endl;
}
//-----------------------------------------------

int main()
{
	setlocale(LC_ALL, "");
	starline();
	cout << "Тип данных Диапазон" << endl;
	starline();
	cout << "char -128...127" << endl
		<< "short  -32,768...32,767" << endl
		<< "int Системно-зависимый" << endl
		<< "long -2,147,483,648...2,147,283,647" << endl;
	starline();
	return 0;
}