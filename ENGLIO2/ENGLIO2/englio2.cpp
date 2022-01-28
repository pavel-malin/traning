// overloaded << and >> operators can work with files
#include<fstream>
#include<iostream>

using std::ofstream;   // using namespace std;
using std::ifstream;
using std::istream;
using std::ostream;

using std::cout;
using std::cin;
using std::endl;

class Distance   // English Distance class
{
private:
	int feet;
	float inches;
public:
	Distance() : feet(0), inches(0.0) // constructor (no args)
	{}
	Distance(int ft, float in) : feet(ft), inches(in)   // constructor (two args)
	{}
	friend istream& operator >> (istream& s, Distance& d);
	friend ostream& operator << (ostream& s, Distance& d);
};

istream& operator >> (istream& s, Distance& d) // get Distance from file or keyboard with
{
	char dummy; // for ('), (-), and (")
	s >> d.feet >> dummy >> dummy >> d.inches >> dummy;
	return s;			// overloaded >> operator
}

ostream& operator << (ostream& s, Distance& d) // send Distance to
{				// file or screen with
	s << d.feet << "\'-" << d.inches << '\"';
	return s;   // overloaded << operator
}

int main()
{
	char ch;
	Distance dist1;
	ofstream ofile;  // create and open
	ofile.open("DIST.DAT");  // output stream

	do
	{
		cout << "\nEnter Distance: ";
		cin >> dist1;  // get distance from user
		ofile << dist1; // write it to output str
		cout << "Do anther (y/n)? ";
		cin >> ch;
	} while (ch != 'n');
	ofile.close();  // close output stream

	ifstream ifile;  // create and open
	ifile.open("DIST.DAT");  // input stream

	cout << "\nContents of dist file is:\n";
	while (true)
	{
		ifile >> dist1;  // read dist from stream
		if (ifile.eof())  // quit on EOF
			break;
		cout << "Distance = " << dist1 << endl; // display distance
	}
	return 0;
}