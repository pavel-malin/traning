#include<iostream>

using std::cout;
using std::endl;

class foo
{
private:
	static int count;
public:
	foo()
	{
		count++;
	}
	int getcount()
	{
		return count;
	}
};

int foo::count = 0;

int main()
{
	foo f1, f2, f3;
	cout << "Number of objects: " << f1.getcount() << endl;
	cout << "Number of objects: " << f2.getcount() << endl;
	cout << "Number of objects: " << f3.getcount() << endl;
	return 0;
}