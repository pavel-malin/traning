#include<iostream>

using std::cout;
using std::cin;
using std::endl;

const int LEN = 80;

class student
{
private:
	char school[LEN];
	char degree[LEN];
public:
	void getedu()
	{
		cout << "Enter the name of the institution: ";
		cin >> school;
		cout << "Enter the degree of higher education\n";
		cout << " (non-higher education, bachelor's, master's, sciences): ";
		cin >> degree;
	}
	void putedu() const
	{
		cout << "\nEducational institution: " << school;
		cout << "\nSteper: " << degree;
	}
};

class empoyee
{
private:
	char name[LEN];
	unsigned long number;
public:
	void getdata()
	{
		cout << "\nPlease enter your last name: ";
		cin >> name;
		cout << "\nEnter the number: ";
		cin >> number;
	}
	void putdata() const
	{
		cout << "\nSurname: " << name;
		cout << "\nNumber: " << number;
	}
};

class manager : public empoyee, private student
{
private:
	char title[LEN];
	double dues;
public:
	void getdata()
	{
		empoyee::getdata();
		cout << "Enter position: ";
		cin >> title;
		cout << "Enter the amount of contributions to the golf club: ";
		cin >> dues;
		student::putedu();
	}
	void putdata() const
	{
		empoyee::putdata();
		cout << "\nPosition: " << title;
		cout << "The amount of contributions to the golf club: " << dues;
		student::putedu();
	}
};

class scientis : private empoyee, private student
{
private:
	int pubs;
public:
	void getdata()
	{
		empoyee::getdata();
		cout << "Enter number of publications: ";
		cin >> pubs;
		student::getedu();
	}
	void putdata() const
	{
		empoyee::putdata();
		cout << "\nNumber of publications: " << pubs;
		student::putedu();
	}
};

class laborer : public empoyee
{};

int main()
{
	manager m1;
	scientis s1, s2;
	laborer l1;

	cout << endl;
	cout << "\nEntering information about the first manager";
	m1.getdata();

	cout << "\nEntering information about the first scientist";
	s1.getdata();

	cout << "\nEntering information about the second scientist";
	s2.getdata();

	cout << "\nEntering information about the first worker";
	l1.getdata();

	cout << "\nInformation about the first manager";
	m1.putdata();

	cout << "\nInformation about the first scientist";
	s1.putdata();

	cout << "\nInformation about the second scientist";
	s2.putdata();

	cout << "\nInformation about the first worker";
	l1.putdata();

	cout << endl;
	return 0;
}