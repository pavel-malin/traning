// return the contents of the this pointer
#include<iostream>

using std::cout;
using std::endl;

class alpha
{
private:
	int data;
public:
	alpha() // contructor no-arg.
	{}
	alpha(int d) // contructor 1-arg.
	{
		data = d;
	}
	// output data
	void display()
	{
		cout << data;
	}
	alpha& operator = (alpha& a) // overloaded operation =
	{
		data = a.data; // not done automatically
		cout << "\nAssignment statement fired";
		return *this; // return copy this alpha
	}
};

int main()
{
	alpha a1(37);
	alpha a2, a3;
	
	a3 = a2 = a1; // overloaded = two
	// output a2
	cout << "\na2 = ";
	a2.display();
	// output a3
	a3.display();
	cout << endl;
	return 0;
}