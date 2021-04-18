#include<iostream>

using std::cout;
using std::cin;

int main()
{
	setlocale(LC_ALL, "");
	int x;
	cout << "¬ведите число: ";
	cin >> x;
	if (x > 100)
	{
		cout << "„исло " << x;
		cout << " больше, чем 100\n";
	}
	return 0;
}