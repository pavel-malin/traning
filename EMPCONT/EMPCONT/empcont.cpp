#include<iostream>
#include<string>

using std::cout;
using std::cin;
using std::endl;

using std::string;


class student
{
private:
	string school;
	string degree;
public:
	void getedu()
	{
		cout << " Enter the name of the instiution: ";
		cin >> school;
		cout << " Enter education level:\n";
		cout << " (incomplete higher, bachelor, master, candidate of science): ";
		cin >> degree;
	}
	void putedu() const
	{
		cout << "\nEducational institution: " << school;
		cout << "\nDegree: " << degree;
	}
};

class employee
{
private:
	string name;
	unsigned long number;
public:
	void getdata()
	{
		cout << "\n Please enter your last name: ";
		cin >> name;
		cout << "\n Enter the number: ";
		cin >> number;
	}
	void putdata() const
	{
		cout << "\nSurname: " << name;
		cout << "\nNumber: " << number;
	}
};

class manager
{
private:
	string title;
	double dues;
	employee emp;
	student stu;
public:
	void getdata()
	{
		emp.getdata();
		cout << " Enter position: ";
		cin >> title;
		cout << " Enter he amount of contribuions to the golf club: ";
		cin >> dues;
		stu.getedu();
	}
	void putdata() const
	{
		emp.putdata();
		cout << "\n Position: " << title;
		cout << "\n Amount of contributions to the golf club: " << dues;
		stu.putedu();
	}
};

class scientist
{
private:
	int pubs;
	employee emp;
	student stu;
public:
	void getdata()
	{
		emp.getdata();
		cout << " Enter the number of publications: ";
		cin >> pubs;
		stu.getedu();
	}
	void putdata() const
	{
		emp.putdata();
		cout << "\nNumber of publications: " << pubs;
		stu.putedu();
	}
};

class laborer
{
private:
	employee emp;
public:
	void getdata()
	{
		emp.getdata();
	}
	void putdata() const
	{
		emp.putdata();
	}
};

int main()
{
	manager m1;
	scientist s1, s2;
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