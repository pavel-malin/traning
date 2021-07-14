#include<iostream>

using std::cout;
using std::cin;
using std::endl;

class Distance
{
private:
	int feet;
	float inches;
public:
	Distance() : feet(0), inches(0)
	{}
	Distance(int ft, float in) : feet(ft), inches(in)
	{}
	void getdist()
	{
		cout << "\nEnter the number of feet: ";
		cin >> feet;
		cout << "Enter the number of inches: ";
		cin >> inches;
	}
	void showdist()
	{
		cout << feet << "\'-" << inches << '\"';
	}
	Distance add_dist(Distance);
};

Distance Distance::add_dist(Distance d2)
{
	Distance temp;
	temp.inches = inches + d2.inches;
	if (temp.inches >= 12.0)
	{
		temp.inches -= 12.0;
		temp.feet = 1;
	}
	temp.feet += feet + d2.feet;
	return temp;
}

int main()
{
	Distance dist1, dist3;
	Distance dist2(11, 6.25);
	dist1.getdist();
	dist3 = dist1.add_dist(dist2);

	cout << "\ndist1 = ";
	dist1.showdist();
	cout << "\ndis2 = ";
	dist2.showdist();
	cout << "\ndist3 = ";
	dist3.showdist();
	cout << endl;
	return 0;
}