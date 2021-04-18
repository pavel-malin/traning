// не много не понимаю как решить задачу 
// надо понять как добаволят дробную часть и какой формулой вычитать дроби 

#include<iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	// J7, sh17, p9 = 7.89 
	//	J1=hs20, sh1=p12
	float decpounds, j, sh, p;
	int pounds;
	float decfrac;
	cout << "p: ";
	cin >> p;
	cout << p * 20 << endl;
	cout << "sh: ";
	cin >> sh;
	pounds = static_cast<int>(decpounds);
	decfrac = decpounds - pounds;
	/*
	double j, sh, p;
	cout << "p: ";
	cin >> p;
	cout << p << endl;
	cout << "sh: ";
	cin >> sh;
	cout << sh + (p / 12) << endl;
	cout << "j: ";
	cin >> j;
	cout << j + (sh / 20) << endl;
	*/
	return 0;
}