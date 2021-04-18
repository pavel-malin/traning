#include<iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	int numb;
	setlocale(LC_ALL, "");
	cout << "¬ведите число: ";
	cin >> numb;
	cout << "numb<10 равно " << (numb < 10) << endl;
	cout << "numb>10 равно " << (numb > 10) << endl;
	cout << "numb==10 равно " << (numb == 10) << endl;
	return 0;
}