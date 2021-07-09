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
		post.number = 4;
		break;
	case 'l':
		post.number = 1;
		break;
	case 's':
		post.number = 2;
		break;
	case 'm':
		post.number = 3;
		break;
	case 'e':
		post.number = 5;
		break;
	case 'r':
		post.number = 6;
	default:
		cout << "There is no such position!!!!";
		break;
	}

	switch (post.number)
	{
	case 4:
		e = accountant;
		if (e == 3)
		{
			cout << "accountant";
			break;
		}
	case 1:
		e = laborer;
		if (e == 0)
		{
			cout << "laborer";
			break;
		}
	case 2:
		e = secretary;
		if (e == 1)
		{
			cout << "secretary";
			break;
		}
	case 5:
		e = executive;
		if (e == 4)
		{
			cout << "executive";
			break;
		}
	case 6:
		e = researcher;
		if (e == 5)
		{
			cout << "researcher";
			break;
		}
	case 3:
		e = manager;
		if (e == 2)
		{
			cout << "manager";
			break;
		}
	default:
		cout << "choose a position!!!";
		break;
	}
	return 0;
}