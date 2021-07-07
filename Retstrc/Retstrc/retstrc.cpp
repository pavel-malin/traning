#include<iostream>

using std::cout;
using std::cin;
using std::endl;

struct Distance
{
	int feet;
	float inches;
};

Distance addengl(Distance, Distance);

void engldisp(Distance);

int main()
{
	setlocale(LC_ALL, "");
	Distance d1, d2, d3;
	cout << "\n¬ведите число фунтов: ";
	cin >> d1.feet;
	cout << "¬ведите число дюймов: ";
	cin >> d1.inches;
	cout << "\n¬ведите число фунтов: ";
	cin >> d2.feet;
	cout << "¬ведите число дюймов: ";
	cin >> d2.inches;
	d3 = addengl(d1, d2);
	cout << endl;
	engldisp(d1);
	cout << " + ";
	engldisp(d2);
	cout << " = ";
	engldisp(d3);
	cout << endl;
	return 0;
}

Distance addengl(Distance dd1, Distance dd2)
{
	Distance dd3;
	dd3.inches = dd1.inches + dd2.inches;
	dd3.feet = 0;
	if (dd3.inches >= 12.0)
	{
		dd3.inches -= 12.0;
		dd3.feet++;
	}
	dd3.feet += dd1.feet + dd2.feet;
	return dd3;
}

void engldisp(Distance dd)
{
	cout << dd.feet << "\'-" << dd.inches << "\"";
}