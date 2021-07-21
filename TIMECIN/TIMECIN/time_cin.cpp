#include<iostream>

using std::cout;
using std::endl;
using std::cin;

//const 
const int HOUR = 23;
const int MINUT = 60;
const int SECONDS = 60;

class Time
{
private:
	int hour, minut, seconds;
public:
	Time() : hour(0), minut(0), seconds(0)
	{}
	Time(int h, int m, int s) : hour(h), minut(m), seconds(s)
	{}
	void timedist()
	{
		cout << "Hour: ";
		cin >> hour;
		cout << "Minut: ";
		cin >> minut;
		cout << "Seconds: ";
		cin >> seconds;
	}
	void display() const
	{
		cout << "Time: " << hour << ":" << minut << ":" << seconds << endl;
	}
	Time plus(const Time&) const;
};

Time Time::plus(const Time& t1) const
{
	Time time;
	time.seconds = seconds + t1.seconds;
	if (time.seconds > SECONDS)
	{
		time.seconds -= SECONDS;
		time.minut++;
	}
	time.minut += minut + t1.minut;
	if (time.minut > MINUT)
	{
		time.minut -= MINUT;
		time.hour++;
	}
	time.hour += hour + t1.hour;
	if (time.hour > HOUR)
	{
		time.hour -= HOUR;
	}
	return time;
}

int main()
{
	Time time2, time3;
	const Time time1(7, 19, 54);
	time2.timedist();
	time3 = time1.plus(time2);
	time3.display();
	return 0;
}