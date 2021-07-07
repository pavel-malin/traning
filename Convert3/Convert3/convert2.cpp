#include<iostream>

using std::cout;
using std::cin;
using std::endl;

inline float lbstokg(float pounds)
{
	return 0.453592 * pounds;
}

int main()
{
	setlocale(LC_ALL, "");
	float lbs;
	cout << "\n¬ведите вес фунтах: ";
	cin >> lbs;
	cout << " " << lbstokg(lbs) << endl;
	return 0;
}