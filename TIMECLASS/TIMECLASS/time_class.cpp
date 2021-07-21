#include<iostream>

using std::cout;
using std::endl;
using std::cin;

//const 
const int HOUR = 12;
const int MINUT = 60;
const int SECONDS = 60;

class Time
{
private:
	int hour;
	int minut;
	int seconds;
public:
	Time() : hour(0), minut(0), seconds(0)
	{}
	Time(int h, int m, int s) : hour(h), minut(m), seconds(s)
	{}
	void time_add(Time t1, Time t2)
	{
		seconds = t1.seconds + t2.seconds;
		if (seconds > SECONDS)
		{
			seconds -= SECONDS;
			minut++;
		}
		minut += t1.minut + t2.minut;
		if (minut > MINUT)
		{
			minut -= MINUT;
			hour++;
		}
		hour += t1.hour + t2.hour;
		if (hour > HOUR)
		{
			hour -= HOUR;
		}
	}
	void display() const
	{
		cout << "Time: " << hour << ":" << minut << ":" << seconds << endl;
	}
};

int main()
{
	Time time3;
	const Time time2(5, 59, 59);
	const Time time1(7, 19, 54);
	time3.time_add(time1, time2);
	time3.display();
	return 0;
}