#include<iostream>
#include<iomanip>

using std::cout;
using std::setw;
using std::endl;

int main()
{
	cout  << setw(4) << "1990" << setw(6) << "135" << endl
		<< setw(4) << "1991" << setw(6) << "7290" << endl
		<< setw(4) << "1992" << setw(6) << "11300" << endl
		<< setw(4) << "1993" << setw(6)  << "16200" << endl;
	return 0;
} 