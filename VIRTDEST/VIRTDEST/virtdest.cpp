#include<iostream>

using std::cout;
using std::endl;

class Base
{
public:
	~Base()
		// virtual ~Base()
	{
		cout << "Base delete\n";
	}
};

class Derv : public Base
{
public:
	~Derv()
	{
		cout << "Derv delete";
	}
};

int main()
{
	Base* pBase = new Derv;
	delete pBase;
	return 0;
}