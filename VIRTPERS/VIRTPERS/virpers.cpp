#include<iostream>

using std::cout;
using std::cin;
using std::endl;

class person
{
protected:
	char name[40];
public:
	void getName()
	{
		cout << " Input to name: ";
		cin >> name;
	}
	void putName()
	{
		cout << " Name: " << name << endl;
	}
	virtual void getData() = 0;
	virtual bool isOutstanding() = 0;
};

class student : public person
{
private:
	float gpa;
public:
	void getData()
	{
		person::getName();
		cout << " Pupil grade point average: ";
		cin >> gpa;
	}
	bool  isOutstanding()
	{
		return (gpa > 3.5) ? true : false;
	}
};

class professor : public person
{
private:
	int numPubs;
public:
	void getData()
	{
		person::getName();
		cout << " Number of publications: ";
		cin >> numPubs;
	}
	bool isOutstanding()
	{
		return (numPubs > 100) ? true : false;
	}
};

int main()
{
	person* persnPTR[100];
	int n = 0;
	char choice;

	do {
		cout << " Studens (s) or Pedagogue (p): ";
		cin >> choice;
		if (choice == 's')
		{
			persnPTR[n] = new student;
		}
		else
		{
			persnPTR[n] = new professor;
		}
		persnPTR[n++]->getData();
		cout << " Input for person(y/n)? ";

		cin >> choice;
	} while (choice == 'y');

	for (int j = 0; j < n; j++)
	{
		persnPTR[j]->putName();
		if (persnPTR[j]->isOutstanding())
			cout << " This is an outstanding person!\n";
	}
	return 0;
}