// assignment overload (=)
#include<iostream>

using std::cout; // using namespace std;
using std::endl;

class alpha
{
private:
	int data;
public:
	alpha()  // constaructor not arg.
	{}
	alpha(int d) // constacructor 1 arg.
	{
		data = d;
	}
	// output data
	void display()
	{
		cout << data;
	}
	alpha operator=(alpha& a)  // overloadable = 
	{
		data = a.data; // not done automatically
		cout << "\nAssignment statement fired";
		return alpha(a); // return copy alpha
	}
};

int main()
{
	alpha a1(37);
	alpha a2;

	a2 = a1; // run overdriven =
	cout << "\na2 =";
	a2.display(); // output a2

	alpha a3 = a2; // not overloadable =
	cout << "\na3 = ";
	// output a3
	a3.display();
	cout << endl;
	return 0;
}