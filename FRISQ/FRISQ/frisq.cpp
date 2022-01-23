// Distance-friendly function square()
#include<iostream>

using std::cout;  // using namespace std;
using std::endl;

class Distance  // English length class
{
private:
	int feet;
	float inches;
public:
	Distance() : feet(0), inches(0.0) // constructor not arg.
	{}
	Distance(int ft, float in) : feet(ft), inches(in) // constructor 2 arg.
	{}
	void showdist()
	{
		cout << feet << "\'-" << inches << '\"';
	}
	friend float square(Distance); // Friendly function
};

float square(Distance d)  // Return the square of the distance 
{
	float fltfeet = d.feet + d.inches / 12; // convert to float type
	float feetdqrd = fltfeet * fltfeet; // calculate the square
	return feetdqrd; // return square feet
}

int main()
{
	Distance dist(3, 6.0); // constructor 2 arg.

	float sqft;

	sqft = square(dist); // Return square dist
	// Print the distance and its square
	cout << "\nDistance = ";
	dist.showdist();
	cout << "\nDistance square = " << sqft << " square feet\n";
	return 0;
}