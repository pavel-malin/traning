#include<iostream>

using std::cout;
using std::cin;
using std::endl;

class person
{
private:
	char name[40];
public:
	void setName()
	{
		cout << "Input name: ";
		cin >> name;
	}
	void printName()
	{
		cout << "\n Name: " << name;
	}
};

int main()
{
	person* persPtr[100];
	int n = 0;
	char choice;

	do
	{
		persPtr[n] = new person;
		persPtr[n]->setName();
		n++;
		cout << "We continue to enter(y/n)?";
		cin >> choice;
	} while (choice == 'y');
	for (int i = 0; i < n; i++)
	{
		cout << "\nRoom information " << i + 1;
		persPtr[i]->printName();
	}
	cout << endl;

	return 0;
}