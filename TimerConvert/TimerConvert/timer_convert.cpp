#include<iostream>

using std::cout;
using std::cin;
using std::endl;

struct Time
{
	int h;
	int m;
	int s;
};

int main()
{
	long result;
	Time t1, t2;
	cout << "See the time in the format(12:59:59)" << endl;
	cin >> t1.h >> t1.m >> t1.s;
	if (t1.s > 60)
	{
		t2.s = t1.s - 60;
		++t1.m;
		t1.s = t2.s;
	}
	if (t1.m > 60)
	{
		t2.m = t1.m - 60;
		++t1.h;
		t1.m = t2.m;
	}
	if (t1.h > 23)
	{
		t1.h = t1.h - 23;
		--t1.h;
	}
	// long totalsec = t1.housrs*3600 + t1.minutes*60 + t1.seconds
	cout << t1.h << ":" << t1.m << ":" << t1.s << endl;
	result = t1.h * 3600 + t1.m * 60 + t1.s;
	cout << "Result sec: " << result;
	return 0;
}