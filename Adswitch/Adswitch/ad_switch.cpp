#include<iostream>
#include<conio.h> // _getche()

using std::cout;

int main()
{
	setlocale(LC_ALL, "");
	char dir = 'a';
	int x = 10, y = 10;
	while (dir != '\r')
	{
		cout << "\nВаши координаты: " << x << ", " << y;
		cout << "\nВыберите направление (n,s,e,w): ";
		dir = _getche();
		switch (dir)
		{
		case 'n':
			y--;
			break;
		case 's':
			y++;
			break;
		case 'e':
			x++;
			break;
		case 'w':
			x--;
			break;
		case '\r':
			cout << "Выход...\n";
		default:
			cout << "Попробуйте еще\n";
		}
	}
	return 0;
}