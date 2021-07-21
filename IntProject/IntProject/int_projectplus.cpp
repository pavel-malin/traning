#include<iostream>

using std::cout;
using std::endl;
using std::cin;

class Int
{
private:
	int i;
	int n;
	int t;
public:
	Int() : i(0), n(0), t(0)
	{}
	Int(int in, int nt, int ni) : i(in), n(nt), t(ni)
	{}
	void dist()
	{
		cout << "Plus number(1): ";
		cin >> i;
		cout << "\nPlus number(2): ";
		cin >> n;
	}
	void plus()
	{
		t = i + n;
		cout << "Result: " << t;
	}
	
};

int main()
{
	Int i1;
	i1.dist();
	i1.plus();
	return 0;
}