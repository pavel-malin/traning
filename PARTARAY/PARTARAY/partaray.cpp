#include<iostream>

using std::cout;
using std::cin;
using std::endl;

const int SIZE = 4;

struct part
{
	int modelnumber, partnumber;
	float cost;
};

int main()
{
	int n;
	part apart[SIZE];
	for (n = 0; n < SIZE; n++)
	{
		cout << endl;
		cout << "Enter the number of models: ";
		cin >> apart[n].modelnumber;
		cout << "Enter the number of part: ";
		cin >> apart[n].partnumber;
		cout << "Enter the cost: ";
		cin >> apart[n].cost;
	}
	cout << endl;
	for (n = 0; n < SIZE; n++)
	{
		cout << "Models " << apart[n].modelnumber;
		cout << " Part " << apart[n].partnumber;
		cout << " Cost " << apart[n].cost << endl;
	}
	return 0;
}