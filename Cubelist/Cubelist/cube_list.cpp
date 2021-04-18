#include<iostream>
#include<iomanip>

using std::cout;
using std::endl;

using std::setw;

int main()
{
	int numb;
	for (numb = 1; numb <= 10; numb++)
	{
		cout << setw(4) << numb;
		int cube = numb * numb * numb;
		cout << setw(6) << cube << endl;
	}
	return 0;
}