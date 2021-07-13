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
	void setdist(int ft, float in)
	{
		feet = ft;
		inches = in;
	}
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
};

int main()
{
	Distance dist1, dist2;
	dist1.setdist(11, 6.25);
	dist2.getdist();
	cout << "\ndist1 = ";
	dist1.showdist();
	cout << "\ndist2 = ";
	dist2.showdist();
	cout << endl;
	return 0;
}