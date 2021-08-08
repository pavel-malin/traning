#include<iostream>

using std::cout;
using std::cin;
using std::endl;


enum etype { laborer, secretary, manager, accountant, executive, researcher };

struct Positions
{
	int number;
	etype pos;
};

int main()
{
	char ch;
	Positions post;
	etype e;
	cout << "choose a position(laborer, secretary, manager, accountant, executive, researcher): ";
	cin >> ch;
	switch (ch)
	{
	case 'a':
		e = accountant;
		break;
	case 'l':
		e = laborer;
		break;
	case 's':
		e = secretary;
		break;
	case 'm':
		e = manager;
		break;
	case 'e':
		e = executive;
		break;
	case 'r':
		e = researcher;
	default:
		cout << "There is no such position!!!!";
		break;
	}

	switch (e)
	{
	case accountant:
		cout << "accountant";
		break;
	case laborer:
		cout << "laborer";
		break;
	case secretary:
		cout << "secretary";
		break;
	case executive:
		cout << "executive";
		break;
	case researcher:
		cout << "researcher";
		break;
	case manager:
		cout << "manager";
		break;
	default:
		cout << "choose a position!!!";
		break;
	}
	return 0;
}