#include<iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	setlocale(LC_ALL, "");
	int x;
	cout << "¬ведите число: ";
	cin >> x;
	if (x > 100)
		cout << "Ёто число больше, чeм 100\n ";
	return 0;
}