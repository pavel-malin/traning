// инициализация структурных переменных
#include<iostream>

using std::cout;
using std::endl;

/////////////////////////////////////
struct part  // объявление структуры
{
	int modelnumber; // номер модели изделия
	int partnumber;  // номер детали
	float cost;      // стоитмость детали
};
/////////////////////////////////////

int main()
{				 // инициализация переменной
	setlocale(LC_ALL, "");
	part part1 = { 6244, 373, 217.55F };
	part part2;  // объявдение переменной
				 // вывод полей первой переменной
	cout << "Модель " << part1.modelnumber;
	cout << ", деталь " << part1.partnumber;
	cout << ", стоимость $" << part1.cost << endl;
	part2 = part1; // присваивание структурных переменных
	// вывод полей второй переменой
	cout << "Модель " << part2.modelnumber;
	cout << ", деталь " << part2.partnumber;
	cout << ", стоимость $" << part2.cost << endl;
	return 0;
}