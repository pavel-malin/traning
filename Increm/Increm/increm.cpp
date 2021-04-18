#include<iostream>

using std::cout;
using std::endl;

int main()
{
	int count = 10;
	cout << "count=" << count << endl;
	cout << "count=" << ++count << endl;
	cout << "count=" << count << endl;
	cout << "count=" << count++ << endl;
	cout << "count=" << count << endl;
	return 0;
}