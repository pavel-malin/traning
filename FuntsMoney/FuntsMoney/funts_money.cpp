#include<iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	// J7, sh17, p9 = 7.89 
	//	J1=hs20, sh1=p12 
	double j, sh, p;
	cout << "p: ";
	cin >> p >> sh >> j;
	cout << p << endl;
	cout << "sh: ";
	cout << sh + (p/ 12) << endl;
	cout << "j: ";
	cout << j + (sh / 20) << endl;
	return 0;
}