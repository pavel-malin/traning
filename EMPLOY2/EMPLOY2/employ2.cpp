#include<iostream>

using std::cout;
using std::cin;
using std::endl;

const int LEN = 80;

class employee
{
private:
	char name[LEN];
	unsigned long number;
public:
	void getdata()
	{
		cout << "Please enter your last name";
		cin >> name;
		cout << "Enter the number";
		cin >> number;
	}
	void putdata() const
	{
		cout << "\n Surname: " << name;
		cout << "\n Number: " << number;
	}
};

class manager : public employee
{
private:
	char title[LEN];
	double dues;
public:
	void getdata()
	{
		employee::getdata();
		cout << "\nEnter position: ";
		cin >> title;
		cout << "\nEnter the amount of contributions ot the golf club: ";
		cin >> dues;
	}
	void putdata() const
	{
		employee::putdata();
		cout << "\nPosition: " << title;
		cout << "\nThe amount of contributions to the golf club: " << dues;
	}
};

class scentist : public employee
{
private:
	int pubs;
public:
	void getdata()
	{
		employee::getdata();
		cout << "Enter the number of publications: ";
		cin >> pubs;
	}
	void putdata() const
	{
		employee::putdata();
		cout << "\n Number of publocations: " << pubs;
	}
};

class laborer : public employee
{};

class foreman : public laborer
{
private:
	float quotas;
public:
	void getdata()
	{
		laborer::getdata();
		cout << "Enter the production rate: ";
		cin >> quotas;
	}
	void putdata() const
	{
		laborer::putdata();
		cout << "Standatd: " << quotas;
	}
};

int main()
{
	laborer l1;
	foreman f1;
	
	cout << endl;

	cout << "\nEntering information about the first worker";
	l1.getdata();
	cout << "\nEntering information about the first foreman";
	f1.getdata();

	cout << endl;
	cout << "\nInformation about the first worker";
	l1.putdata();

	cout << "\nInformation about the first foreman";
	f1.putdata();

	cout << endl;
	return 0;
}