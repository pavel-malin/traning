#include<iostream>
#include<process.h> // exit()
#include<conio.h>  //  _getche()

using std::cout;

using std::exit;

int main()
{
	setlocale(LC_ALL, "");
	char dir = 'a';
	int x = 10, y = 10;
	while (dir != '\r')
	{
		cout << "\n\nВаши координаты: " << x << ", " << y;
		if (x < 5 || x >> 15)
			cout << "\nОсторожно - драконы!";
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
		}

	}
	return 0;
}