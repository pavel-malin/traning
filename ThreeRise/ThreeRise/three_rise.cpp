#include<iostream>
#include<iomanip>  // setw()

using std::cout;
using std::endl;

using std::setiosflags;
using std::ios;
using std::setw;

int main()
{
	const char ch = 'x';

	for (int i = 1; i < 6; ++i)
	{
		cout << endl  << setw(5);
		for (int j = 0; j < i; ++j)
		{
			cout << ch;
		}
	}
	return 0;
}