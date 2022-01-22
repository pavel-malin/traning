// operator overload constraint +
#include<iostream>

using std::cout;
using std::endl;

class Distance     // English class distance
{
private:
	int feet;
	float inches;
public:
	Distance() : feet(0), inches(0.0) // Constructor not agr.
	{}
	Distance(float fltfeet) // Constructor 1 agr.
	{
		feet = static_cast<int>(fltfeet);
		inches = 12 * (fltfeet - feet);
	}
	Distance(int ft, float in)  // Constaructor 2 agr.
	{
		feet = ft;
		inches = in;
	}
	void showdist()  // distance display
	{
		cout << feet << "\'-" << inches << '\"';
	}
	Distance operator + (Distance);
};
// Add distance to d2
Distance Distance::operator+(Distance d2)
{
	int f = feet + d2.feet; // add feet
	float i = inches + d2.inches; // add inches
	if (i >= 12.0)
	{
		i -= 12.0;
		f++;
	}
	return Distance(f, i); // New distance with sum
}

int main()
{
	Distance d1 = 2.5;
	Distance d2 = 1.25;
	Distance d3;

	cout << "\nd1 = ";
	d1.showdist();
	cout << "\nd2 = ";
	d2.showdist();
	
	d3 = d1 + 10;  // Distance + float: OK
	cout << "\nd3 = ";
	d3.showdist();
	// d3 = 10.0 + d1; // float + Distance: ERROR
	// cout << "\nd3 = "; d3.showdist();
	cout << endl;
	return 0;
}