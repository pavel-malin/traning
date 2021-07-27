#include<iostream>
#include<string>

using std::cout;
using std::cin;
using std::endl;

using std::string;


class Employee 
{
private:
	string name;
	long number;
public:
	void getdata()
	{
		cout << "Enter name: ";
		//getline(cin, name);
		cin >> name;
		cout << "Enter number: ";
		cin >> number;
	}
	void putdata()
	{
		cout << "\nName: " << name;
		cout << "\nNumber: " << number;
	}
};

int main()
{
	Employee emp[100];
	char ch;
	int n = 0;
	do
	{
		cout << "\nEnter the name and number: " << n + 1 << endl;
		emp[n++].getdata();
		cout << "\nStop and Play?(n/y): ";
		cin >> ch;
	} while (ch != 'n');
	for (int i = 0; i < n; i++)
	{
		cout << "\nNumber name: " << i + 1;
		emp[i].putdata();
	}
	cout << endl;
	return 0;
}