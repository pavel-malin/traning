#include<iostream>

using std::cout;
using std::cin;
using std::endl;


enum etype { laborer, secretary, manager, accountant, executive, researcher };



int main()
{
	char n;
	etype e;
	cout << "choose a position(laborer, secretary, manager, accountant, executive, researcher): ";
	
	cin >> n;
	switch (n)
	{
	case 'a':
		e = accountant;
		if (e == 3)
		{
			cout << "accountant";
			break;
		}
	case 'l':
		e = laborer;
		if (e == 0)
		{
			cout << "laborer";
			break;
		}
	case 's':
		e = secretary;
		if (e == 1)
		{
			cout << "secretary";
			break;
		}
	case 'e':
		e = executive;
		if (e == 4)
		{
			cout << e;
			break;
		}
	case 'r':
		e = researcher;
		if (e == 5)
		{
			cout << e;
			break;
		}
	case 'm':
		e = manager;
		if (e == 2)
		{
			cout << e;
			break;
		}
	default:
		cout << "choose a position!!!";
		break;
	}
	return 0;
}