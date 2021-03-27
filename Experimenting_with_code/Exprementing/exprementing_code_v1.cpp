// Exprementing code version 1

#include<iostream>
#include<string>

using namespace std;

int main()
{
	string p;
	int num;
	string s = " ";
	

	while (true)
	{
		cout << "Hello)))" << endl;
		cout << "You name?? " << endl;
		cin >> p;

		if (p == s)
		{
			cout << "????????" << endl;
			continue;
		}
		if (p != s)
		{
			cout << "last: " << p << endl;
			cout << p << " Welcom" << endl;
			break;
		}
		else
		{
			cout << "Woy " << endl;
			continue;
		}
	}
	return 0;
}