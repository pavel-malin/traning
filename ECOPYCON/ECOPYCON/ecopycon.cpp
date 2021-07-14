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
	Distance() : feet(0), inches(0.0)
	{}
	Distance(int ft, float in) : feet(ft), inches(in)
	{}
	void getdist()
	{
		cout << "\nEnter number of feet: ";
		cin >> feet;
		cout << "Enter number of inches: ";
		cin >> inches;
	}
	void showdist()
	{
		cout << feet << "\'-" << inches << '\"';
	}
};

int main()
{
	Distance dist1(11, 6.25);
	Distance dist2(dist1);
	Distance dist3 = dist1;

	cout << "\ndist1 = ";
	dist1.showdist();
	cout << "\ndist2 = ";
	dist2.showdist();
	cout << "\ndist3 = ";
	dist3.showdist();
	cout << endl;
	return 0;
}