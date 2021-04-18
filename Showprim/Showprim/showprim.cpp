#include<iostream>
#include<conio.h> // _getche()

using std::cout;

int main()
{
	const unsigned char WHITE = 219;
	const unsigned char GRAY = 176;
	unsigned char ch;
	for (int count = 0; count < 80 * 25 - 1; count++)
	{
		ch = WHITE;
		for (int j = 2; j < count; j++)
		if (count%j == 0)
		{
			ch = GRAY;
			break;
		}
		cout << ch;
	}
	_getch();
	return 0;
}