// Friendly classes
#include<iostream>

using std::cout; // using namespace std;
using std::endl;

class alpha
{
private:
	int data1;
public:
	alpha() : data1(99)  // constructor not arg.
	{}
	friend class beta;  // beta - frindly class
};

class beta
{
	// all methods have access to alpha's hidden data
public:
	void func1(alpha a)
	{
		cout << "\ndata1 = " << a.data1;
	}
	void func2(alpha a)
	{
		cout << "\ndata1 = " << a.data1;
	}
};

int main()
{
	alpha a;
	beta b;

	b.func1(a);
	b.func2(a);
	cout << endl;
	return 0;
}