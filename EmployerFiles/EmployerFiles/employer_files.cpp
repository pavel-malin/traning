#include<iostream>
#include<conio.h>

using std::cout;
using std::cin;
using std::endl;

enum etype { laborer, secretary, manager, accountant, executive, resercher };

struct Date
{
	int d;
	int m;
	int y;
};

struct Perst
{
	int number;
	float money;
	Date data;
	etype e;
	char person;
};

int main()
{
	char ch, r;
	int n;
	Perst per, per1, per2, per3, per4, per5;
	cout << "How many employees do you want to fill out? (Lemite 6): ";
	cin >> n;
	switch (n)
	{
	case 1:
		cout << "\nNumber: ";
		cin >> per.number;
		cout << "\nData working(12/31/2021): ";
		cin >> per.data.d >> per.data.m >> per.data.y;
		cout << "\nMoney: ";
		cin >> per.money;
		cout << "\nPerson (Example: l=laborer, s=secretary, m=manager, a=accountant, e=executive, r=resercher): ";
		cin >> per.person;
		switch (per.person)
		{
		case 'l':
			per.e = laborer;
			break;
		case 's':
			per.e = secretary;
			break;
		case 'm':
			per.e = manager;
			break;
		case 'a':
			per.e = accountant;
			break;
		case 'e':
			per.e = executive;
			break;
		case 'r':
			per.e = resercher;
			break;
		default:
			cout << "There is no such position !!!!!! " << endl;
			break;
		}
		break;
	case 2:
		cout << "\nNumber: ";
		cin >> per.number;
		cout << "\nData working(12/31/2021): ";
		cin >> per.data.d >> per.data.m >> per.data.y;
		cout << "\nMoney: ";
		cin >> per.money;
		cout << "\nPerson (Example: l=laborer, s=secretary, m=manager, a=accountant, e=executive, r=resercher): ";
		cin >> per.person;
		switch (per.person)
		{
		case 'l':
			per.e = laborer;
			break;
		case 's':
			per.e = secretary;
			break;
		case 'm':
			per.e = manager;
			break;
		case 'a':
			per.e = accountant;
			break;
		case 'e':
			per.e = executive;
			break;
		case 'r':
			per.e = resercher;
			break;
		default:
			cout << "There is no such position !!!!!! " << endl;
			break;
		}

		cout << "\nNumber: ";
		cin >> per1.number;
		cout << "\nData working(12/31/2021): ";
		cin >> per1.data.d >> per1.data.m >> per1.data.y;
		cout << "\nMoney: ";
		cin >> per1.money;
		cout << "\nPerson (Example: l=laborer, s=secretary, m=manager, a=accountant, e=executive, r=resercher): ";
		cin >> per1.person;
		switch (per1.person)
		{
		case 'l':
			per1.e = laborer;
			break;
		case 's':
			per1.e = secretary;
			break;
		case 'm':
			per1.e = manager;
			break;
		case 'a':
			per1.e = accountant;
			break;
		case 'e':
			per1.e = executive;
			break;
		case 'r':
			per1.e = resercher;
			break;
		default:
			cout << "There is no such position !!!!!! " << endl;
			break;
		}
		break;
	case 3:
		cout << "\nNumber: ";
		cin >> per.number;
		cout << "\nData working(12/31/2021): ";
		cin >> per.data.d >> per.data.m >> per.data.y;
		cout << "\nMoney: ";
		cin >> per.money;
		cout << "\nPerson (Example: l=laborer, s=secretary, m=manager, a=accountant, e=executive, r=resercher): ";
		cin >> per.person;
		switch (per.person)
		{
		case 'l':
			per.e = laborer;
			break;
		case 's':
			per.e = secretary;
			break;
		case 'm':
			per.e = manager;
			break;
		case 'a':
			per.e = accountant;
			break;
		case 'e':
			per.e = executive;
			break;
		case 'r':
			per.e = resercher;
			break;
		default:
			cout << "There is no such position !!!!!! " << endl;
			break;
		}

		cout << "\nNumber: ";
		cin >> per1.number;
		cout << "\nData working(12/31/2021): ";
		cin >> per1.data.d >> per1.data.m >> per1.data.y;
		cout << "\nMoney: ";
		cin >> per1.money;
		cout << "\nPerson (Example: l=laborer, s=secretary, m=manager, a=accountant, e=executive, r=resercher): ";
		cin >> per1.person;
		switch (per.person)
		{
		case 'l':
			per1.e = laborer;
			break;
		case 's':
			per1.e = secretary;
			break;
		case 'm':
			per1.e = manager;
			break;
		case 'a':
			per1.e = accountant;
			break;
		case 'e':
			per1.e = executive;
			break;
		case 'r':
			per1.e = resercher;
			break;
		default:
			cout << "There is no such position !!!!!! " << endl;
			break;
		}

		cout << "Number: ";
		cin >> per2.number;
		cout << "\nData working(12/31/2021): ";
		cin >> per2.data.d >> per2.data.m >> per2.data.y;
		cout << "\nMoney: ";
		cin >> per2.money;
		cout << "\nPerson (Example: l=laborer, s=secretary, m=manager, a=accountant, e=executive, r=resercher): ";
		cin >> per2.person;
		switch (per2.person)
		{
		case 'l':
			per2.e = laborer;
			break;
		case 's':
			per2.e = secretary;
			break;
		case 'm':
			per2.e = manager;
			break;
		case 'a':
			per2.e = accountant;
			break;
		case 'e':
			per2.e = executive;
			break;
		case 'r':
			per2.e = resercher;
			break;
		default:
			cout << "There is no such position !!!!!! " << endl;
			break;
		}
		break;
	case 4:
		cout << "Number: ";
		cin >> per.number;
		cout << "\nData working(12/31/2021): ";
		cin >> per.data.d >> per.data.m >> per.data.y;
		cout << "\nMoney: ";
		cin >> per.money;
		cout << "\nPerson (Example: l=laborer, s=secretary, m=manager, a=accountant, e=executive, r=resercher): ";
		cin >> per.person;
		switch (per.person)
		{
		case 'l':
			per.e = laborer;
			break;
		case 's':
			per.e = secretary;
			break;
		case 'm':
			per.e = manager;
			break;
		case 'a':
			per.e = accountant;
			break;
		case 'e':
			per.e = executive;
			break;
		case 'r':
			per.e = resercher;
			break;
		default:
			cout << "There is no such position !!!!!! " << endl;
			break;
		}

		cout << "Number: ";
		cin >> per1.number;
		cout << "\nData working(12/31/2021): ";
		cin >> per1.data.d >> per1.data.m >> per1.data.y;
		cout << "\nMoney: ";
		cin >> per1.money;
		cout << "\nPerson (Example: l=laborer, s=secretary, m=manager, a=accountant, e=executive, r=resercher): ";
		cin >> per1.person;
		switch (per1.person)
		{
		case 'l':
			per1.e = laborer;
			break;
		case 's':
			per1.e = secretary;
			break;
		case 'm':
			per1.e = manager;
			break;
		case 'a':
			per1.e = accountant;
			break;
		case 'e':
			per1.e = executive;
			break;
		case 'r':
			per1.e = resercher;
			break;
		default:
			cout << "There is no such position !!!!!! " << endl;
			break;
		}

		cout << "Number: ";
		cin >> per2.number;
		cout << "\nData working(12/31/2021): ";
		cin >> per2.data.d >> per2.data.m >> per2.data.y;
		cout << "\nMoney: ";
		cin >> per2.money;
		cout << "\nPerson (Example: l=laborer, s=secretary, m=manager, a=accountant, e=executive, r=resercher): ";
		cin >> per2.person;
		switch (per2.person)
		{
		case 'l':
			per2.e = laborer;
			break;
		case 's':
			per2.e = secretary;
			break;
		case 'm':
			per2.e = manager;
			break;
		case 'a':
			per2.e = accountant;
			break;
		case 'e':
			per2.e = executive;
			break;
		case 'r':
			per2.e = resercher;
			break;
		default:
			cout << "There is no such position !!!!!! " << endl;
			break;
		}

		cout << "Number: ";
		cin >> per3.number;
		cout << "\nData working(12/31/2021): ";
		cin >> per3.data.d >> per3.data.m >> per3.data.y;
		cout << "\nMoney: ";
		cin >> per3.money;
		cout << "\nPerson (Example: l=laborer, s=secretary, m=manager, a=accountant, e=executive, r=resercher): ";
		cin >> per3.person;
		switch (per3.person)
		{
		case 'l':
			per3.e = laborer;
			break;
		case 's':
			per3.e = secretary;
			break;
		case 'm':
			per3.e = manager;
			break;
		case 'a':
			per3.e = accountant;
			break;
		case 'e':
			per3.e = executive;
			break;
		case 'r':
			per3.e = resercher;
			break;
		default:
			cout << "There is no such position !!!!!! " << endl;
			break;
		}
		break;
	case 5:
		cout << "Number: ";
		cin >> per.number;
		cout << "\nData working(12/31/2021): ";
		cin >> per.data.d >> per.data.m >> per.data.y;
		cout << "\nMoney: ";
		cin >> per.money;
		cout << "\nPerson (Example: l=laborer, s=secretary, m=manager, a=accountant, e=executive, r=resercher): ";
		cin >> per.person;
		switch (per.person)
		{
		case 'l':
			per.e = laborer;
			break;
		case 's':
			per.e = secretary;
			break;
		case 'm':
			per.e = manager;
			break;
		case 'a':
			per.e = accountant;
			break;
		case 'e':
			per.e = executive;
			break;
		case 'r':
			per.e = resercher;
			break;
		default:
			cout << "There is no such position !!!!!! " << endl;
			break;
		}

		cout << "Number: ";
		cin >> per1.number;
		cout << "\nData working(12/31/2021): ";
		cin >> per1.data.d >> per1.data.m >> per1.data.y;
		cout << "\nMoney: ";
		cin >> per1.money;
		cout << "\nPerson (Example: l=laborer, s=secretary, m=manager, a=accountant, e=executive, r=resercher): ";
		cin >> per1.person;
		switch (per1.person)
		{
		case 'l':
			per1.e = laborer;
			break;
		case 's':
			per1.e = secretary;
			break;
		case 'm':
			per1.e = manager;
			break;
		case 'a':
			per1.e = accountant;
			break;
		case 'e':
			per1.e = executive;
			break;
		case 'r':
			per1.e = resercher;
			break;
		default:
			cout << "There is no such position !!!!!! " << endl;
			break;
		}

		cout << "Number: ";
		cin >> per2.number;
		cout << "\nData working(12/31/2021): ";
		cin >> per2.data.d >> per2.data.m >> per2.data.y;
		cout << "\nMoney: ";
		cin >> per2.money;
		cout << "\nPerson (Example: l=laborer, s=secretary, m=manager, a=accountant, e=executive, r=resercher): ";
		cin >> per2.person;
		switch (per2.person)
		{
		case 'l':
			per2.e = laborer;
			break;
		case 's':
			per2.e = secretary;
			break;
		case 'm':
			per2.e = manager;
			break;
		case 'a':
			per2.e = accountant;
			break;
		case 'e':
			per2.e = executive;
			break;
		case 'r':
			per2.e = resercher;
			break;
		default:
			cout << "There is no such position !!!!!! " << endl;
			break;
		}

		cout << "Number: ";
		cin >> per3.number;
		cout << "\nData working(12/31/2021): ";
		cin >> per3.data.d >> per3.data.m >> per3.data.y;
		cout << "\nMoney: ";
		cin >> per3.money;
		cout << "\nPerson (Example: l=laborer, s=secretary, m=manager, a=accountant, e=executive, r=resercher): ";
		cin >> per3.person;
		switch (per3.person)
		{
		case 'l':
			per3.e = laborer;
			break;
		case 's':
			per3.e = secretary;
			break;
		case 'm':
			per3.e = manager;
			break;
		case 'a':
			per3.e = accountant;
			break;
		case 'e':
			per3.e = executive;
			break;
		case 'r':
			per3.e = resercher;
			break;
		default:
			cout << "There is no such position !!!!!! " << endl;
			break;
		}

		cout << "Number: ";
		cin >> per4.number;
		cout << "\nData working(12/31/2021): ";
		cin >> per4.data.d >> per4.data.m >> per4.data.y;
		cout << "\nMoney: ";
		cin >> per4.money;
		cout << "\nPerson (Example: l=laborer, s=secretary, m=manager, a=accountant, e=executive, r=resercher): ";
		cin >> per4.person;
		switch (per4.person)
		{
		case 'l':
			per4.e = laborer;
			break;
		case 's':
			per4.e = secretary;
			break;
		case 'm':
			per4.e = manager;
			break;
		case 'a':
			per4.e = accountant;
			break;
		case 'e':
			per4.e = executive;
			break;
		case 'r':
			per4.e = resercher;
			break;
		default:
			cout << "There is no such position !!!!!! " << endl;
			break;
		}
		break;
	case 6:
		cout << "Number: ";
		cin >> per.number;
		cout << "\nData working(12/31/2021): ";
		cin >> per.data.d >> per.data.m >> per.data.y;
		cout << "\nMoney: ";
		cin >> per.money;
		cout << "\nPerson (Example: l=laborer, s=secretary, m=manager, a=accountant, e=executive, r=resercher): ";
		cin >> per.person;
		switch (per.person)
		{
		case 'l':
			per.e = laborer;
			break;
		case 's':
			per.e = secretary;
			break;
		case 'm':
			per.e = manager;
			break;
		case 'a':
			per.e = accountant;
			break;
		case 'e':
			per.e = executive;
			break;
		case 'r':
			per.e = resercher;
			break;
		default:
			cout << "There is no such position !!!!!! " << endl;
			break;
		}

		cout << "Number: ";
		cin >> per1.number;
		cout << "\nData working(12/31/2021): ";
		cin >> per1.data.d >> per1.data.m >> per1.data.y;
		cout << "\nMoney: ";
		cin >> per1.money;
		cout << "\nPerson (Example: l=laborer, s=secretary, m=manager, a=accountant, e=executive, r=resercher): ";
		cin >> per1.person;
		switch (per1.person)
		{
		case 'l':
			per1.e = laborer;
			break;
		case 's':
			per1.e = secretary;
			break;
		case 'm':
			per1.e = manager;
			break;
		case 'a':
			per1.e = accountant;
			break;
		case 'e':
			per1.e = executive;
			break;
		case 'r':
			per1.e = resercher;
			break;
		default:
			cout << "There is no such position !!!!!! " << endl;
			break;
		}

		cout << "Number: ";
		cin >> per2.number;
		cout << "\nData working(12/31/2021): ";
		cin >> per2.data.d >> per2.data.m >> per2.data.y;
		cout << "\nMoney: ";
		cin >> per2.money;
		cout << "\nPerson (Example: l=laborer, s=secretary, m=manager, a=accountant, e=executive, r=resercher): ";
		cin >> per2.person;
		switch (per2.person)
		{
		case 'l':
			per2.e = laborer;
			break;
		case 's':
			per2.e = secretary;
			break;
		case 'm':
			per2.e = manager;
			break;
		case 'a':
			per2.e = accountant;
			break;
		case 'e':
			per2.e = executive;
			break;
		case 'r':
			per2.e = resercher;
			break;
		default:
			cout << "There is no such position !!!!!! " << endl;
			break;
		}

		cout << "Number: ";
		cin >> per3.number;
		cout << "\nData working(12/31/2021): ";
		cin >> per3.data.d >> per3.data.m >> per3.data.y;
		cout << "\nMoney: ";
		cin >> per3.money;
		cout << "\nPerson (Example: l=laborer, s=secretary, m=manager, a=accountant, e=executive, r=resercher): ";
		cin >> per3.person;
		switch (per3.person)
		{
		case 'l':
			per3.e = laborer;
			break;
		case 's':
			per3.e = secretary;
			break;
		case 'm':
			per3.e = manager;
			break;
		case 'a':
			per3.e = accountant;
			break;
		case 'e':
			per3.e = executive;
			break;
		case 'r':
			per3.e = resercher;
			break;
		default:
			cout << "There is no such position !!!!!! " << endl;
			break;
		}

		cout << "Number: ";
		cin >> per4.number;
		cout << "\nData working(12/31/2021): ";
		cin >> per4.data.d >> per4.data.m >> per4.data.y;
		cout << "\nMoney: ";
		cin >> per4.money;
		cout << "\nPerson (Example: l=laborer, s=secretary, m=manager, a=accountant, e=executive, r=resercher): ";
		cin >> per4.person;
		switch (per4.person)
		{
		case 'l':
			per4.e = laborer;
			break;
		case 's':
			per4.e = secretary;
			break;
		case 'm':
			per4.e = manager;
			break;
		case 'a':
			per4.e = accountant;
			break;
		case 'e':
			per4.e = executive;
			break;
		case 'r':
			per4.e = resercher;
			break;
		default:
			cout << "There is no such position !!!!!! " << endl;
			break;
		}

		cout << "Number: ";
		cin >> per5.number;
		cout << "\nData working(12/31/2021): ";
		cin >> per5.data.d >> per5.data.m >> per5.data.y;
		cout << "\nMoney: ";
		cin >> per5.money;
		cout << "\nPerson (Example: l=laborer, s=secretary, m=manager, a=accountant, e=executive, r=resercher): ";
		cin >> per5.person;
		switch (per5.person)
		{
		case 'l':
			per5.e = laborer;
			break;
		case 's':
			per5.e = secretary;
			break;
		case 'm':
			per5.e = manager;
			break;
		case 'a':
			per5.e = accountant;
			break;
		case 'e':
			per5.e = executive;
			break;
		case 'r':
			per5.e = resercher;
			break;
		default:
			cout << "There is no such position !!!!!! " << endl;
			break;
		}
		break;
	}


	if (n == 1)
	{
		cout << "Number: " << per.number << endl;
		cout << "Data: " << per.data.d << "/" << per.data.m << "/" << per.data.y << endl;
		cout << "Money: " << per.money  << endl;
		switch (per.e)
		{
		case 1:
			cout << "Person: laborer" << endl;
			break;
		case 2:
			cout << "Person: secretary" << endl;
			break;
		case 3:
			cout << "Person: manager" << endl;
			break;
		case 4:
			cout << "Person: accountant" << endl;
			break;
		case 5:
			cout << "Person: executive" << endl;
			break;
		case 6:
			cout << "Person: resercher" << endl;
			break;
		}
	}
	else if (n == 2)
	{
		cout << "Number: " << per.number << endl;
		cout << "Data: " << per.data.d << "/" << per.data.m << "/" << per.data.y << endl;
		cout << "Money: " << per.money << endl;
		switch (per.e)
		{
		case 1:
			cout << "Person: laborer" << endl;
			break;
		case 2:
			cout << "Person: secretary" << endl;
			break;
		case 3:
			cout << "Person: manager" << endl;
			break;
		case 4:
			cout << "Person: accountant" << endl;
			break;
		case 5:
			cout << "Person: executive" << endl;
			break;
		case 6:
			cout << "Person: resercher" << endl;
			break;
		}

		cout << "Number: " << per1.number << endl;
		cout << "Data: " << per1.data.d << "/" << per1.data.m << "/" << per1.data.y << endl;
		cout << "Money: " << per1.money << endl;
		switch (per1.e)
		{
		case 1:
			cout << "Person: laborer" << endl;
			break;
		case 2:
			cout << "Person: secretary" << endl;
			break;
		case 3:
			cout << "Person: manager" << endl;
			break;
		case 4:
			cout << "Person: accountant" << endl;
			break;
		case 5:
			cout << "Person: executive" << endl;
			break;
		case 6:
			cout << "Person: resercher" << endl;
			break;
		}
	}
	else if (n == 3)
	{
		cout << "Number: " << per.number << endl;
		cout << "Data: " << per.data.d << "/" << per.data.m << "/" << per.data.y << endl;
		cout << "Money: " << per.money << endl;
		switch (per.e)
		{
		case 1:
			cout << "Person: laborer" << endl;
			break;
		case 2:
			cout << "Person: secretary" << endl;
			break;
		case 3:
			cout << "Person: manager" << endl;
			break;
		case 4:
			cout << "Person: accountant" << endl;
			break;
		case 5:
			cout << "Person: executive" << endl;
			break;
		case 6:
			cout << "Person: resercher" << endl;
			break;
		}

		cout << "Number: " << per1.number << endl;
		cout << "Data: " << per1.data.d << "/" << per1.data.m << "/" << per1.data.y << endl;
		cout << "Money: " << per1.money << endl;
		switch (per1.e)
		{
		case 1:
			cout << "Person: laborer" << endl;
			break;
		case 2:
			cout << "Person: secretary" << endl;
			break;
		case 3:
			cout << "Person: manager" << endl;
			break;
		case 4:
			cout << "Person: accountant" << endl;
			break;
		case 5:
			cout << "Person: executive" << endl;
			break;
		case 6:
			cout << "Person: resercher" << endl;
			break;
		}

		cout << "Number: " << per2.number << endl;
		cout << "Data: " << per2.data.d << "/" << per2.data.m << "/" << per2.data.y << endl;
		cout << "Money: " << per2.money << endl;
		switch (per2.e)
		{
		case 1:
			cout << "Person: laborer" << endl;
			break;
		case 2:
			cout << "Person: secretary" << endl;
			break;
		case 3:
			cout << "Person: manager" << endl;
			break;
		case 4:
			cout << "Person: accountant" << endl;
			break;
		case 5:
			cout << "Person: executive" << endl;
			break;
		case 6:
			cout << "Person: resercher" << endl;
			break;
		}
	}
	else if (n == 4)
	{
		cout << "Number: " << per.number << endl;
		cout << "Data: " << per.data.d << "/" << per.data.m << "/" << per.data.y << endl;
		cout << "Money: " << per.money << endl;
		switch (per.e)
		{
		case 1:
			cout << "Person: laborer" << endl;
			break;
		case 2:
			cout << "Person: secretary" << endl;
			break;
		case 3:
			cout << "Person: manager" << endl;
			break;
		case 4:
			cout << "Person: accountant" << endl;
			break;
		case 5:
			cout << "Person: executive" << endl;
			break;
		case 6:
			cout << "Person: resercher" << endl;
			break;
		}

		cout << "Number: " << per1.number << endl;
		cout << "Data: " << per1.data.d << "/" << per1.data.m << "/" << per1.data.y << endl;
		cout << "Money: " << per1.money << endl;
		switch (per1.e)
		{
		case 1:
			cout << "Person: laborer" << endl;
			break;
		case 2:
			cout << "Person: secretary" << endl;
			break;
		case 3:
			cout << "Person: manager" << endl;
			break;
		case 4:
			cout << "Person: accountant" << endl;
			break;
		case 5:
			cout << "Person: executive" << endl;
			break;
		case 6:
			cout << "Person: resercher" << endl;
			break;
		}

		cout << "Number: " << per2.number << endl;
		cout << "Data: " << per2.data.d << "/" << per2.data.m << "/" << per2.data.y << endl;
		cout << "Money: " << per2.money << endl;
		switch (per2.e)
		{
		case 1:
			cout << "Person: laborer" << endl;
			break;
		case 2:
			cout << "Person: secretary" << endl;
			break;
		case 3:
			cout << "Person: manager" << endl;
			break;
		case 4:
			cout << "Person: accountant" << endl;
			break;
		case 5:
			cout << "Person: executive" << endl;
			break;
		case 6:
			cout << "Person: resercher" << endl;
			break;
		}

		cout << "Number: " << per3.number << endl;
		cout << "Data: " << per3.data.d << "/" << per3.data.m << "/" << per3.data.y << endl;
		cout << "Money: " << per3.money << endl;
		switch (per3.e)
		{
		case 1:
			cout << "Person: laborer" << endl;
			break;
		case 2:
			cout << "Person: secretary" << endl;
			break;
		case 3:
			cout << "Person: manager" << endl;
			break;
		case 4:
			cout << "Person: accountant" << endl;
			break;
		case 5:
			cout << "Person: executive" << endl;
			break;
		case 6:
			cout << "Person: resercher" << endl;
			break;
		}
	}
	else if (n == 5)
	{
		cout << "Number: " << per.number << endl;
		cout << "Data: " << per.data.d << "/" << per.data.m << "/" << per.data.y << endl;
		cout << "Money: " << per.money << endl;
		switch (per.e)
		{
		case 1:
			cout << "Person: laborer" << endl;
			break;
		case 2:
			cout << "Person: secretary" << endl;
			break;
		case 3:
			cout << "Person: manager" << endl;
			break;
		case 4:
			cout << "Person: accountant" << endl;
			break;
		case 5:
			cout << "Person: executive" << endl;
			break;
		case 6:
			cout << "Person: resercher" << endl;
			break;
		}

		cout << "Number: " << per1.number << endl;
		cout << "Data: " << per1.data.d << "/" << per1.data.m << "/" << per1.data.y << endl;
		cout << "Money: " << per1.money << endl;
		switch (per1.e)
		{
		case 1:
			cout << "Person: laborer" << endl;
			break;
		case 2:
			cout << "Person: secretary" << endl;
			break;
		case 3:
			cout << "Person: manager" << endl;
			break;
		case 4:
			cout << "Person: accountant" << endl;
			break;
		case 5:
			cout << "Person: executive" << endl;
			break;
		case 6:
			cout << "Person: resercher" << endl;
			break;
		}

		cout << "Number: " << per2.number << endl;
		cout << "Data: " << per2.data.d << "/" << per2.data.m << "/" << per2.data.y << endl;
		cout << "Money: " << per2.money << endl;
		switch (per2.e)
		{
		case 1:
			cout << "Person: laborer" << endl;
			break;
		case 2:
			cout << "Person: secretary" << endl;
			break;
		case 3:
			cout << "Person: manager" << endl;
			break;
		case 4:
			cout << "Person: accountant" << endl;
			break;
		case 5:
			cout << "Person: executive" << endl;
			break;
		case 6:
			cout << "Person: resercher" << endl;
			break;
		}

		cout << "Number: " << per3.number << endl;
		cout << "Data: " << per3.data.d << "/" << per3.data.m << "/" << per3.data.y << endl;
		cout << "Money: " << per3.money << endl;
		switch (per3.e)
		{
		case 1:
			cout << "Person: laborer" << endl;
			break;
		case 2:
			cout << "Person: secretary" << endl;
			break;
		case 3:
			cout << "Person: manager" << endl;
			break;
		case 4:
			cout << "Person: accountant" << endl;
			break;
		case 5:
			cout << "Person: executive" << endl;
			break;
		case 6:
			cout << "Person: resercher" << endl;
			break;
		}

		cout << "Number: " << per4.number << endl;
		cout << "Data: " << per4.data.d << "/" << per4.data.m << "/" << per4.data.y << endl;
		cout << "Money: " << per4.money << endl;
		switch (per4.e)
		{
		case 1:
			cout << "Person: laborer" << endl;
			break;
		case 2:
			cout << "Person: secretary" << endl;
			break;
		case 3:
			cout << "Person: manager" << endl;
			break;
		case 4:
			cout << "Person: accountant" << endl;
			break;
		case 5:
			cout << "Person: executive" << endl;
			break;
		case 6:
			cout << "Person: resercher" << endl;
			break;
		}
	}
	else if (n == 6)
	{
		cout << "Number: " << per.number << endl;
		cout << "Data: " << per.data.d << "/" << per.data.m << "/" << per.data.y << endl;
		cout << "Money: " << per.money << endl;
		switch (per.e)
		{
		case 1:
			cout << "Person: laborer" << endl;
			break;
		case 2:
			cout << "Person: secretary" << endl;
			break;
		case 3:
			cout << "Person: manager" << endl;
			break;
		case 4:
			cout << "Person: accountant" << endl;
			break;
		case 5:
			cout << "Person: executive" << endl;
			break;
		case 6:
			cout << "Person: resercher" << endl;
			break;
		}

		cout << "Number: " << per1.number << endl;
		cout << "Data: " << per1.data.d << "/" << per1.data.m << "/" << per1.data.y << endl;
		cout << "Money: " << per1.money << endl;
		switch (per1.e)
		{
		case 1:
			cout << "Person: laborer" << endl;
			break;
		case 2:
			cout << "Person: secretary" << endl;
			break;
		case 3:
			cout << "Person: manager" << endl;
			break;
		case 4:
			cout << "Person: accountant" << endl;
			break;
		case 5:
			cout << "Person: executive" << endl;
			break;
		case 6:
			cout << "Person: resercher" << endl;
			break;
		}

		cout << "Number: " << per2.number << endl;
		cout << "Data: " << per2.data.d << "/" << per2.data.m << "/" << per2.data.y << endl;
		cout << "Money: " << per2.money << endl;
		switch (per2.e)
		{
		case 1:
			cout << "Person: laborer" << endl;
			break;
		case 2:
			cout << "Person: secretary" << endl;
			break;
		case 3:
			cout << "Person: manager" << endl;
			break;
		case 4:
			cout << "Person: accountant" << endl;
			break;
		case 5:
			cout << "Person: executive" << endl;
			break;
		case 6:
			cout << "Person: resercher" << endl;
			break;
		}

		cout << "Number: " << per3.number << endl;
		cout << "Data: " << per3.data.d << "/" << per3.data.m << "/" << per3.data.y << endl;
		cout << "Money: " << per3.money << endl;
		switch (per3.e)
		{
		case 1:
			cout << "Person: laborer" << endl;
			break;
		case 2:
			cout << "Person: secretary" << endl;
			break;
		case 3:
			cout << "Person: manager" << endl;
			break;
		case 4:
			cout << "Person: accountant" << endl;
			break;
		case 5:
			cout << "Person: executive" << endl;
			break;
		case 6:
			cout << "Person: resercher" << endl;
			break;
		}

		cout << "Number: " << per4.number << endl;
		cout << "Data: " << per4.data.d << "/" << per4.data.m << "/" << per4.data.y << endl;
		cout << "Money: " << per4.money << endl;
		switch (per4.e)
		{
		case 1:
			cout << "Person: laborer" << endl;
			break;
		case 2:
			cout << "Person: secretary" << endl;
			break;
		case 3:
			cout << "Person: manager" << endl;
			break;
		case 4:
			cout << "Person: accountant" << endl;
			break;
		case 5:
			cout << "Person: executive" << endl;
			break;
		case 6:
			cout << "Person: resercher" << endl;
			break;
		}

		cout << "Number: " << per5.number << endl;
		cout << "Data: " << per5.data.d << "/" << per5.data.m << "/" << per5.data.y << endl;
		cout << "Money: " << per5.money << endl;
		switch (per5.e)
		{
		case 1:
			cout << "Person: laborer" << endl;
			break;
		case 2:
			cout << "Person: secretary" << endl;
			break;
		case 3:
			cout << "Person: manager" << endl;
			break;
		case 4:
			cout << "Person: accountant" << endl;
			break;
		case 5:
			cout << "Person: executive" << endl;
			break;
		case 6:
			cout << "Person: resercher" << endl;
			break;
		}
	}

	return 0;
}
