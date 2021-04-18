#include<iostream>

using std::cout;
using std::cin;
using std::endl;

struct Phone
{
	int code_city;
	int number_phone;
	int number_call;
};

int main()
{
	Phone phone1;
	Phone phone2 = { 212, 767, 8900 };
	setlocale(LC_ALL, "");
	cout << "Введите код города, номер станции и номер абонента: ";
	cin >> phone1.code_city >> phone1.number_phone >> phone1.number_call;
	cout << endl << "Мой номер (" << phone2.code_city << ") " 
		<< phone2.number_phone << "-" << phone2.number_call;
	cout << endl << "Ваш номер (" << phone1.code_city
		<< ") " << phone1.number_phone << "-" << phone1.number_call;
	return 0;
}