// Copy constructor: X(X&)
#include<iostream>

using std::cout; // using namespace std;
using std::endl;

class alpha
{
private:
	int data;
public:
	alpha()  // constructor not arg.
	{}
	alpha(int d) // constructor 1 arg.
	{
		data = d;
	}
	alpha(alpha& a) // copy constructor
	{
		data = a.data;
		cout << "\nCopy constructor launched";
	}
	void display() // display
	{
		cout << data;
	}
	void operator = (alpha& a) // overloaded = operator
	{
		data = a.data;
		cout << "\nAssignment constructor fired";
	}
};

int main()
{
	alpha a1(37);
	alpha a2;

	a2 = a1; // Run overloaded = 
	// output a2
	cout << "\na2= ";
	a2.display();

	alpha a3(a1); // Running the copy constructor
	// alpha a3 = a1; // Equivalent definition of a3
	// output a3
	cout << "\na3= ";
	a3.display();
	cout << endl;
	return 0;
}