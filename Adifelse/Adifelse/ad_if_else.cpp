#include<iostream>

using std::cout;
using std::endl;

#include<conio.h>

int main()
{
	setlocale(LC_ALL, "");
	char dir = 'a';
	int x = 10, y = 10;
	cout << "Нажмите Enter для выхода...\n";
	while (dir != '\r')
	{
		cout << "\nВаши координаты: " << x << ", " << y;
		cout << "\nВыберите направление (n, s, e, w): ";
		dir = _getche();
		if (dir == 'n')
			y--;
		else
			if (dir == 's')
				y++;
			else
				if (dir == 'e')
					x++;
				else
					if (dir == 'w')
						x--;
	}
	return 0;
}