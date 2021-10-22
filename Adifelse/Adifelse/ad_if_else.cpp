#include<iostream>
#include<conio.h>

using std::cout;
using std::endl;



int main()
{
	setlocale(LC_ALL, "");
	char dir = 'a';
	int x = 10, y = 10;
	cout << "������� Enter ��� ������...\n";
	while (dir != '\r')
	{
		cout << "\n���� ����������: " << x << ", " << y;
		cout << "\n�������� ����������� (n, s, e, w): ";
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