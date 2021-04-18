#include<iostream>
#include<iomanip>

using std::cout;
using std::endl;

using std::setw;
using std::setiosflags;
using std::ios;
using std::setfill;

int main()
{
	// setiosflags(ios::left)
	setlocale(LC_ALL, "");
	cout << setiosflags(ios::left) << setw(8) << "Фамилия" << setw(10)
		<< "Имя" << setw(13) << "Адрес" << setw(15) << "Город" << endl
		<< endl << setw(8) << "Петров" << setw(10) << "Василий"
		<< setw(13) << "Кленовая 16" << setw(15)
		<< "Санкт-Петербург" << endl
		<< setw(8) << "Иванов" << setw(10) << "Сергей"
		<< setw(13) << "Осиновая 13" << setw(15) << "Находка" << endl
		<< setw(8) << "Сидоров" << setw(10) << "Иван"
		<< setw(13) << "Березовая 21" << setw(15) << "Калиниград"
		<< endl;
	return 0;
}