#include<iostream>

using std::cout;
using std::cin;
using std::endl;

struct Time
{
	int hours;
	int minutes;
	int seconds;
};

int main()
{
	Time time;
	cout << "Enter time(00:00:00): ";
	cin >> time.hours >> time.minutes >> time.seconds;
	long totalsecs = time.hours * 3600 + time.minutes * 60 + time.seconds;
	cout << endl << "Time: " << time.hours << ":" << time.minutes <<
		":" << time.seconds << endl;
	cout << "Total secs: " << totalsecs;
	return 0;
}