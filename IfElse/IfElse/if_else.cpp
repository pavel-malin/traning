#include<iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	setlocale(LC_ALL, "");
	int x;
	cout << "\n¬ведите число: ";
	cin >> x;
	if (x > 100)
		cout << "Ёто число больше, чем 100\n";
	else
		cout << "Ёто число не больше, чем 100\n";
	return 0;
}
