#include<iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	// a/b+c/d=(a*d+b*c)/(b*d)
	// 1/4+2/3=(1*3+4*2)/4*3=11/12
	// cin >> a >> dummychar >> b;
	int a, dummychar, b;
	
	cin >> a >> b;
	dummychar = static_cast<float>(a / b + 2/3);
	cout << dummychar << "/";
	dummychar = static_cast<float>((a * 3 + b * 2) / b * 3);
	cout << dummychar;
	return 0;
}