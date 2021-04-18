#include<iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	
	float decpounds;
	int pounds;
	float decfrac;
	cout << "p" << endl;
	cin >> decpounds;
	pounds = static_cast<int>(decpounds);
	decfrac = decpounds - pounds; // sh *20  p *12
	cout << "J" << pounds << "." << 20 * decfrac << endl;
	return 0;
}