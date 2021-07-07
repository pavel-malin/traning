#include<iostream>

using std::cout;
using std::cin;
using std::endl;

struct persone
{
	int number;
	float money;
};

int main()
{
	persone office, office1, office2;
	char name1, name2, name3;
	name3 = 'Tom';
	office2 = { 3, 3500.14f };
	cout << "Person1: \n";
	cout << "Name: ";
	cin >> name1;
	cout << "Number: ";
	cin >> office.number;
	cout << "Money: ";
	cin >> office.money;
	cout << endl << "Person2: \n";
	cout << "Name: ";
	cin >> name2;
	cout << "Number: ";
	cin >> office1.number;
	cout << "Money: ";
	cin >> office1.money;
	cout << endl;
	cout << "Person1: " << name1 << " " << office.number << " : " << office.money;
	cout << endl << "Person2: " << name2 << " " << office1.number << " : " << office1.money;
	cout << endl << "Person3: " << name3 << " " << office.number << " : " << office2.money;

	return 0;
}