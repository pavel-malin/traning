// Static functions and object IDs
#include<iostream>

using std::cout; // using namespace std;
using std::endl;

class gamma
{
private:
	static int total; // all objects of the class(declaration only)

	int id; // ID of the current object
public:
	gamma()  // constructor not arg.
	{
		total++; // add object
		id = total; // id is equal to the current value of total
	}
	~gamma()  // destructor
	{
		total--;
		cout << "Delete ID " << id << endl;
	}
	static void showtotal() // static func
	{
		cout << "Always: " << total << endl;
	}
	void showid() // not static func
	{
		cout << "ID: " << id << endl;
	}
};

int gamma::total = 0; // definition of total

int main()
{
	gamma g1;
	gamma::showtotal();
	
	gamma g2, g3;
	gamma::showtotal();
	
	g1.showid();
	g2.showid();
	g3.showid();
	cout << "-------END------\n";
	return 0;
}