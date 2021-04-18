#include<iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	float s,f, p, n, i, t;
	int c;
	s = 1.487F; // $ 1
	f = 0.172F; // $ 1
	n = 0.584F; // $ 1
	i = 0.00955F; // $ 1
	cin >> c;
	t = static_cast<float>(c / s);
	cout << t << endl;
	t = static_cast<float>(c / f);
	cout << t << endl;
	t = static_cast<float>(c / n);
	cout << t << endl;
	t = static_cast<float>(c / i);
	cout << t << endl;
	return 0;
}