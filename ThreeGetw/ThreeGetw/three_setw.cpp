#include<iostream>
#include<iomanip>  // setw()

using std::cout;
using std::cin;
using std::endl;

using std::setw;

int main()
{
	unsigned long p;
	cout << "Say number: ";
	cin >> p;
	for (int i = 1; i <= 200; i++)
	{
		cout << setw(5) << p * i;
		if (i % 10 == 0)
		{
			cout << endl;
		}
	}
	return 0;
}