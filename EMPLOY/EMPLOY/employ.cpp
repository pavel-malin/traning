#include<iostream>

using std::cout;
using std::cin;
using std::endl;

const int LEN = 80;

class Employee
{
private:
	char name[LEN];
	unsigned long number;
public:
	void getdata()
	{
		cout << "\nPlease enter your last name: ";
		cin >> name;
		cout << "Enter the number: ";
		cin >> number;
	}
	void putdata() const
	{
		cout << "\n Surname: " << name;
		cout << "\n Number: " << number;
	}
};

class Manager : public Employee
{
private:
	char title[LEN];
	double dues;
public:
	void getdata()
	{
		Employee::getdata();
		cout << "Enter position: ";
		cin >> title;
		cout << "Enter the amount of contributions to the golf club: ";
		cin >> dues;
	}
	void putdata() const
	{
		Employee::putdata();
		cout << "\nPosition: " << title;
		cout << "\nThe amount of contributions to the golf club" << dues;
	}
};

class Scientist : public Employee
{
private:
	int pubs;
public:
	void getdate()
	{
		Employee::getdata();
		cout << " Enter the number of publications: ";
		cin >> pubs;
	}
	void putdata() const
	{
		Employee::putdata();
		cout << "\nNumber of publications: " << pubs;
	}
};

class Laborer : public Employee
{};

int main()
{
	Manager m1, m2;
	Scientist s1;
	Laborer l1;

	cout << endl;
	cout << "\nEntering information about the first manager";
	m1.getdata();

	cout << "\nEntering information about the second manager";
	m2.getdata();

	cout << "\nEntering information about the first scientist";
	s1.getdata();

	cout << "\nEntering information about the first worker";
	l1.getdata();

	cout << "\nInformation about the first manager";
	m1.putdata();

	cout << "\nInformation about the second manager";
	m2.putdata();

	cout << "\nInformation about the first scientist";
	s1.putdata();

	cout << "\nInformation about the first worker";
	l1.putdata();

	cout << endl;

	return 0;
}