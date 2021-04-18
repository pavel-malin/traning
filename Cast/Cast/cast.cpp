#include<iostream>

using std::cout;
using std::endl;

int main()
{
	setlocale(LC_ALL, "");
	int intVar = 1500000000;
	intVar = (intVar * 10) / 10;
	cout << "Значение intVar равно " << intVar << endl;
	intVar = 1500000000;
	intVar = (static_cast<double>(intVar) * 10) / 10;
	cout << "Значение intVar равно " << intVar << endl;
	return  0;
}