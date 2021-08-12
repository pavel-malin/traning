#include<iostream>

using std::cout;
using std::cin;
using std::endl;

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
	Time(int h, int m,int s) : hour(h), minut(m), seconds(s)
	{}
	void display()
	{
		cout << "Time: " << hour << ":" << minut << ":" << seconds << endl;
	}
	Time operator+(Time t)
	{
		int s = t.seconds + seconds;
		int m = minut + t.minut;
		int h = hour + t.hour;
		if (s > SECONDS)
		{
			s -= SECONDS;
			m++;
		}
		if (m > MINUT)
		{
			m -= MINUT;
			h++;
		}

		if (h > HOUR)
		{
			h -= HOUR;
		}
		return Time(h, m, s);
	}
};


int main()
{
	Time time3;
	Time time2(5, 59, 59);
	Time time1(4, 30, 30);
	time3 = time1 + time2;
	time3.display();
	return 0;
}