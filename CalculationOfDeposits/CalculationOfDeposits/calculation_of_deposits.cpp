#include<iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	setlocale(LC_ALL, "");
	double long a, b;
	float c;

	cout << "Введите начальный вклад: ";
	cin >> a;
	cout << endl << "Ведите число лет: ";
	cin >> b;
	cout << endl << "Введите процентную ставку: ";
	cin >> c;
	c = c / 100;
	for (int i=1; i < (b + 1); ++i)
	{	
		a += a * c;
		cout << "Через " << i << " лет вы получите " << a 
			<< " доллара" << endl;
	
	}
	return 0;
}