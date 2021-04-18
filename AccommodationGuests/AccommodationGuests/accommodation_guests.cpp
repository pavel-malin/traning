#include<iostream>

using std::cout;
using std::cin;
using std::endl;


int main()
{
	int a, b, p, c, f;
	cout << "places: ";
	cin >> a;
	cout << endl << "guests: ";
	cin >> b;
	for (int i = a; i < b; ++i)
	{
		c = b - 1;
		f = a - 1;
		for (int j = f; a > j; ++j)
		{
			p = b * c * a * f;
			cout << endl << "Result: " << p;
			--b;
			--a;
		}	
	}
	return 0;
}