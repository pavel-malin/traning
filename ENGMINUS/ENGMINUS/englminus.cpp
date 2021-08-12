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
		cout << "Input feet: ";
		cin >> feet;
		cout << "Input inches: ";
		cin >> inches;
	}
	void showdist()
	{
		cout << feet << "\'-" << inches << '\"';
	}
	Distance operator+(Distance) const;
	Distance operator-(Distance) const;
};


Distance Distance::operator+(Distance d2)const
{
	int f = feet + d2.feet;
	float i = inches + d2.inches;
	if (i >= 12.0)
	{
		i -= 12.0;
		f++;
	}
	return Distance(f, i);
}

Distance Distance::operator-(Distance d2) const
{
	int f = feet - d2.feet;
	float i = inches - d2.inches;
	if (i >= 12.0)
	{
		i -= 12.0;
		--f;
	}
	else
	{
		cout << "Can't be negative!!!!" << endl;
	}
	return Distance(f, i);
}

int main()
{
	Distance dist1, dist3, dist4;
	dist1.getdist();

	Distance dist2(11, 6.25);

	dist3 = dist1 - dist2;
	dist4 = dist1 - dist2 - dist3;

	cout << "dist1 = ";
	dist1.showdist();
	cout << endl;
	cout << "dist2 = ";
	dist2.showdist();
	cout << endl;
	cout << "dist3 = ";
	dist3.showdist();
	cout << endl;
	cout << "dist4 = ";
	dist4.showdist();
	cout << endl;

	return 0;
}