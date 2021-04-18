#include<iostream>

using std::cout;
using std::cin;

int main()
{
	// *9/5-32 = ..f.
	float c, f;
	cin >> c;
	f = static_cast<float>(c * 9 / 5 + 32);
	cout << f;
	return 0;
}