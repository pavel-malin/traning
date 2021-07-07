// передача структурных переменных в функцию
#include<iostream>

using std::cout;
using std::cin;
using std::endl;
/////////////////////////////////////////////
struct Distance
{
	int feet;
	float inches;
};
/////////////////////////////////////////////
void engldisp(Distance);

int  main()
{
	setlocale(LC_ALL, "");
	Distance d1, d2;
	cout << "¬ведите число футов: ";
	cin >> d1.feet;
	cout << "¬ведите число дюймов: ";
	cin >> d1.inches;
	cout << "\n¬ведите число футов: ";
	cin >> d2.feet;
	cout << "¬ведите число дюймов: ";
	cin >> d2.inches;
	cout << "\nd1 = ";
	engldisp(d1);
	cout << "\nd2 = ";
	engldisp(d2);
	cout << endl;
	return 0;
}

void engldisp(Distance dd)
{
	cout << dd.feet << "\'-" << dd.inches << "\"";
}