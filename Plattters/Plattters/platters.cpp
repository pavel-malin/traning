#include<iostream>

using std::cout;
using std::cin;

int main()
{
	setlocale(LC_ALL, "");
	int speed;
	cout << "\nВведите число 33,45 или 78: ";
	cin >> speed;
	switch (speed)
	{
	case 33:
		cout << "Долгоиграющий формат\n";
		break;
	case 45:
		cout << "Формат сингла\n";
		break;
	case 78:
		cout << "Устаревший формат\n";
		break;
	}
	return 0;
}