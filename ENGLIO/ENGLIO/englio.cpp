// overloaded << and >> opetators
#include<iostream>

using std::istream;
using std::ostream;
using std::cout;  // using namespace std;
using std::endl;
using std::cin;

class Distance    // English Distance class 
{
private:
	int feet;
	float  inches;
public:
	Distance() : feet(0), inches(0.0) // constructor (no agrs)
	{}
	Distance(int ft, float in) : feet(ft), inches(in)
	{}
	friend istream& operator >> (istream& s, Distance& d);
	friend ostream& operator << (ostream& s, Distance& d);
};

istream& operator >> (istream& s, Distance& d)   // get Distance from user
{
	cout << "\nEnter feet: ";  
	s >> d.feet;  // using overloaded 
	cout << "Enter inches: ";
	s >> d.inches; //  >> operator
	return s;
}

ostream& operator << (ostream& s, Distance& d) // display Distance
{
	s << d.feet << "\-'" << d.inches << '\"'; // using overloaded << operator
	return s;
}

int main()
{
	Distance dist1, dist2;  //  define Distances
	Distance dist3(11, 6.25);  // define, initialize dist3
	
	cout << "\nEnter two Distance values: ";
	cin >> dist1 >> dist2;  // get values from user
							// display distances
	cout << "\ndist1 = " << dist1 << "\ndist2 = " << dist2;
	cout << "\ndist3 = " << dist3 << endl;
	return 0;
}