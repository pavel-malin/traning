#include<iostream>

using std::cout;
using std::endl;

class Distance // English length class
{
private:
	int feet;
	float inches;
public:
	// Constructor not arg.
	Distance() : feet(0), inches(0)
	{}
	// Constructor 2 args
	Distance(int ft, float in) : feet(ft), inches(in)
	{}
	void showdist()
	{
		cout << feet << "\'-" << inches << '\"';
	}
	float square(); // conventional method
};

float Distance::square() // return square distance
{
	float fltfeet = feet + inches / 12; // convert to float
	float feetsqrd = fltfeet * fltfeet; // squaring
	return feetsqrd; // return square
}

int main()
{
	Distance dist(3, 6.0); // constructor 2 arg.
	float sqft;

	sqft = dist.square(); // calculating the square of the distance
	// show distance and distance squared
	cout << "\nDistance = ";
	dist.showdist();
	cout << "\nDistance squared = " << sqft << " square feet\n";
	return 0;
}