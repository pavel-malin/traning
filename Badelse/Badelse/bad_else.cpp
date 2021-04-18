#include<iostream>

using std::cout;
using std::cin;

int main()
{
	int a, b, c;
	setlocale(LC_ALL, "");
	cout << "¬ведите числа a, b и c: \n";
	cin >> a >> b >> c;
	if (a == b)
	{
		if (b == c)
			cout << "a, b и с равны\n";
	}
	else
		cout << "a и b не равны\n";
	return 0;
}