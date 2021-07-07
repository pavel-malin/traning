#include<iostream>
// #include<conio.h>

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
};

int main()
{
	int n;
	Perst per, per1, per2;
	per.e = secretary;
	per.data.d = 12;
	per.data.m = 12;
	per.data.y = 12;
	per.number = 1;
	per.money = 1532.14;
	cout << "";
	cout << "Number: " << per.number << ";" << endl;
	cout << "Money: " << per.money << ";" << endl;
	for (int i = 0; i < 3; i++)
	{
		char ch;
		cout << "Number: ";
		cin >> per1.number;
		cout << "\nData working(12/31/2021): ";
		cin >> per1.data.d >> per1.data.m >> per1.data.y;
		cout << "\nMoney: ";
		cin >> per1.money;
		cout << "\nPerson: ";
		cin >> ch;
		switch (ch)
		{
		case 'a':
			per1.e = accountant;
			cout << "\nPersonal: " << endl;
			cout << "Number: " << per1.number;
			cout << "\nData: " << per1.data.d << "/" << per1.data.m << "/" << per1.data.y << endl;
			cout << "Person: accuntant";
			break;
		case 'e':
			per1.e = executive;
			cout << "\nPersonal: " << endl;
			cout << "Number: " << per1.number;
			cout << "\nData: " << per1.data.d << "/" << per1.data.m << "/" << per1.data.y << endl;
			cout << "Person: executive";
			break;
		case 'r':
			per1.e = resercher;
			cout << "\nPersonal: " << endl;
			cout << "Number: " << per1.number;
			cout << "\nData: " << per1.data.d << "/" << per1.data.m << "/" << per1.data.y << endl;
			cout << "Person: " << "resercher";
			break;
		case 'l':
			per1.e = laborer;
			cout << "\nPersonal: " << endl;
			cout << "Number: " << per1.number;
			cout << "\nData: " << per1.data.d << "/" << per1.data.m << "/" << per1.data.y << endl;
			cout << "Person: laborer";
			break;
		case 'm':
			per1.e = manager;
			cout << "\nPersonal: " << endl;
			cout << "Number: " << per1.number;
			cout << "\nData: " << per1.data.d << "/" << per1.data.m << "/" << per1.data.y << endl;
			cout << "Person: manager";
			break;
		case 's':
			per1.e = secretary;
			ch = static_cast<char>(per1.e);
			cout << "\nPersonal: " << endl;
			cout << "Number: " << per1.number;
			cout << "\nData: " << per1.data.d << "/" << per1.data.m << "/" << per1.data.y << endl;
			cout << "Person: secretary";
			break;
		}
	}
	return 0;
}

// switch 