#include<iostream>
// структура для хранения информации о деталях изделий
using std::cout;
using std::endl;

/////////////////////////////////////////////////////////
struct part  // объявление структуры 
{
	int modelnumber; // номер модели изделия
	int partnumber;	 // номер детали
	float cost;      // стоимость деиали
};
/////////////////////////////////////////////////////////
int main()
{
	setlocale(LC_ALL, "");
	part part1;
	part1.modelnumber = 6244; // определение структурной переменной
	part1.partnumber = 373;   // инициализация полей
	part1.cost = 217.55F;     // переменной part1
	// вывод значений полей на экране 
	cout << "Модель " << part1.modelnumber;
	cout << ", деталь " << part1.partnumber;
	cout << ". стоимость $" << part1.cost << endl;
	return 0;
}